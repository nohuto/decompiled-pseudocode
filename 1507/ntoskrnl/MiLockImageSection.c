/*
 * XREFs of MiLockImageSection @ 0x1404251F4
 * Callers:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 * Callees:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 */

void __fastcall MiLockImageSection(int a1, volatile signed __int32 *a2, ULONG_PTR *a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ett
  __int16 v11; // ax
  __int16 v12; // ax
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = *a2;
  do
  {
    while ( 1 )
    {
      LODWORD(v14) = v9;
      if ( v9 != 1 )
        break;
      ExBlockOnAddressPushLock((__int64)&qword_14034EA68, a2, &v14, 4uLL, 0LL);
      v9 = *a2;
    }
    v10 = v9;
    v9 = _InterlockedCompareExchange(a2, v9 + 1, v9);
  }
  while ( v10 != v9 );
  if ( v9 >= 2 )
  {
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( v12 )
      return;
    goto LABEL_9;
  }
  MiLockCode(a1, a3, a4, 1);
  _InterlockedIncrement(a2);
  _InterlockedOr(v13, 0);
  if ( qword_14034EA68 )
    ExfUnblockPushLock(&qword_14034EA68, 0LL);
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11 )
  {
LABEL_9:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
