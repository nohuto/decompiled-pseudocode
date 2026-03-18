/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050A18 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0050B90 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050D4C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050EB8 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050F58 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0051250 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051824 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0089CC0 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C008B290 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C008B7BC (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C005A4CC (-RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFF.c)
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
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  __int64 v12; // rsi
  int v13; // r12d
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  v8 = -1LL;
  v9 = (unsigned int)a2;
  if ( !a3 || (**((_DWORD **)a3 + 63) & 0x10000000) == 0 )
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
        if ( *((_QWORD *)a3 + 22) > v8 )
        {
          v19 = *((_DWORD *)a3 + 19) & 0x3F;
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, (unsigned int)a2, a4);
          v20[6] = v19;
          v20[3] = 270LL;
          v20[4] = 31LL;
          v20[5] = a3;
          v20[7] = v8;
          WdLogEvent5_WdCriticalError(v20);
        }
        *((_QWORD *)a3 + 22) = v8;
        if ( *((_DWORD *)this + 2) == 206 )
        {
          if ( *((_QWORD *)a3 + 21) > v8 )
          {
            v21 = *((_DWORD *)a3 + 19) & 0x3F;
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9, a4);
            v22[6] = v21;
            v22[3] = 270LL;
            v22[4] = 31LL;
            v22[5] = a3;
            v22[7] = v8;
            WdLogEvent5_WdCriticalError(v22);
          }
          *((_QWORD *)a3 + 21) = v8;
        }
      }
    }
    *((_DWORD *)this + v12 + 414) += v13;
    if ( *((_DWORD *)this + v12 + 414) > *((_DWORD *)this + v12 + 29) )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9, a4);
      v23[3] = 270LL;
      v23[4] = 18LL;
      v23[5] = 0LL;
      v23[6] = 0LL;
      v23[7] = 0LL;
      WdLogEvent5_WdCriticalError(v23);
    }
    *((_DWORD *)this + v12 + 542) += v14;
    if ( *((_DWORD *)this + v12 + 542) > *((_DWORD *)this + v12 + 93) )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v9, a4);
      v24[3] = 270LL;
      v24[4] = 19LL;
      v24[5] = 0LL;
      v24[6] = 0LL;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
    }
  }
  VIDMM_GLOBAL::RecordPagingOperation(this, v27, a3, a4, a5, v8, a6, a7);
  if ( a5 < 0 )
  {
    if ( a5 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v27, 1u, 0LL, 0LL, 1, 0);
    }
    else
    {
      v25 = *((_QWORD *)this + 3);
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17, v18);
      v26[3] = 270LL;
      v26[4] = 11LL;
      v26[5] = a4;
      v26[6] = a5;
      v26[7] = v25;
      WdLogEvent5_WdCriticalError(v26);
    }
  }
}
