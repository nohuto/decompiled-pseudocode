/*
 * XREFs of RFONTOBJ_vDeleteRFONTWrap @ 0x1C0125E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RFONTOBJ_vDeleteRFONTWrap(RFONTOBJ *a1, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  RFONTOBJ::vDeleteRFONT(a1, a2, a3, a4);
}
