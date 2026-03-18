/*
 * XREFs of MiBuildDynamicRegion @ 0x14015FC6C
 * Callers:
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x1407CBDF8 (MiInitializeDynamicRegion.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 */

__int64 *__fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  bool v5; // zf
  __int64 *result; // rax

  if ( a1 == &qword_14034EDE0 )
    qword_14034EC48 = a3;
  a1[8] = 0LL;
  v4 = a3 >> 21;
  v5 = a1[1] == 0;
  a1[4] = a2;
  if ( v5 )
  {
    result = MiReservePtes(
               (__int64)&qword_14034FC70,
               (((8 * (((v4 & 0x3F) != 0) + (unsigned __int16)(v4 >> 6))) & 0xFFF) != 0LL)
             + (unsigned int)((8 * (((v4 & 0x3F) != 0) + (v4 >> 6))) >> 12),
               (v4 & 0x3F) != 0);
    if ( !result )
      return result;
    MiInitializeDynamicBitmap(a1, (__int64)((_QWORD)result << 25) >> 16, v4, 3LL);
    *a1 = 0LL;
    a1[3] = ExGenRandom(1) & 0xFFF;
  }
  a1[2] = v4;
  return (__int64 *)1;
}
