/*
 * XREFs of WmipCountedToSz @ 0x14052B618
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v2 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2 + 2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1 + 1, (unsigned int)v2);
    v4[v2 >> 1] = 0;
  }
  return v4;
}
