/*
 * XREFs of ?IsButtonCapsEqual@@YAHPEAU_HIDP_BUTTON_CAPS@@0G@Z @ 0x1C01C7344
 * Callers:
 *     ?ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z @ 0x1C01C8664 (-ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsButtonCapsEqual(struct _HIDP_BUTTON_CAPS *a1, struct _HIDP_BUTTON_CAPS *a2, unsigned __int16 a3)
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
      || a1[i].IsAlias != a2[i].IsAlias
      || a1[i].BitField != a2[i].BitField
      || a1[i].IsRange != a2[i].IsRange
      || a1[i].IsAbsolute != a2[i].IsAbsolute
      || a1[i].Range.UsageMin != a2[i].Range.UsageMin )
    {
      v3 = 0;
    }
  }
  return v3;
}
