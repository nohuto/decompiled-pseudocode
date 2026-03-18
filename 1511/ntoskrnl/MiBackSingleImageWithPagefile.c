/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x14050CCBC
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiBackSystemImageWithPagefile @ 0x140522ED0 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiSnapDriverRange @ 0x1403CEF0C (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  do
  {
    result = MiSnapDriverRange(a1, v2, 8, 0LL, &v4, &v5);
    v2 = result;
    if ( v4 )
      result = MiMakeDriverPagesPrivate(a1, v4, v5, 0x11u, 4);
  }
  while ( v2 );
  return result;
}
