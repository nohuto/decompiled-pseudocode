/*
 * XREFs of MNIspItemValid @ 0x1C006EE3C
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0072348 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 */

bool __fastcall MNIspItemValid(__int64 a1, __int64 a2)
{
  return (unsigned int)MNGetpItemIndex(a1, a2) != -1;
}
