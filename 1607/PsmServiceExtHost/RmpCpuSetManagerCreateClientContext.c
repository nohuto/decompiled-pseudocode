/*
 * XREFs of RmpCpuSetManagerCreateClientContext @ 0x18001D048
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateClientContext(__int64 a1, int a2, _QWORD *a3)
{
  char *Heap; // rax
  unsigned int v7; // edi
  char *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    *(_QWORD *)v8 = a1;
    *((_DWORD *)v8 + 14) = a2;
    *((_QWORD *)v8 + 4) = v8 + 24;
    *((_QWORD *)v8 + 3) = v8 + 24;
    *((_QWORD *)v8 + 6) = v8 + 40;
    *((_QWORD *)v8 + 5) = v8 + 40;
    v9 = v8 + 8;
    v10 = *(_QWORD **)(a1 + 16);
    if ( *v10 != a1 + 8 )
      __fastfail(3u);
    *v9 = a1 + 8;
    *((_QWORD *)v8 + 2) = v10;
    *v10 = v9;
    *(_QWORD *)(a1 + 16) = v9;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
