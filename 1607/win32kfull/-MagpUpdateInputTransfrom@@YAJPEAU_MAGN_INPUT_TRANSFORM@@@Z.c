/*
 * XREFs of ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01F4CA0
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C00EFCE8 (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall MagpUpdateInputTransfrom(struct _MAGN_INPUT_TRANSFORM *a1)
{
  return (unsigned int)SetMagnificationInputTransform((__int128 *)a1) == 0 ? 0xC0000001 : 0;
}
