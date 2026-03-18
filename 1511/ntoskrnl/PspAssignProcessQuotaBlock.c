/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x1403BD170
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 * Callees:
 *     PspUnlockQuotaListShared @ 0x140003178 (PspUnlockQuotaListShared.c)
 *     PspLockQuotaListShared @ 0x1400031B8 (PspLockQuotaListShared.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PspLookupProcessQuotaBlock @ 0x1403BD32C (PspLookupProcessQuotaBlock.c)
 *     PspReadUserQuotaLimits @ 0x1403BD444 (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x1403BD9F8 (PspSafeReferenceQuotaBlock.c)
 *     PspDereferenceQuotaBlock @ 0x14046C324 (PspDereferenceQuotaBlock.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 *     PspInitializeQuotaBlock @ 0x140547554 (PspInitializeQuotaBlock.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // r14
  unsigned __int8 v6; // r12
  ULONG v7; // esi
  volatile signed __int32 *v8; // rbx
  int UserQuotaLimits; // edi
  struct _KTHREAD *CurrentThread; // rsi
  int *v11; // rdi
  volatile signed __int64 *v12; // r12
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v15; // rdi
  ULONG DestinationSidLength; // [rsp+24h] [rbp-55h]
  int v17; // [rsp+28h] [rbp-51h]
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  char v19; // [rsp+80h] [rbp+7h] BYREF

  v5 = 0LL;
  v6 = 0;
  SeQueryUserSidToken(a3, SourceSid, 68LL);
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v7 = 0;
    v6 = 1;
  }
  else
  {
    v7 = DestinationSidLength;
    v5 = SourceSid;
  }
  v8 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v5, v7, v6, 0LL);
  if ( v8 )
    goto LABEL_10;
  if ( a1 )
  {
    v11 = 0LL;
  }
  else
  {
    UserQuotaLimits = PspReadUserQuotaLimits(SourceSid);
    if ( UserQuotaLimits < 0 )
      return (unsigned int)UserQuotaLimits;
    if ( v17 )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = PspDefaultResourceLimits;
      v12 = (volatile signed __int64 *)PspQuotaBlockTable;
      v5 = 0LL;
      PspLockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)PspQuotaBlockTable);
      v8 = (volatile signed __int32 *)PspDefaultQuotaBlock;
      if ( PspDefaultQuotaBlock && (unsigned int)PspSafeReferenceQuotaBlock(PspDefaultQuotaBlock) )
      {
        PspUnlockQuotaListShared((__int64)CurrentThread, v12);
        _InterlockedIncrement(v8 + 129);
        goto LABEL_10;
      }
      PspUnlockQuotaListShared((__int64)CurrentThread, v12);
      v7 = 0;
      v6 = 1;
    }
    else
    {
      v11 = (int *)&v19;
    }
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7 + 576LL, 0x62517350u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    UserQuotaLimits = PspInitializeQuotaBlock(a1, v11, PoolWithTag);
    if ( UserQuotaLimits < 0 )
    {
LABEL_27:
      if ( v8 )
      {
        _InterlockedDecrement(v8 + 129);
        PspDereferenceQuotaBlock((PVOID)v8);
      }
      return (unsigned int)UserQuotaLimits;
    }
    if ( v5 )
      RtlCopySid(v7, (PSID)(v8 + 144), SourceSid);
    v15 = PspLookupProcessQuotaBlock(v5, v7, v6, v8);
    if ( v15 )
    {
      _InterlockedDecrement(v8 + 129);
      PspDereferenceQuotaBlock((PVOID)v8);
      v8 = (volatile signed __int32 *)v15;
    }
LABEL_10:
    if ( !*(_QWORD *)(a2 + 1040) )
    {
      *(_QWORD *)(a2 + 1040) = v8;
      return 0LL;
    }
    if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)(a2 + 1040),
                       (signed __int64)v8,
                       (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
      return 0LL;
    UserQuotaLimits = -1073741823;
    goto LABEL_27;
  }
  return (unsigned int)-1073741670;
}
