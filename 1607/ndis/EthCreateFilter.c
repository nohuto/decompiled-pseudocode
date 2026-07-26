/*
 * XREFs of EthCreateFilter @ 0x1C00AFF90
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C000F9E0 (NdisAllocateRWLock.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

char __fastcall EthCreateFilter(unsigned int a1, __int64 a2, _QWORD *a3)
{
  char v4; // di
  PVOID PoolWithTag; // rax
  PVOID v8; // rbx
  PNDIS_RW_LOCK_EX RWLock; // rax
  int v10; // eax
  PVOID v11; // rax
  PVOID v12; // rax
  PVOID v13; // rax
  PVOID v14; // rax
  void *v16; // rcx
  void *v17; // rcx

  v4 = 0;
  *a3 = 0LL;
  if ( is_mul_ok(6u, a1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x198uLL, 0x6670444Eu);
    *a3 = PoolWithTag;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x198uLL);
      *((_DWORD *)v8 + 84) = *(_DWORD *)a2;
      *((_WORD *)v8 + 170) = *(_WORD *)(a2 + 4);
      *((_DWORD *)v8 + 86) = a1;
      RWLock = NdisAllocateRWLock(&ndisDummyObject);
      *((_QWORD *)v8 + 36) = RWLock;
      if ( RWLock )
      {
        v10 = *((_DWORD *)v8 + 86);
        if ( !v10 )
          return 1;
        v11 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(6 * v10), 0x6166444Eu);
        *((_QWORD *)v8 + 47) = v11;
        if ( v11 )
        {
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(6 * *((_DWORD *)v8 + 86)), 0x6166444Eu);
          *((_QWORD *)v8 + 49) = v12;
          if ( v12 )
          {
            v13 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(6 * *((_DWORD *)v8 + 86)), 0x6166444Eu);
            *((_QWORD *)v8 + 44) = v13;
            if ( v13 )
            {
              v14 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(6 * *((_DWORD *)v8 + 86)), 0x6166444Eu);
              *((_QWORD *)v8 + 45) = v14;
              if ( v14 )
                return 1;
              ExFreePoolWithTag(*((PVOID *)v8 + 47), 0);
              v17 = (void *)*((_QWORD *)v8 + 44);
            }
            else
            {
              v17 = (void *)*((_QWORD *)v8 + 47);
            }
            ExFreePoolWithTag(v17, 0);
            v16 = (void *)*((_QWORD *)v8 + 49);
          }
          else
          {
            v16 = (void *)*((_QWORD *)v8 + 47);
          }
          ExFreePoolWithTag(v16, 0);
        }
      }
      ExFreePoolWithTag(v8, 0);
      *a3 = 0LL;
    }
  }
  return v4;
}
