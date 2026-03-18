/*
 * XREFs of MNIspItemValid @ 0x1C006B8A0
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C006B174 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C020F63C (xxxMNDoubleClick.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 */

bool __fastcall MNIspItemValid(__int64 a1, __int64 a2)
{
  return (unsigned int)MNGetpItemIndex(a1, a2) != -1;
}
