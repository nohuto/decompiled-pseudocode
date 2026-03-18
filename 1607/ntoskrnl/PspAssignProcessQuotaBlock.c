/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x1404D7894
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 * Callees:
 *     PspUnlockQuotaListShared @ 0x1400AA5D0 (PspUnlockQuotaListShared.c)
 *     PspLockQuotaListShared @ 0x1400AA60C (PspLockQuotaListShared.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeQueryUserSidToken @ 0x1403FFC40 (SeQueryUserSidToken.c)
 *     RtlCopySid @ 0x14041268C (RtlCopySid.c)
 *     PspDereferenceQuotaBlock @ 0x1404A6018 (PspDereferenceQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x1404D7A50 (PspLookupProcessQuotaBlock.c)
 *     PspReadUserQuotaLimits @ 0x1404D7B68 (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x1404D7CC4 (PspSafeReferenceQuotaBlock.c)
 *     PspInitializeQuotaBlock @ 0x14057C79C (PspInitializeQuotaBlock.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // r14
  unsigned __int8 v6; // r12
  ULONG v7; // esi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r8
  _BOOL8 v11; // r9
  int UserQuotaLimits; // edi
  struct _KTHREAD *CurrentThread; // rsi
  int *v14; // rdi
  volatile signed __int64 *v15; // r12
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v18; // rdi
  ULONG DestinationSidLength[3]; // [rsp+24h] [rbp-55h] BYREF
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  char v21; // [rsp+80h] [rbp+7h] BYREF

  v5 = 0LL;
  v6 = 0;
  SeQueryUserSidToken(a3, SourceSid, 0x44u, DestinationSidLength);
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v7 = 0;
    v6 = 1;
    DestinationSidLength[0] = 0;
  }
  else
  {
    v7 = DestinationSidLength[0];
    v5 = SourceSid;
  }
  v9 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v5, v7, v6, 0LL);
  if ( v9 )
    goto LABEL_10;
  if ( a1 )
  {
    v14 = 0LL;
  }
  else
  {
    UserQuotaLimits = PspReadUserQuotaLimits(SourceSid);
    if ( UserQuotaLimits < 0 )
      return (unsigned int)UserQuotaLimits;
    if ( DestinationSidLength[1] )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = PspDefaultResourceLimits;
      v15 = (volatile signed __int64 *)PspQuotaBlockTable;
      v5 = 0LL;
      DestinationSidLength[0] = 0;
      PspLockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)PspQuotaBlockTable);
      v9 = (volatile signed __int32 *)PspDefaultQuotaBlock;
      if ( PspDefaultQuotaBlock && (unsigned int)PspSafeReferenceQuotaBlock(PspDefaultQuotaBlock) )
      {
        PspUnlockQuotaListShared((__int64)CurrentThread, v15);
        _InterlockedIncrement(v9 + 129);
        goto LABEL_10;
      }
      PspUnlockQuotaListShared((__int64)CurrentThread, v15);
      v7 = DestinationSidLength[0];
      v6 = 1;
    }
    else
    {
      v14 = (int *)&v21;
    }
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7 + 576LL, 0x62517350u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    UserQuotaLimits = PspInitializeQuotaBlock(a1, v14, PoolWithTag);
    if ( UserQuotaLimits < 0 )
    {
LABEL_27:
      if ( v9 )
      {
        _InterlockedDecrement(v9 + 129);
        PspDereferenceQuotaBlock(v9, v8, v10, v11);
      }
      return (unsigned int)UserQuotaLimits;
    }
    if ( v5 )
      RtlCopySid(v7, (PSID)(v9 + 144), SourceSid);
    v18 = PspLookupProcessQuotaBlock(v5, v7, v6, v9);
    if ( v18 )
    {
      _InterlockedDecrement(v9 + 129);
      PspDereferenceQuotaBlock(v9, v8, v10, v11);
      v9 = (volatile signed __int32 *)v18;
    }
LABEL_10:
    if ( !*(_QWORD *)(a2 + 1040) )
    {
      *(_QWORD *)(a2 + 1040) = v9;
      return 0LL;
    }
    if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)(a2 + 1040),
                       (signed __int64)v9,
                       (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
      return 0LL;
    UserQuotaLimits = -1073741823;
    goto LABEL_27;
  }
  return (unsigned int)-1073741670;
}
