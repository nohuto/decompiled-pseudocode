/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x1404CA608
 * Callers:
 *     SepIsLockedDown @ 0x14068CAC0 (SepIsLockedDown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KIsUnlockSettingEnabled @ 0x1404CA6FC (KIsUnlockSettingEnabled.c)
 *     sub_1406AF8BC @ 0x1406AF8BC (sub_1406AF8BC.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFC40 (ExpTriggerFastCacheReeval.c)
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
    sub_1406AF8BC(8444LL);
    goto LABEL_16;
  }
LABEL_12:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  return v0;
}
