/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x1400A8BEC
 * Callers:
 *     MiReturnImageBase @ 0x14042DC84 (MiReturnImageBase.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_1403267D0;
  if ( *(int *)(a1 + 8) >= 1 )
    v2 = qword_1403267E0;
  MiZeroCfgSystemWideBitmapWorker(
    v2 + 128,
    2 * (a2 >> 4),
    2 * (((unsigned __int64)*(unsigned int *)(a1 + 4) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
