/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x1405594C8
 * Callers:
 *     SepIsLockedDown @ 0x1406D0808 (SepIsLockedDown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KIsUnlockSettingEnabled @ 0x14055393C (KIsUnlockSettingEnabled.c)
 *     sub_1406ED694 @ 0x1406ED694 (sub_1406ED694.c)
 *     ExpTriggerFastCacheReeval @ 0x1406EDB4C (ExpTriggerFastCacheReeval.c)
 */

bool ExQueryFastCacheDevLicense()
{
  __int64 v0; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  char v9; // dl
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  int v12; // [rsp+20h] [rbp-28h] BYREF
  const wchar_t *v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v12 = 4456514;
  v13 = L"AllowDevelopmentWithoutDevLicense";
  v14 = 0;
  if ( (int)KIsUnlockSettingEnabled((__int64)&v12, (bool *)&v14) >= 0 && v14 )
    return v14;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0LL, v0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpFastCacheLock, v5, (ULONG_PTR)&ExpFastCacheLock, v6);
  v7 = 1LL;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( dword_14077E558 )
  {
LABEL_12:
    ExpTriggerFastCacheReeval(v4, v3, v7);
    goto LABEL_17;
  }
  if ( dword_14077E550 )
  {
    v8 = *(_QWORD *)(qword_14077E548 + 8);
    if ( (unsigned __int64)qword_14077EAD0 <= *(_QWORD *)(v8 + 32) )
    {
      if ( *(_DWORD *)(v8 + 40) == 16 )
      {
        v9 = v14;
        if ( *(_DWORD *)(v8 + 44) == 1 )
          v9 = 1;
        v14 = v9;
      }
      goto LABEL_17;
    }
    sub_1406ED694(8444LL);
    goto LABEL_12;
  }
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v14;
}
