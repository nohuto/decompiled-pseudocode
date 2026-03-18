/*
 * XREFs of HvlHalVpStartEnabled @ 0x1401E8214
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlHalVpStartEnabled()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlVpStartDisabled )
    return (HvlEnlightenments & 0x10000) != 0;
  return v0;
}
