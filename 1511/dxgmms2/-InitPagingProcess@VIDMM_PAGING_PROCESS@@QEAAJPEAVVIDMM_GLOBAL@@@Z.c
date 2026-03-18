/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006A100
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00697A4 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0053758 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0053828 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0054070 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C0081524 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = (VIDMM_DEVICE *)operator new(0xF8uLL, 0x38306956u, PagedPool);
  if ( v5 )
    v5 = VIDMM_DEVICE::VIDMM_DEVICE(v5, a2, 0LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    if ( (int)VIDMM_DEVICE::Init(v5, 0LL, v7, v8) < 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v21 + 24) = 6125LL;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40608LL) & 1) != 0 )
      {
        v13 = 0LL;
        for ( *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL)
                                                            + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 3) + 184LL))
                                                + 16LL);
              (unsigned int)v13 < *((_DWORD *)a2 + 1604);
              v13 = (unsigned int)(v13 + 1) )
        {
          v14 = *((_QWORD *)this + v13 + 4);
          if ( v14 )
            *(_QWORD *)(v14 + 80) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 40608) & 0x10) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 40608) |= 0x10u;
        return 0LL;
      }
      v21 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      *(_QWORD *)(v21 + 24) = 6146LL;
    }
    WdLogEvent5_WdAssertion(v21);
  }
  else
  {
    _InterlockedIncrement(&dword_1C002F54C);
    v20 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v20 + 24) = 6120LL;
    WdLogEvent5_WdLowResource(v20);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
