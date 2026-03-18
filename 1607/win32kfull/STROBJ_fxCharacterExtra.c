/*
 * XREFs of STROBJ_fxCharacterExtra @ 0x1C02801B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FIX __stdcall STROBJ_fxCharacterExtra(STROBJ *pstro)
{
  if ( (pstro->flAccel & 0x800) != 0 )
    return *((_DWORD *)&pstro[2].rclBkGround + 4);
  else
    return 0;
}
