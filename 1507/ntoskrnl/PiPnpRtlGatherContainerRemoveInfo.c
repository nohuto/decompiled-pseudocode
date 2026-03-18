/*
 * XREFs of PiPnpRtlGatherContainerRemoveInfo @ 0x14067FBE4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14067FB38 (PiPnpRtlFreeContainerRemoveInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherContainerRemoveInfo(__int64 a1, __int64 a2, unsigned int ***a3)
{
  unsigned int **PoolWithTag; // rax
  int Object; // ebx

  PoolWithTag = (unsigned int **)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x47706E50u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
LABEL_8:
    PiPnpRtlFreeContainerRemoveInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  Object = PiDmGetObject(1LL, a1, PoolWithTag);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_8;
  Object = PiDmGetObject(5LL, a2, *a3 + 1);
  if ( Object == -1073741772 )
    Object = 0;
  if ( Object < 0 )
    goto LABEL_8;
  return (unsigned int)Object;
}
