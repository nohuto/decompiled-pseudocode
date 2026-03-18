/*
 * XREFs of MiUpdateCfgSystemWideBitmap @ 0x1403C66C8
 * Callers:
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x1403C69B0 (MiSelectBitMapForImage.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmap(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11

  if ( !dword_1403810E4 || *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
    return 0LL;
  if ( (unsigned int)MiSelectBitMapForImage(*(_QWORD *)a1, a2, a2) )
    v4 = *(_QWORD *)&qword_1402FE4D0;
  return MiUpdateCfgSystemWideBitmapWorker(
           v4,
           v5,
           2 * (v2 >> 4),
           2 * ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 24), -1LL, -1LL) >> 4));
}
