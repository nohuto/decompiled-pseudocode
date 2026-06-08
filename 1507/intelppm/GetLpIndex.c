/*
 * XREFs of GetLpIndex @ 0x1C001BDC0
 * Callers:
 *     <none>
 * Callees:
 *     SaveDevExt @ 0x1C0001E04 (SaveDevExt.c)
 *     LookupNtProcessorNumber @ 0x1C0001E40 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     GetDevExtFromIndex @ 0x1C0002760 (GetDevExtFromIndex.c)
 */

__int64 __fastcall GetLpIndex(unsigned int *a1)
{
  unsigned int v2; // esi
  unsigned int LpIndexFromApicId; // edi

  a1[15] = -1;
  a1[14] = -1;
  v2 = 0;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(a1[12]);
  if ( LpIndexFromApicId != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000D9C8,
      0LL);
    if ( !GetDevExtFromIndex(LpIndexFromApicId) )
    {
      a1[15] = LpIndexFromApicId;
      SaveDevExt((__int64)a1, LpIndexFromApicId);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000D9C8);
  }
  if ( a1[15] == -1 )
    return (unsigned int)-1073741823;
  else
    LookupNtProcessorNumber((__int64)a1);
  return v2;
}
