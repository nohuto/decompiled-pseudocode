/*
 * XREFs of LpcpRequestWaitReplyPort @ 0x1405326A4
 * Callers:
 *     LpcRequestWaitReplyPortEx @ 0x1405325E0 (LpcRequestWaitReplyPortEx.c)
 *     NtRequestWaitReplyPort @ 0x140532610 (NtRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPort @ 0x140584464 (LpcRequestWaitReplyPort.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall LpcpRequestWaitReplyPort(
        __int64 a1,
        __int64 a2,
        ULONG64 a3,
        unsigned __int8 a4,
        KPROCESSOR_MODE a5,
        int a6)
{
  _BYTE *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  if ( a4 )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[39] = v7[39];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = AlpcpProcessSynchronousRequest(a1, a6 | 0x20000u, a2, 0LL, a3, 0LL, 0LL, 0LL, a4, a5);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    return (unsigned int)-1073741229;
  return v9;
}
