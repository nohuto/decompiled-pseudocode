/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x140543A18
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
 *     PspDereferenceQuotaBlock @ 0x1404D0058 (PspDereferenceQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140543C70 (PspLookupProcessQuotaBlock.c)
 *     PspReadUserQuotaLimits @ 0x140543E3C (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x140543F98 (PspSafeReferenceQuotaBlock.c)
 *     PspInitializeQuotaBlock @ 0x1405BE3DC (PspInitializeQuotaBlock.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v5; // bl
  _BYTE *v6; // r14
  ULONG v7; // edi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r8
  _BOOL8 v11; // r9
  int UserQuotaLimits; // esi
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r9
  signed __int64 v18; // r8
  __int16 v19; // ax
  __int16 v21; // ax
  int *v22; // rsi
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v24; // rdi
  unsigned __int8 v25; // [rsp+20h] [rbp-69h]
  ULONG DestinationSidLength[7]; // [rsp+24h] [rbp-65h] BYREF
  _BYTE SourceSid[80]; // [rsp+40h] [rbp-49h] BYREF
  char v28; // [rsp+90h] [rbp+7h] BYREF

  v5 = 0;
  v25 = 0;
  v6 = 0LL;
  SeQueryUserSidToken(a3, SourceSid, 0x44u, DestinationSidLength);
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v5 = 1;
    DestinationSidLength[0] = 0;
    v25 = 1;
    v7 = 0;
  }
  else
  {
    v7 = DestinationSidLength[0];
    v6 = SourceSid;
  }
  v9 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v6, v7, v5, 0LL);
  if ( v9 )
    goto LABEL_18;
  if ( a1 )
  {
    v22 = 0LL;
  }
  else
  {
    UserQuotaLimits = PspReadUserQuotaLimits(SourceSid);
    if ( UserQuotaLimits < 0 )
      return (unsigned int)UserQuotaLimits;
    if ( DestinationSidLength[1] )
    {
      CurrentThread = KeGetCurrentThread();
      v15 = (unsigned __int64 *)PspQuotaBlockTable;
      v6 = 0LL;
      DestinationSidLength[0] = 0;
      v25 = 1;
      --CurrentThread->KernelApcDisable;
      v16 = KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0LL, v13);
      v18 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v15, v16, (ULONG_PTR)v15, v17);
        v18 = 17LL;
      }
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v9 = (volatile signed __int32 *)PspDefaultQuotaBlock;
      if ( PspDefaultQuotaBlock && (unsigned int)PspSafeReferenceQuotaBlock(PspDefaultQuotaBlock) )
      {
        if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v15, 0LL, v18) )
          ExfReleasePushLockShared((signed __int64 *)v15);
        KeAbPostRelease((ULONG_PTR)v15);
        v19 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v19;
        if ( !v19
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        _InterlockedIncrement(v9 + 129);
        goto LABEL_18;
      }
      if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v15, 0LL, v18) )
        ExfReleasePushLockShared((signed __int64 *)v15);
      KeAbPostRelease((ULONG_PTR)v15);
      v21 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v21;
      if ( !v21
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v7 = DestinationSidLength[0];
      v22 = &PspDefaultResourceLimits;
    }
    else
    {
      v22 = (int *)&v28;
    }
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7 + 576LL, 0x62517350u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    UserQuotaLimits = PspInitializeQuotaBlock(a1, v22, PoolWithTag);
    if ( UserQuotaLimits < 0 )
    {
LABEL_43:
      if ( v9 )
      {
        _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
        PspDereferenceQuotaBlock(v9, v8, v10, v11);
      }
      return (unsigned int)UserQuotaLimits;
    }
    if ( v6 )
      RtlCopySid(v7, (PSID)(v9 + 144), SourceSid);
    v24 = PspLookupProcessQuotaBlock(v6, v7, v25, v9);
    if ( v24 )
    {
      _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
      PspDereferenceQuotaBlock(v9, v8, v10, v11);
      v9 = (volatile signed __int32 *)v24;
    }
LABEL_18:
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
    goto LABEL_43;
  }
  return (unsigned int)-1073741670;
}
