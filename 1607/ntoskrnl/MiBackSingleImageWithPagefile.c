/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x1405473D8
 * Callers:
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MiBackSystemImageWithPagefile @ 0x140550B20 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x140086098 (MiMakeDriverPagesPrivate.c)
 *     MiSnapDriverRange @ 0x14047D810 (MiSnapDriverRange.c)
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
