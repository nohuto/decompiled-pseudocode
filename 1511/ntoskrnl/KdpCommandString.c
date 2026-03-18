/*
 * XREFs of KdpCommandString @ 0x1406ACCEC
 * Callers:
 *     KdpTrap @ 0x1406AD120 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x140154040 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140154100 (KiSaveProcessorControlState.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     KdpReportCommandStringStateChange @ 0x1406AB528 (KdpReportCommandStringStateChange.c)
 *     KdpCopyContext @ 0x1406AD59C (KdpCopyContext.c)
 */

void __fastcall KdpCommandString(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  bool v8; // al
  struct _KPRCB *CurrentPrcb; // rbx
  bool v10; // si
  int v11; // edx
  unsigned __int64 v12; // rcx

  if ( !a3 && !(_BYTE)KdDebuggerNotPresent )
  {
    v8 = KdEnterDebugger(a5);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v8;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v11);
    KdpCopyContext(CurrentPrcb->Context, *(unsigned int *)(a4 + 48), a4);
    KdpReportCommandStringStateChange(a1, a2, (__int64)CurrentPrcb->Context);
    KdpCopyContext(a4, CurrentPrcb->Context->ContextFlags, CurrentPrcb->Context);
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    LOBYTE(v12) = v10;
    KdExitDebugger(v12);
  }
}
