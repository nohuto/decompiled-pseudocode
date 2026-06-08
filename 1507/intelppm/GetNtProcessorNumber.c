/*
 * XREFs of GetNtProcessorNumber @ 0x1C00165E0
 * Callers:
 *     <none>
 * Callees:
 *     SaveDevExt @ 0x1C0001E04 (SaveDevExt.c)
 *     LookupNtProcessorNumber @ 0x1C0001E40 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
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
      qword_1C000D9C8,
      0LL);
    SaveDevExt(a1, *(_DWORD *)(a1 + 56));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000D9C8);
  }
  return (unsigned int)v2;
}
