/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1406693DC
 * Callers:
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
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

__int64 __fastcall ExUpdateOsPfnInRegistry(ULONG DataSize, PVOID Data, ULONG a3, PVOID a4)
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v9; // rbx
  char v11; // [rsp+40h] [rbp-38h]
  NTSTATUS v12; // [rsp+44h] [rbp-34h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-30h] BYREF

  v12 = 0;
  KeyHandle = 0LL;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v9, (ULONG_PTR)&qword_1406FBA20);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( DataSize )
  {
    if ( a3 )
    {
      v12 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1406A2638, 0, 0LL, 0, 0LL);
      if ( v12 >= 0 )
      {
        v11 = 1;
        v12 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406A1858, 0, 1u, Data, DataSize);
        if ( v12 >= 0 )
          v12 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406A1C58, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v11 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v12;
}
