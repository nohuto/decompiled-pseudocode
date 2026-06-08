/*
 * XREFs of GetNtProcessorNumber @ 0x1C001A550
 * Callers:
 *     <none>
 * Callees:
 *     LookupNtProcessorNumber @ 0x1C0004448 (LookupNtProcessorNumber.c)
 *     SaveDevExt @ 0x1C0006194 (SaveDevExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
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
      qword_1C00093A8,
      0LL);
    SaveDevExt((__int64)a1, a1[14]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00093A8);
  }
  return (unsigned int)v2;
}
