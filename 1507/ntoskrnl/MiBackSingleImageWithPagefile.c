/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x140571514
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiBackSystemImageWithPagefile @ 0x14058FF34 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiSnapDriverRange @ 0x140574030 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  int v2; // ebx
  __int64 result; // rax
  ULONG_PTR *v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  do
  {
    result = MiSnapDriverRange(a1, v2, 8, 0, (__int64)&v4, (__int64)&v5);
    v2 = result;
    if ( v4 )
      result = MiMakeDriverPagesPrivate(a1, v4, v5, 0x11u, 4u);
  }
  while ( v2 );
  return result;
}
