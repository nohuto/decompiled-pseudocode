/*
 * XREFs of KdpSymbol @ 0x1406F227C
 * Callers:
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x14015DCF0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14015DDB0 (KiSaveProcessorControlState.c)
 *     KdpCopyContext @ 0x1406F2344 (KdpCopyContext.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1406F25CC (KdpReportLoadSymbolsStateChange.c)
 */

void __fastcall KdpSymbol(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6)
{
  char v9; // al
  struct _KPRCB *CurrentPrcb; // rdi
  char v11; // bp
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rcx

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v9 = KdEnterDebugger(a6);
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v9;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v12);
    KdpCopyContext(CurrentPrcb->Context, *(unsigned int *)(a5 + 48), a5);
    LOBYTE(v13) = a3;
    KdpReportLoadSymbolsStateChange(a1, a2, v13, CurrentPrcb->Context);
    KdpCopyContext(a5, CurrentPrcb->Context->ContextFlags, CurrentPrcb->Context);
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    LOBYTE(v14) = v11;
    KdExitDebugger(v14);
  }
}
