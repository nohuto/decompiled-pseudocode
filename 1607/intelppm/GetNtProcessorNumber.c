/*
 * XREFs of GetNtProcessorNumber @ 0x1C0015080
 * Callers:
 *     <none>
 * Callees:
 *     SaveDevExt @ 0x1C0001E2C (SaveDevExt.c)
 *     LookupNtProcessorNumber @ 0x1C0001E68 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNtProcessorNumber(_DWORD *a1)
{
  int v2; // edi

  a1[14] = -1;
  v2 = LookupNtProcessorNumber(a1);
  if ( v2 >= 0 && a1[14] != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000ECF8,
      0LL);
    SaveDevExt((__int64)a1, a1[14]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000ECF8);
  }
  return (unsigned int)v2;
}
