/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1406ECA08
 * Callers:
 *     sub_140701190 @ 0x140701190 (sub_140701190.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 */

__int64 __fastcall ExUpdateOsPfnInRegistry(ULONG DataSize, PVOID Data, ULONG a3, PVOID a4)
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v9; // rbx
  __int64 v10; // r9
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  char v14; // [rsp+40h] [rbp-38h]
  NTSTATUS v15; // [rsp+44h] [rbp-34h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-30h] BYREF

  v15 = 0;
  KeyHandle = 0LL;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, (__int64)a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14077EA20, v9, (ULONG_PTR)&qword_14077EA20, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( DataSize )
  {
    if ( a3 )
    {
      v15 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1407227C8, 0, 0LL, 0, 0LL);
      if ( v15 >= 0 )
      {
        v14 = 1;
        v15 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140721AA8, 0, 1u, Data, DataSize);
        if ( v15 >= 0 )
          v15 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140721E90, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v14 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v15;
}
