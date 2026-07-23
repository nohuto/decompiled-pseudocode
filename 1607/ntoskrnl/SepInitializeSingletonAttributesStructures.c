/*
 * XREFs of SepInitializeSingletonAttributesStructures @ 0x1407B2E80
 * Callers:
 *     SeRmInitPhase1 @ 0x1407B2DB0 (SeRmInitPhase1.c)
 * Callees:
 *     RtlCreateHashTable @ 0x1400A7ADC (RtlCreateHashTable.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 SepInitializeSingletonAttributesStructures()
{
  PEX_SPIN_LOCK v0; // rax
  int v1; // edi
  unsigned int v2; // ebx
  ULONG_PTR v3; // rax
  PVOID PoolWithTag; // rbp
  PVOID v5; // rax
  void *v6; // rsi
  _QWORD *v7; // rax
  PEX_SPIN_LOCK v8; // rcx
  ULONG_PTR v9; // r9
  unsigned int v10; // ecx
  void *v12; // rcx

  v0 = SepSingletonGlobal;
  v1 = 0;
  v2 = 0;
  *SepSingletonGlobal = 0;
  *((_DWORD *)v0 + 1) = 0;
  *((_QWORD *)v0 + 1) = 0LL;
  *((_DWORD *)v0 + 4) = 0;
  v3 = SeLuidToIndexMapping;
  *(_QWORD *)SeLuidToIndexMapping = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x74446553u);
    if ( PoolWithTag )
    {
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x74446553u);
      v6 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x600uLL);
        v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x74446553u);
        v8 = SepSingletonGlobal;
        *((_QWORD *)SepSingletonGlobal + 1) = v7;
        if ( v7 )
        {
          *v7 = v6;
          ++*((_DWORD *)v8 + 1);
          if ( RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(SeLuidToIndexMapping + 8), 0, 0) )
          {
            v9 = SeLuidToIndexMapping;
            *(_DWORD *)(SeLuidToIndexMapping + 16) = 64;
            *(_QWORD *)(v9 + 24) = PoolWithTag;
            v10 = *(_DWORD *)(v9 + 16);
            LOBYTE(v1) = (v10 & 0x1F) != 0;
            memset(PoolWithTag, 0, 4 * (v1 + (v10 >> 5)));
            return v2;
          }
        }
        v2 = -1073741801;
        ExFreePoolWithTag(v6, 0x74446553u);
      }
      else
      {
        v2 = -1073741801;
      }
      ExFreePoolWithTag(PoolWithTag, 0x74446553u);
    }
    else
    {
      v2 = -1073741801;
    }
    v12 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x74446553u);
  }
  return v2;
}
