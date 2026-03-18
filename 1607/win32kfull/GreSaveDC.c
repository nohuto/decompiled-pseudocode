/*
 * XREFs of GreSaveDC @ 0x1C0049A00
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientExtTextOutW @ 0x1C0151798 (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C020DA2C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020DDD8 (xxxClientPSMTextOut.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
