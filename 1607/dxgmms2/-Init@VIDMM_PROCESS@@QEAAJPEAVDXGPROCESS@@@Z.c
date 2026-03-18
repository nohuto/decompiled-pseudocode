/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C005C75C
 * Callers:
 *     VidMmCreateProcess @ 0x1C0010D60 (VidMmCreateProcess.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00100C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00100E0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C0044774 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C0060458 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C009C718 (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(VIDMM_PROCESS *this, struct DXGPROCESS *a2, __int64 a3, __int64 a4)
{
  VIDMM_PROCESS_FENCE_STORAGE *v6; // rax
  __int64 v7; // rcx
  PVOID v8; // rax
  VIDMM_RECYCLE_HEAP_MGR *v9; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // esi
  SIZE_T v13; // rax
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  VIDMM_PROCESS_HEAP *v17; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  *(_QWORD *)this = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 4) = a2;
  v6 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(0x40uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v6 )
    v6 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v6, this);
  *((_QWORD *)this + 5) = v6;
  if ( !v6 )
  {
    _InterlockedIncrement(&dword_1C00355D4);
    v16 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v16 + 24) = 184LL;
LABEL_21:
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
  if ( dword_1C0035330 )
  {
    v8 = operator new(0x498uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v8 )
    {
      v9 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v8);
      goto LABEL_9;
    }
  }
  else
  {
    v17 = (VIDMM_PROCESS_HEAP *)operator new(0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v17 )
    {
      v9 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v17);
      goto LABEL_9;
    }
  }
  v9 = 0LL;
LABEL_9:
  *((_QWORD *)this + 3) = v9;
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C0035620);
    v16 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v16 + 24) = 204LL;
    goto LABEL_21;
  }
  result = (*(__int64 (__fastcall **)(VIDMM_RECYCLE_HEAP_MGR *, VIDMM_PROCESS *))(*(_QWORD *)v9 + 8LL))(v9, this);
  if ( (int)result < 0 )
    return result;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v13 = 8LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
    v13 = -1LL;
  v14 = operator new(v13, 0x33316956u, PagedPool);
  *((_QWORD *)this + 2) = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C00355C4);
    v16 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v16 + 24) = 226LL;
    goto LABEL_21;
  }
  memset(v14, 0, 8LL * MaximumAdapterCount);
  if ( *((_BYTE *)a2 + 289) )
  {
    *((_DWORD *)this + 12) |= 2u;
    g_pVidMmSystemProcess = this;
  }
  return 0LL;
}
