/*
 * XREFs of IopCombineCmResourceList @ 0x1405551AC
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x1407AB328 (IopAllocateLegacyBootResources.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x14050F344 (PnpDetermineResourceListSize.c)
 */

_DWORD *__fastcall IopCombineCmResourceList(_DWORD *Src, _DWORD *a2)
{
  _DWORD *v5; // rbp
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // r14d
  _DWORD *PoolWithTag; // rax

  if ( !Src )
    return a2;
  if ( !a2 )
    return Src;
  v5 = 0LL;
  v6 = (unsigned int)PnpDetermineResourceListSize(Src);
  v7 = PnpDetermineResourceListSize(a2);
  if ( (_DWORD)v6 && v7 )
  {
    v8 = v7 - 4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v7 - 4 + v6), 0x20207050u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, Src, (unsigned int)v6);
      memmove((char *)v5 + v6, a2 + 1, v8);
      *v5 += *a2;
    }
  }
  return v5;
}
