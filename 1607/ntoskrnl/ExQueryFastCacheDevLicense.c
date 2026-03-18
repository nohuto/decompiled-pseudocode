/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x1404E827C
 * Callers:
 *     SepIsLockedDown @ 0x14068C9DC (SepIsLockedDown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     KIsUnlockSettingEnabled @ 0x1404E8370 (KIsUnlockSettingEnabled.c)
 *     sub_1406AF784 @ 0x1406AF784 (sub_1406AF784.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFB08 (ExpTriggerFastCacheReeval.c)
 */

char ExQueryFastCacheDevLicense()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v8 = 4456514;
  v9 = L"AllowDevelopmentWithoutDevLicense";
  v10 = 0xFFFF;
  v0 = 0;
  if ( (int)KIsUnlockSettingEnabled(&v8, &v10) >= 0 )
  {
    if ( v10 == 1 )
      return 1;
    v0 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpFastCacheLock, v3, (ULONG_PTR)&ExpFastCacheLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( dword_140747598 )
  {
LABEL_16:
    ExpTriggerFastCacheReeval();
    goto LABEL_12;
  }
  if ( dword_140747590 )
  {
    v7 = *(_QWORD *)(qword_140747588 + 8);
    if ( (unsigned __int64)qword_140747BD8 <= *(_QWORD *)(v7 + 32) )
    {
      if ( *(_QWORD *)(v7 + 40) == 0x100000010LL )
        v0 = 1;
      goto LABEL_12;
    }
    sub_1406AF784(8444LL);
    goto LABEL_16;
  }
LABEL_12:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  return v0;
}
