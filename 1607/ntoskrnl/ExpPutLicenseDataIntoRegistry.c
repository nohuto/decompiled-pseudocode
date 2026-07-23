/*
 * XREFs of ExpPutLicenseDataIntoRegistry @ 0x1404D1CE8
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 */

__int64 ExpPutLicenseDataIntoRegistry()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v6; // [rsp+70h] [rbp+8h]
  NTSTATUS v7; // [rsp+78h] [rbp+10h]
  HANDLE KeyHandle; // [rsp+80h] [rbp+18h] BYREF

  v7 = 0;
  KeyHandle = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747B20, v1, (ULONG_PTR)&qword_140747B20);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  if ( Data )
  {
    v7 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1406EA820, 0, 0LL, 0, 0LL);
    if ( v7 >= 0 )
    {
      v6 = 1;
      v7 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406E9DE8, 0, 3u, Data, *(_DWORD *)Data);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
  if ( v6 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v7;
}
