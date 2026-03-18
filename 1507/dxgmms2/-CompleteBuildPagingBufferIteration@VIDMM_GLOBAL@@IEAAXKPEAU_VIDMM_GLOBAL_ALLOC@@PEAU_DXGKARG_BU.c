/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C9CC (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D1D8 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D390 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C004D744 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C004DE74 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C004F634 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F940 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050870 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0053FC0 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C0054408 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z @ 0x1C004DDA0 (-GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z.c)
 *     ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C0064128 (-RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFF.c)
 */

void __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        void *a7)
{
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  struct _DXGKARG_BUILDPAGINGBUFFER *v9; // r15
  int v12; // r13d
  int v13; // r15d
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // rax
  unsigned __int64 v25; // [rsp+90h] [rbp+18h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER *v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v7 = -1LL;
  v8 = (unsigned int)a2;
  v25 = -1LL;
  v9 = a4;
  if ( !a3 || (**((_DWORD **)a3 + 59) & 0x10000000) == 0 )
  {
    v12 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * (unsigned int)a2 + 670);
    v13 = LODWORD(a4->pDmaBufferPrivateData) - *((_DWORD *)this + 2 * (unsigned int)a2 + 798);
    if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * (unsigned int)a2 + 670) || v13 )
    {
      VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, a2, &v25);
      v7 = v25;
      if ( a3 )
      {
        if ( *((_QWORD *)a3 + 21) > v25 )
        {
          v14 = *((_DWORD *)a3 + 19) & 0x3F;
          v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
          v15[6] = v14;
          v15[3] = 270LL;
          v15[4] = 31LL;
          v15[5] = a3;
          v15[7] = v7;
          WdLogEvent5_WdCriticalError(v15);
        }
        *((_QWORD *)a3 + 21) = v7;
        if ( *((_DWORD *)this + 2) == 206 )
        {
          if ( *((_QWORD *)a3 + 20) > v7 )
          {
            v16 = *((_DWORD *)a3 + 19) & 0x3F;
            v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
            v17[6] = v16;
            v17[3] = 270LL;
            v17[4] = 31LL;
            v17[5] = a3;
            v17[7] = v7;
            WdLogEvent5_WdCriticalError(v17);
          }
          *((_QWORD *)a3 + 20) = v7;
        }
      }
    }
    *((_DWORD *)this + v8 + 414) += v12;
    if ( *((_DWORD *)this + v8 + 414) > *((_DWORD *)this + v8 + 29) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v18[3] = 270LL;
      v18[4] = 18LL;
      v18[5] = 0LL;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
    *((_DWORD *)this + v8 + 542) += v13;
    if ( *((_DWORD *)this + v8 + 542) > *((_DWORD *)this + v8 + 93) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v19[3] = 270LL;
      v19[4] = 19LL;
      v19[5] = 0LL;
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
    }
    v9 = v26;
  }
  v20 = a5;
  VIDMM_GLOBAL::RecordPagingOperation(this, v8, a3, v9, a5, v7, a6, a7);
  if ( (int)v20 < 0 )
  {
    if ( (_DWORD)v20 == -1071775743 )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, 1, 0LL, 0LL, 1u);
    }
    else
    {
      v23 = *((_QWORD *)this + 3);
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21);
      v24[3] = 270LL;
      v24[4] = 11LL;
      v24[5] = v9;
      v24[6] = v20;
      v24[7] = v23;
      WdLogEvent5_WdCriticalError(v24);
    }
  }
}
