/*
 * XREFs of MiGetLargePageChain @ 0x14001935C
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 * Callees:
 *     MiReplenishFromNodeLargePages @ 0x1400193C8 (MiReplenishFromNodeLargePages.c)
 *     MiFreeLargePageChain @ 0x1401E17A0 (MiFreeLargePageChain.c)
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
    v6 = (_QWORD *)MiReplenishFromNodeLargePages(&MiSystemPartition, 128LL, a1);
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
