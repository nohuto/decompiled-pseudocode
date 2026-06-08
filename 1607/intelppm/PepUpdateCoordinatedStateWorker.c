/*
 * XREFs of PepUpdateCoordinatedStateWorker @ 0x1C0022A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001AAC4 (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall PepUpdateCoordinatedStateWorker(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v1 + 192),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ED00,
    0LL);
  byte_1C000F248 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ED00);
  if ( qword_1C000F230 )
  {
    *(_BYTE *)(qword_1C000F230 + 40) = 1;
    if ( (int)((__int64 (*)(void))qword_1C000EF28)() >= 0 )
      ProcLibTraceCoordinatedIdleStates(0);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(v1 + 192));
}
