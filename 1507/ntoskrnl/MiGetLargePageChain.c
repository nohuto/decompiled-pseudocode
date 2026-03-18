/*
 * XREFs of MiGetLargePageChain @ 0x1401021A8
 * Callers:
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiReplenishFromNodeLargePages @ 0x140102214 (MiReplenishFromNodeLargePages.c)
 *     MiFreeLargePageChain @ 0x14022D01C (MiFreeLargePageChain.c)
 */

_QWORD *__fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdi
  _QWORD *v6; // rax

  v2 = 0LL;
  v3 = 0LL;
  if ( !a2 )
    return v2;
  while ( 1 )
  {
    v6 = (_QWORD *)MiReplenishFromNodeLargePages(MiSystemPartition, 128LL, a1, 4LL);
    if ( !v6 )
      break;
    ++v3;
    *v6 = v2;
    v2 = v6;
    if ( v3 >= a2 )
      return v2;
  }
  MiFreeLargePageChain(v2);
  return 0LL;
}
