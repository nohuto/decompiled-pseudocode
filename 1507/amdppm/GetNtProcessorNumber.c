/*
 * XREFs of GetNtProcessorNumber @ 0x1C00188B0
 * Callers:
 *     <none>
 * Callees:
 *     LookupNtProcessorNumber @ 0x1C0003A64 (LookupNtProcessorNumber.c)
 *     SaveDevExt @ 0x1C0004B40 (SaveDevExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNtProcessorNumber(__int64 a1)
{
  int v2; // edi

  *(_DWORD *)(a1 + 56) = -1;
  v2 = LookupNtProcessorNumber(a1);
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0009398,
      0LL);
    SaveDevExt(a1, *(_DWORD *)(a1 + 56));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0009398);
  }
  return (unsigned int)v2;
}
