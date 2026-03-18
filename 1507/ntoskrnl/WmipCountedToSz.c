/*
 * XREFs of WmipCountedToSz @ 0x14057C16C
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
