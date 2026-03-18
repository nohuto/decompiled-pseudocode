/*
 * XREFs of GreSaveDC @ 0x1C00167D0
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientExtTextOutW @ 0x1C0123184 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214D78 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02150E4 (xxxClientPSMTextOut.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
