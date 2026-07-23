/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1406AEB70
 * Callers:
 *     <none>
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

__int64 __fastcall ExUpdateOsPfnInRegistry(ULONG DataSize, PVOID Data, ULONG a3, PVOID a4)
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+40h] [rbp-38h]
  NTSTATUS v15; // [rsp+44h] [rbp-34h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-30h] BYREF

  v15 = 0;
  KeyHandle = 0LL;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747B20, v9, (ULONG_PTR)&qword_140747B20);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( DataSize )
  {
    if ( a3 )
    {
      v15 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1406EA850, 0, 0LL, 0, 0LL);
      if ( v15 >= 0 )
      {
        v14 = 1;
        v15 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406E99D0, 0, 1u, Data, DataSize);
        if ( v15 >= 0 )
          v15 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406E9DD8, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( v14 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v15;
}
