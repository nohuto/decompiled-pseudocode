/*
 * XREFs of HUBFDO_EvtDeviceDestroyCallback @ 0x1C000A890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceDestroyCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0057140);
  v3 = result;
  v4 = *(_QWORD *)(result + 2224);
  if ( v4 )
  {
    LOBYTE(v2) = 1;
    result = ExDeleteTimer(v4, v2, 0LL, 0LL);
    *(_QWORD *)(v3 + 2224) = 0LL;
  }
  return result;
}
