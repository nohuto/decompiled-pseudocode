/*
 * XREFs of ?ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C001027C
 * Callers:
 *     NdisFreeNetBufferListContext @ 0x1C0010000 (NdisFreeNetBufferListContext.c)
 *     NdisAllocateNetBufferListContext @ 0x1C00100F0 (NdisAllocateNetBufferListContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCurrentNblContextBlockPreallocated(struct _NET_BUFFER_LIST *a1)
{
  int v1; // edx
  _NET_BUFFER_LIST_CONTEXT *v2; // rax

  v1 = *((_DWORD *)a1->NdisPoolHandle + 15);
  if ( (v1 & 2) == 0 )
    return 0;
  v2 = (_NET_BUFFER_LIST_CONTEXT *)&a1[1].NetBufferListInfo[4];
  if ( (v1 & 1) == 0 )
    v2 = (_NET_BUFFER_LIST_CONTEXT *)&a1[1];
  return a1->Context == v2;
}
