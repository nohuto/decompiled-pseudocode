/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0048090 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0048244 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0048454 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004858C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0048744 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0048A3C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00490BC (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C007B6DC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C007C3C0 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C007C694 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C00426EC (-RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFF.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  __int64 v12; // rsi
  int v13; // r12d
  int v14; // r15d
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  v8 = -1LL;
  v9 = (unsigned int)a2;
  if ( !a3 || (**((_DWORD **)a3 + 59) & 0x10000000) == 0 )
  {
    v12 = (unsigned int)a2;
    v13 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * (unsigned int)a2 + 670);
    v14 = LODWORD(a4->pDmaBufferPrivateData) - *((_DWORD *)this + 2 * (unsigned int)a2 + 798);
    if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * (unsigned int)a2 + 670) || v14 )
    {
      if ( !*((_DWORD *)this + (unsigned int)a2 + 1155) )
      {
        *((_DWORD *)this + (unsigned int)a2 + 1155) = 1;
        ++*((_QWORD *)this + (unsigned int)a2 + 610);
      }
      v8 = *((_QWORD *)this + (unsigned int)a2 + 610);
      if ( a3 )
      {
        if ( *((_QWORD *)a3 + 21) > v8 )
        {
          v15 = *((_DWORD *)a3 + 19) & 0x3F;
          v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, (unsigned int)a2, a4);
          v16[6] = v15;
          v16[3] = 270LL;
          v16[4] = 31LL;
          v16[5] = a3;
          v16[7] = v8;
          WdLogEvent5_WdCriticalError(v16);
        }
        *((_QWORD *)a3 + 21) = v8;
        if ( *((_DWORD *)this + 2) == 206 )
        {
          if ( *((_QWORD *)a3 + 20) > v8 )
          {
            v17 = *((_DWORD *)a3 + 19) & 0x3F;
            v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9, a4);
            v18[6] = v17;
            v18[3] = 270LL;
            v18[4] = 31LL;
            v18[5] = a3;
            v18[7] = v8;
            WdLogEvent5_WdCriticalError(v18);
          }
          *((_QWORD *)a3 + 20) = v8;
        }
      }
    }
    *((_DWORD *)this + v12 + 414) += v13;
    if ( *((_DWORD *)this + v12 + 414) > *((_DWORD *)this + v12 + 29) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9, a4);
      v19[3] = 270LL;
      v19[4] = 18LL;
      v19[5] = 0LL;
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
    }
    *((_DWORD *)this + v12 + 542) += v14;
    if ( *((_DWORD *)this + v12 + 542) > *((_DWORD *)this + v12 + 93) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9, a4);
      v20[3] = 270LL;
      v20[4] = 19LL;
      v20[5] = 0LL;
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
    }
  }
  VIDMM_GLOBAL::RecordPagingOperation(this, v27, a3, a4, a5, v8, a6, a7);
  if ( a5 < 0 )
  {
    if ( a5 == -1071775743 )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v27, 1u, 0LL, 0LL, 1);
    }
    else
    {
      v25 = *((_QWORD *)this + 3);
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23, v24);
      v26[3] = 270LL;
      v26[4] = 11LL;
      v26[5] = a4;
      v26[6] = a5;
      v26[7] = v25;
      WdLogEvent5_WdCriticalError(v26);
    }
  }
}
