/*
 * XREFs of MiUpdateCfgSystemWideBitmap @ 0x14046B6E4
 * Callers:
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x14046BA2C (MiSelectBitMapForImage.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmap(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11

  if ( !dword_1403D00D4 || *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
    return 0LL;
  if ( (unsigned int)MiSelectBitMapForImage(*(_QWORD *)a1) )
    v3 = qword_14034E998;
  return MiUpdateCfgSystemWideBitmapWorker(
           v3,
           v4,
           2 * (v1 >> 4),
           2 * ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 24), -1LL, -1LL) >> 4));
}
