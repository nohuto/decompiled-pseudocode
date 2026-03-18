/*
 * XREFs of AlpcpCompleteDeferSignalRequestAndWait @ 0x14053250C
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpLogUnwait @ 0x1406A0338 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpCompleteDeferSignalRequestAndWait(
        __int64 a1,
        void *a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *Timeout)
{
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v9; // bl
  __int16 v10; // ax
  unsigned int v11; // ebx
  struct _KTHREAD *v12; // rax

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    return (unsigned int)AlpcpSignalAndWait(a1, a2, 16LL, a4, Timeout);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v9 = (v7 & 0x200000) != 0;
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v11 = KeWaitForSingleObject(a2, WrLpcReceive, a4, v9, Timeout);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    if ( AlpcpLogEnabled )
      AlpcpLogUnwait(v11);
  }
  return v11;
}
