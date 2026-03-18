/*
 * XREFs of LpcRequestPort @ 0x14041BF2C
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 */

__int64 __fastcall LpcRequestPort(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // eax
  struct _KTHREAD *v6; // rdx
  unsigned int v7; // ebx
  __int16 v8; // cx
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v10[1], 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10[0] = a1;
  LODWORD(v10[6]) = 65538;
  v5 = AlpcpSendMessage(v10, a2, 0LL, 0LL);
  v6 = KeGetCurrentThread();
  v7 = v5;
  v8 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
