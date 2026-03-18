/*
 * XREFs of LpcpReplyWaitReplyPort @ 0x14069E35C
 * Callers:
 *     LpcReplyWaitReplyPort @ 0x14069E270 (LpcReplyWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x14069E5A4 (NtReplyWaitReplyPort.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall LpcpReplyWaitReplyPort(__int64 a1, ULONG64 a2, unsigned __int8 a3, KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v6; // rcx
  unsigned int v7; // edi
  struct _KTHREAD *v8; // rdx
  __int16 v9; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
    v6[39] = v6[39];
  }
  v7 = AlpcpProcessSynchronousRequest(a1, 0x20001u, a2, 0LL, a2, 0LL, 0LL, 0LL, a3, a4);
  if ( v7 == -1073740029 )
    v7 = -1073741769;
  if ( v7 == -1073740031 )
    v7 = -1073741229;
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
