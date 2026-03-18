/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C005416C
 * Callers:
 *     VidMmCreateProcess @ 0x1C0013280 (VidMmCreateProcess.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0011CAC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011CC0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C003B9B4 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C005ABE0 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00879DC (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(VIDMM_PROCESS *this, struct DXGPROCESS *a2)
{
  __int64 v4; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  VIDMM_PROCESS_HEAP *v9; // rax
  VIDMM_RECYCLE_HEAP_MGR *v10; // rax
  PVOID v11; // rax
  DXGGLOBAL *Global; // rax
  unsigned __int64 MaximumAdapterCount; // rsi
  SIZE_T v14; // rax
  PVOID v15; // rax
  __int64 v16; // rcx

  *(_QWORD *)this = *((_QWORD *)a2 + 7);
  v4 = *((_QWORD *)a2 + 8);
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 1) = v4;
  v5 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(0x40uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v5 )
    v5 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v5, this);
  *((_QWORD *)this + 5) = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C002F554);
    v7 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v7 + 24) = 183LL;
LABEL_5:
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
  if ( dword_1C002F320 )
  {
    v11 = operator new(0x2D0uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v11 )
    {
      v10 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v11);
      goto LABEL_12;
    }
  }
  else
  {
    v9 = (VIDMM_PROCESS_HEAP *)operator new(0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v9 )
    {
      v10 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v9);
      goto LABEL_12;
    }
  }
  v10 = 0LL;
LABEL_12:
  *((_QWORD *)this + 3) = v10;
  if ( !v10 )
  {
    _InterlockedIncrement(&dword_1C002F5A0);
    v7 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v7 + 24) = 203LL;
    goto LABEL_5;
  }
  result = (*(__int64 (__fastcall **)(VIDMM_RECYCLE_HEAP_MGR *, VIDMM_PROCESS *))(*(_QWORD *)v10 + 8LL))(v10, this);
  if ( (int)result >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global);
    v14 = 8 * MaximumAdapterCount;
    if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
      v14 = -1LL;
    v15 = operator new(v14, 0x33316956u, PagedPool);
    *((_QWORD *)this + 2) = v15;
    if ( !v15 )
    {
      _InterlockedIncrement(&dword_1C002F544);
      v7 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v7 + 24) = 225LL;
      goto LABEL_5;
    }
    memset(v15, 0, 8 * MaximumAdapterCount);
    if ( *((_BYTE *)a2 + 313) )
    {
      *((_DWORD *)this + 12) |= 2u;
      g_pVidMmSystemProcess = this;
    }
    return 0LL;
  }
  return result;
}
