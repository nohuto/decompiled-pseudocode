/*
 * XREFs of Controller_InitiateBootRecovery @ 0x1C001E618
 * Callers:
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 */

void __fastcall Controller_InitiateBootRecovery(_QWORD *a1, char a2)
{
  ULONG_PTR v2; // rax

  if ( (a2 & 0x1C) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(WdfDriverGlobals, *a1);
    KeBugCheckEx(0x144u, 2uLL, v2, 3uLL, 0LL);
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&WPP_MAIN_CB.ActiveThreadCount);
    Controller_InternalReset();
    _InterlockedDecrement((volatile signed __int32 *)&WPP_MAIN_CB.ActiveThreadCount);
  }
  else if ( (a2 & 2) != 0 )
  {
    ((void (__fastcall *)(void *, _QWORD))qword_1C0042750)(WPP_MAIN_CB.Dpc.DpcData, a1[1]);
  }
}
