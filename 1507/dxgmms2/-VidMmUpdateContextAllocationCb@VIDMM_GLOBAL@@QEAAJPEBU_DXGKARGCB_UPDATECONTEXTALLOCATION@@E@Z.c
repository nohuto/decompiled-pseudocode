/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C0055F38
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C000E4C0 (-VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C0054408 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C005FE14 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD ***hAllocation; // rax
  __int64 **v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  CVirtualAddressAllocator *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct VIDMM_MAPPED_VA_RANGE *v18; // r14
  __int64 v19; // rax
  D3DGPU_VIRTUAL_ADDRESS v20; // r12
  struct _MDL *FullMDL; // r10
  int v22; // ecx
  unsigned __int64 v23; // rdx
  unsigned int v24; // r9d
  _QWORD v25[10]; // [rsp+70h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v26; // [rsp+108h] [rbp+20h] BYREF

  if ( (_BYTE)a3 )
  {
    v8 = (__int64 **)*((_QWORD *)a2->hAllocation + 3);
    v9 = **v8;
    v10 = *(_QWORD *)(v9 + 128);
    v11 = (CVirtualAddressAllocator *)*((_QWORD *)this + (*(_DWORD *)(v9 + 76) & 0x3F) + 5004);
    if ( (*((_DWORD *)v8 + 7) & 3) == 2 )
    {
      v13 = CVirtualAddressAllocator::MapVirtualAddressRange(
              v11,
              v8,
              0LL,
              1LL,
              *(_QWORD *)(v9 + 16),
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v9 + 32),
              1LL,
              0LL,
              *(_DWORD *)(v9 + 76) & 0x3F,
              0LL,
              0);
      v18 = (struct VIDMM_MAPPED_VA_RANGE *)v13;
      if ( v13 )
      {
        v20 = *(_QWORD *)(v13 + 96);
        if ( (*(_DWORD *)(v10 + 56) & 0x1001) != 0 )
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v9, 0LL);
        else
          FullMDL = 0LL;
        v22 = *(_DWORD *)(v10 + 56);
        if ( (v22 & 0x1001) != 0 )
          v23 = 0LL;
        else
          v23 = *(_QWORD *)(v9 + 136);
        if ( (*(_DWORD *)(v10 + 56) & 0x1001) != 0 || (v22 & 0x1000) != 0 )
          v24 = 0;
        else
          v24 = *(_DWORD *)(v10 + 16) + 1;
        CVirtualAddressAllocator::CommitVirtualAddressRange(
          v11,
          v18,
          *(_DWORD *)(v9 + 76) & 0x3F,
          v24,
          v23,
          FullMDL,
          1,
          &v26,
          0,
          1u);
        VIDMM_GLOBAL::UpdateContextAllocation(
          (ADAPTER_RENDER **)this,
          v20,
          *(struct _VIDMM_GLOBAL_ALLOC **)(v9 + 16),
          (SIZE_T)a2->pPrivateDriverData,
          a2->PrivateDriverDataSize);
        CVirtualAddressAllocator::FreeVirtualAddressRange(v11, v20);
        return 0LL;
      }
      else
      {
        v19 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        *(_QWORD *)(v19 + 24) = 20476LL;
        WdLogEvent5_WdAssertion(v19);
        return 3221225473LL;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdAssertion(*(unsigned int *)(v9 + 76), v8, a3, a4);
      *(_QWORD *)(v12 + 24) = 20455LL;
      WdLogEvent5_WdAssertion(v12);
      return 3221225485LL;
    }
  }
  else
  {
    memset(v25, 0, sizeof(v25));
    hAllocation = (_QWORD ***)a2->hAllocation;
    LODWORD(v25[0]) = 117;
    v25[5] = a2;
    HIDWORD(v25[0]) = *(_DWORD *)(**hAllocation[3] + 76LL) & 0x3F;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v25);
  }
}
