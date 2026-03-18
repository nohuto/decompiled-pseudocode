/*
 * XREFs of sub_1404885A8 @ 0x1404885A8
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 */

__int64 sub_1404885A8()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rbx
  char v3; // [rsp+70h] [rbp+8h]
  NTSTATUS v4; // [rsp+78h] [rbp+10h]
  HANDLE KeyHandle; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v1, (ULONG_PTR)&qword_1406FBA20);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  if ( Data )
  {
    v4 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1406A2608, 0, 0LL, 0, 0LL);
    if ( v4 >= 0 )
    {
      v3 = 1;
      v4 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406A1C68, 0, 3u, Data, *(_DWORD *)Data);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v3 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
