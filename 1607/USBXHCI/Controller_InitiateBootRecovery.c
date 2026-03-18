/*
 * XREFs of Controller_InitiateBootRecovery @ 0x1C001EA78
 * Callers:
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
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
    _InterlockedIncrement((volatile signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData);
    Controller_InternalReset();
    _InterlockedDecrement((volatile signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData);
  }
  else if ( (a2 & 2) != 0 )
  {
    ((void (__fastcall *)(void *, _QWORD))qword_1C0044730)(WPP_MAIN_CB.Dpc.SystemArgument2, a1[1]);
  }
}
