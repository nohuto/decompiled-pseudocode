/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x1404B8DC0
 * Callers:
 *     SepIsLockedDown @ 0x14064D3D0 (SepIsLockedDown.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KIsUnlockSettingEnabled @ 0x1404B8EB4 (KIsUnlockSettingEnabled.c)
 *     sub_14066A098 @ 0x14066A098 (sub_14066A098.c)
 *     ExpTriggerFastCacheReeval @ 0x14066A550 (ExpTriggerFastCacheReeval.c)
 */

char ExQueryFastCacheDevLicense()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+60h] [rbp+8h] BYREF

  v5 = 4456514;
  v6 = L"AllowDevelopmentWithoutDevLicense";
  v7 = 0xFFFF;
  v0 = 0;
  if ( (int)KIsUnlockSettingEnabled(&v5, &v7) >= 0 )
  {
    if ( v7 == 1 )
      return 1;
    v0 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpFastCacheLock, v3, (ULONG_PTR)&ExpFastCacheLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( dword_1406FB528 )
  {
LABEL_16:
    ExpTriggerFastCacheReeval();
    goto LABEL_12;
  }
  if ( dword_1406FB520 )
  {
    v4 = *(_QWORD *)(qword_1406FB518 + 8);
    if ( (unsigned __int64)qword_1406FBAD8 <= *(_QWORD *)(v4 + 32) )
    {
      if ( *(_QWORD *)(v4 + 40) == 0x100000010LL )
        v0 = 1;
      goto LABEL_12;
    }
    sub_14066A098(8444LL);
    goto LABEL_16;
  }
LABEL_12:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v0;
}
