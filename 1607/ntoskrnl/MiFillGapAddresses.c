/*
 * XREFs of MiFillGapAddresses @ 0x1400B3218
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MiFillPfnGaps @ 0x14078F034 (MiFillPfnGaps.c)
 * Callees:
 *     MiFillGapPtes @ 0x140141F84 (MiFillGapPtes.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFillGapAddresses(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v4; // r8
  __int64 v5; // r10
  char v7; // [rsp+30h] [rbp-58h] BYREF
  char v8; // [rsp+38h] [rbp-50h] BYREF

  v4 = (unsigned __int64 *)&v8;
  v5 = 4LL;
  do
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v4 - 1) = a1;
    *v4 = a2;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return MiFillGapPtes(a1, a2, (unsigned int)&v7, a3, 3);
}
