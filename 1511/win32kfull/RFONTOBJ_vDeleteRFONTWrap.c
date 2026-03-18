/*
 * XREFs of RFONTOBJ_vDeleteRFONTWrap @ 0x1C01133E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RFONTOBJ_vDeleteRFONTWrap(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  RFONTOBJ::vDeleteRFONT(this, a2, a3, a4);
}
