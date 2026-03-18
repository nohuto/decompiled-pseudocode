/*
 * XREFs of MiBuildDynamicRegion @ 0x140132FA0
 * Callers:
 *     MiInitializeDynamicRegion @ 0x14074A95C (MiInitializeDynamicRegion.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  bool v5; // zf
  ULONG_PTR result; // rax

  if ( a1 == &qword_1402FE920 )
    qword_1402FE788 = a3;
  a1[8] = 0LL;
  v4 = a3 >> 21;
  v5 = a1[1] == 0;
  a1[4] = a2;
  if ( v5 )
  {
    result = MiReservePtes(
               (__int64)&qword_1402FF7B0,
               (((8 * (((v4 & 0x3F) != 0) + (unsigned __int16)(v4 >> 6))) & 0xFFF) != 0LL)
             + (unsigned int)((8 * (((v4 & 0x3F) != 0) + (v4 >> 6))) >> 12),
               (v4 & 0x3F) != 0);
    if ( !result )
      return result;
    MiInitializeDynamicBitmap(a1, (__int64)(result << 25) >> 16, v4, 3LL);
    *a1 = 0LL;
    a1[3] = ExGenRandom(1) & 0xFFF;
  }
  a1[2] = v4;
  return 1LL;
}
