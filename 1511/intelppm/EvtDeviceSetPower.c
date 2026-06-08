/*
 * XREFs of EvtDeviceSetPower @ 0x1C0001700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EvtDeviceSetPower(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( !*(_DWORD *)(v2 + 16) && *(_DWORD *)(v2 + 24) == 1 && (*(_BYTE *)(v2 + 10) & 0xF) != 1 )
    *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 a1,
                 off_1C000B048)
             + 64) = 1;
  v5 = WdfFunctions_01015;
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v5 + 272))(WdfDriverGlobals, a1, a2);
}
