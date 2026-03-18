/*
 * XREFs of MiFillGapAddresses @ 0x140138348
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiFillPfnGaps @ 0x140767B20 (MiFillPfnGaps.c)
 * Callees:
 *     MiFillGapPtes @ 0x1401383CC (MiFillGapPtes.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiFillGapAddresses(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // r9
  char v6; // [rsp+30h] [rbp-58h] BYREF
  char v7; // [rsp+38h] [rbp-50h] BYREF

  v3 = (unsigned __int64 *)&v7;
  v4 = 4LL;
  do
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v3 - 1) = a1;
    *v3 = a2;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  return MiFillGapPtes(a1, a2, (unsigned int)&v6, a3, 3);
}
