/*
 * XREFs of KdpReport @ 0x1400F4360
 * Callers:
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x14015DCF0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14015DDB0 (KiSaveProcessorControlState.c)
 *     KdpCopyContext @ 0x1406F2344 (KdpCopyContext.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdpReportExceptionStateChange @ 0x1406F4050 (KdpReportExceptionStateChange.c)
 */

char __fastcall KdpReport(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, char a6)
{
  int v6; // edx
  char v9; // di
  char result; // al
  char v11; // al
  struct _KPRCB *CurrentPrcb; // rbp
  char v13; // r14
  _CONTEXT *Context; // rdx
  __int64 v15; // r8
  unsigned int ContextFlags; // ebx
  char v17; // di
  __int64 v18; // rcx

  v6 = *a3;
  if ( (unsigned int)(*a3 + 2147483645) <= 1
    || v6 == -1073740768
    || (unsigned int)(v6 - 1073741854) <= 1
    || (NtGlobalFlag & 1) != 0 )
  {
    v9 = a6;
    if ( !a6 && (v6 >= 1073741856 || v6 == -1073741769 || (unsigned int)v6 <= 0x4000001D) )
      return 0;
  }
  else
  {
    v9 = a6;
    if ( !a6 )
      return 0;
  }
  v11 = KdEnterDebugger();
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = v11;
  KdpCopyContext(CurrentPrcb->Context, *(unsigned int *)(a4 + 48), a4);
  KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  Context = CurrentPrcb->Context;
  LOBYTE(v15) = v9;
  ContextFlags = Context->ContextFlags;
  v17 = KdpReportExceptionStateChange(a3, Context, v15);
  KdpCopyContext(a4, ContextFlags, CurrentPrcb->Context);
  KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v18) = v13;
  KdExitDebugger(v18);
  result = v17;
  KdpControlCPressed = 0;
  return result;
}
