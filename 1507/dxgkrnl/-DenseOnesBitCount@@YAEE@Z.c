/*
 * XREFs of ?DenseOnesBitCount@@YAEE@Z @ 0x1C000C378
 * Callers:
 *     ?EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@1@Z @ 0x1C000C250 (-EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STA.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DenseOnesBitCount(char a1)
{
  unsigned __int8 result; // al

  result = 8;
  while ( a1 != -1 )
  {
    --result;
    a1 |= a1 + 1;
  }
  return result;
}
