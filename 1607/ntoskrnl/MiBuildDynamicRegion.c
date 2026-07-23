/*
 * XREFs of MiBuildDynamicRegion @ 0x14013CEB0
 * Callers:
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407A4D44 (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 *     MiInitializeDynamicRegion @ 0x1407A517C (MiInitializeDynamicRegion.c)
 * Callees:
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r9
  ULONG_PTR result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx

  if ( a1 == &qword_140326CA0 )
    qword_140326B08 = a3;
  a1[8] = 0LL;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == &qword_140326B10 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  v6 = 1LL;
  if ( a1 == &qword_140326B10 && (v10 = a1[1]) != 0 )
  {
    v8 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    result = MiReservePtes(
               (__int64)&qword_1403278B0,
               (((8 * (((v4 & 0x3F) != 0) + (v4 >> 6))) & 0xFFF) != 0)
             + (unsigned int)((8 * ((v4 >> 6) + ((v4 & 0x3F) != 0))) >> 12),
               (v4 & 0x3F) != 0);
    v8 = result;
    if ( !result )
      return result;
    v6 = 3LL;
  }
  MiInitializeDynamicBitmap(a1, v8 << 25 >> 16, v4, v6);
  *a1 = 0LL;
  v9 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v9;
  if ( a1 == &qword_140326B10 )
    a1[3] = v9 & 0xFFF;
  return 1LL;
}
