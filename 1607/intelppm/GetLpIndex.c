/*
 * XREFs of GetLpIndex @ 0x1C001D290
 * Callers:
 *     <none>
 * Callees:
 *     SaveDevExt @ 0x1C0001E2C (SaveDevExt.c)
 *     LookupNtProcessorNumber @ 0x1C0001E68 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     GetDevExtFromIndex @ 0x1C0003004 (GetDevExtFromIndex.c)
 */

__int64 __fastcall GetLpIndex(_DWORD *a1)
{
  unsigned int v2; // esi
  unsigned int LpIndexFromApicId; // edi

  a1[15] = -1;
  a1[14] = -1;
  v2 = 0;
  LpIndexFromApicId = HvlGetLpIndexFromApicId((unsigned int)a1[12]);
  if ( LpIndexFromApicId != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000ECF8,
      0LL);
    if ( !GetDevExtFromIndex(LpIndexFromApicId) )
    {
      a1[15] = LpIndexFromApicId;
      SaveDevExt((__int64)a1, LpIndexFromApicId);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000ECF8);
  }
  if ( a1[15] == -1 )
    return (unsigned int)-1073741823;
  else
    LookupNtProcessorNumber(a1);
  return v2;
}
