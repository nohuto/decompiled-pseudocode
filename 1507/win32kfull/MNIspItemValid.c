/*
 * XREFs of MNIspItemValid @ 0x1C0054FCC
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0052C14 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxInsertMenuItem @ 0x1C00551A4 (xxxInsertMenuItem.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0216C3C (xxxMNDoubleClick.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 */

bool __fastcall MNIspItemValid(__int64 a1, __int64 a2)
{
  return (unsigned int)MNGetpItemIndex(a1, a2) != -1;
}
