/*
 * XREFs of KdpCommandString @ 0x1406F3C28
 * Callers:
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x14015DCF0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14015DDB0 (KiSaveProcessorControlState.c)
 *     KdpCopyContext @ 0x1406F2344 (KdpCopyContext.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdpReportCommandStringStateChange @ 0x1406F3CE0 (KdpReportCommandStringStateChange.c)
 */

void __fastcall KdpCommandString(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  bool v8; // al
  struct _KPRCB *CurrentPrcb; // rbx
  char v10; // si
  int v11; // edx

  if ( !a3 && !(_BYTE)KdDebuggerNotPresent )
  {
    v8 = KdEnterDebugger(a5);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v8;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v11);
    KdpCopyContext((__int64)CurrentPrcb->Context, *(unsigned int *)(a4 + 48), a4);
    KdpReportCommandStringStateChange(a1, a2, CurrentPrcb->Context);
    KdpCopyContext(a4, CurrentPrcb->Context->ContextFlags, (__int64)CurrentPrcb->Context);
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KdExitDebugger(v10);
  }
}
