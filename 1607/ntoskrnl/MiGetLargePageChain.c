/*
 * XREFs of MiGetLargePageChain @ 0x140089B54
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiReplenishFromNodeLargePages @ 0x140089BD0 (MiReplenishFromNodeLargePages.c)
 *     MiFreeLargePageChain @ 0x1401FB558 (MiFreeLargePageChain.c)
 */

_QWORD *__fastcall MiGetLargePageChain(int a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  _QWORD *v6; // rax

  v2 = 0LL;
  v3 = a2 >> 9;
  v4 = 0LL;
  if ( !(a2 >> 9) )
    return v2;
  while ( 1 )
  {
    v6 = (_QWORD *)MiReplenishFromNodeLargePages((unsigned int)MiSystemPartition, 1, 1, a1, 4);
    if ( !v6 )
      break;
    ++v4;
    *v6 = v2;
    v2 = v6;
    if ( v4 >= v3 )
      return v2;
  }
  MiFreeLargePageChain(v2);
  return 0LL;
}
