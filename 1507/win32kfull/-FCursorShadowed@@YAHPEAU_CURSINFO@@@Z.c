/*
 * XREFs of ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0091670
 * Callers:
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCursorShadowed(struct _CURSINFO *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000 )
    return (*(_DWORD *)a1 & 0x200) != 0;
  return v1;
}
