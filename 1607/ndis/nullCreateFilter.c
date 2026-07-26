/*
 * XREFs of nullCreateFilter @ 0x1C00B0604
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C000F9E0 (NdisAllocateRWLock.c)
 *     NdisFreeRWLock @ 0x1C000FF60 (NdisFreeRWLock.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

char __fastcall nullCreateFilter(_QWORD *a1)
{
  char v2; // bl
  struct _NDIS_RW_LOCK_EX *RWLock; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi

  v2 = 0;
  RWLock = NdisAllocateRWLock(&ndisDummyObject);
  if ( RWLock )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x198uLL, 0x6670444Eu);
    *a1 = PoolWithTag;
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x198uLL);
      v5[36] = RWLock;
      return 1;
    }
    else
    {
      NdisFreeRWLock(RWLock);
    }
  }
  return v2;
}
