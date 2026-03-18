/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_ALLOC@@_KI1PEAU_MDL@@PEAE1@Z @ 0x1C0060F88
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D390 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
        VIDMM_PAGING_PROCESS *this,
        unsigned int a2,
        unsigned int a3,
        struct _VIDMM_GLOBAL_ALLOC *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_ALLOC *a9,
        unsigned __int64 a10)
{
  __int64 v11; // r14
  int v14; // eax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  CVirtualAddressAllocator *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax

  v11 = a3;
  v15 = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 3712LL)
                               + 8LL
                               * (*(_DWORD *)(456LL * a2 + *(_QWORD *)(*((_QWORD *)this + 2) + 39992LL) + 4) + a6 - 1))
                   + 368LL) == 0x10000
      && !(_WORD)a3 )
    {
      v14 = *((_DWORD *)a4 + 8);
      if ( v14 )
      {
        if ( !(_WORD)v14 )
          v15 = 1;
      }
    }
  }
  *(_BYTE *)a9 = v15;
  v16 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v15 )
  {
    v17 = v16[5072];
    v18 = v16[5073];
  }
  else
  {
    v17 = v16[5070];
    v18 = v16[5071];
  }
  v19 = (CVirtualAddressAllocator *)*((_QWORD *)this + a2 + 4);
  v20 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v19,
          a4,
          a5,
          3LL,
          v11,
          0LL,
          v17,
          v18,
          *((_DWORD *)a4 + 8),
          1LL,
          a10,
          a2,
          0LL,
          0);
  v23 = v20;
  if ( v20 )
  {
    *(_DWORD *)(v20 + 64) |= 0x1000u;
    *(_QWORD *)(v20 + 40) = 0LL;
    if ( (int)CVirtualAddressAllocator::CommitVirtualAddressRange(
                v19,
                (struct VIDMM_MAPPED_VA_RANGE *)v20,
                a2,
                a6,
                a7,
                a8,
                0,
                &a9,
                0,
                1u) < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
      v28[3] = 270LL;
      v28[4] = 48LL;
      v28[5] = this;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    return (struct VIDMM_MAPPED_VA_RANGE *)v23;
  }
  else
  {
    v24 = WdLogNewEntry5_WdEvent(v22, v21);
    WdLogEvent5_WdEvent(v24);
    return 0LL;
  }
}
