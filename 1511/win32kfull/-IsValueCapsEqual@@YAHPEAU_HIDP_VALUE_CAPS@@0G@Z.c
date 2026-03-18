/*
 * XREFs of ?IsValueCapsEqual@@YAHPEAU_HIDP_VALUE_CAPS@@0G@Z @ 0x1C01C7450
 * Callers:
 *     ?ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z @ 0x1C01C8664 (-ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValueCapsEqual(struct _HIDP_VALUE_CAPS *a1, struct _HIDP_VALUE_CAPS *a2, unsigned __int16 a3)
{
  unsigned int v3; // r10d
  unsigned __int16 i; // r11

  v3 = 1;
  for ( i = 0; i < a3; ++i )
  {
    if ( !v3 )
      break;
    if ( a1[i].UsagePage != a2[i].UsagePage
      || a1[i].ReportID != a2[i].ReportID
      || a1[i].IsAbsolute != a2[i].IsAbsolute
      || a1[i].HasNull != a2[i].HasNull
      || a1[i].BitSize != a2[i].BitSize
      || a1[i].ReportCount != a2[i].ReportCount
      || a1[i].Units != a2[i].Units
      || a1[i].UnitsExp != a2[i].UnitsExp
      || a1[i].LogicalMin != a2[i].LogicalMin
      || a1[i].LogicalMax != a2[i].LogicalMax
      || a1[i].PhysicalMin != a2[i].PhysicalMin
      || a1[i].PhysicalMax != a2[i].PhysicalMax
      || a1[i].Range.UsageMin != a2[i].Range.UsageMin )
    {
      v3 = 0;
    }
  }
  return v3;
}
