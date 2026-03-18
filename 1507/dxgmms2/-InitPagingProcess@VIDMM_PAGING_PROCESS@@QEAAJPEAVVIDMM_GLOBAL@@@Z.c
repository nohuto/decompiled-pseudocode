/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0044BBC
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C003D084 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00364D8 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0037C64 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0037D34 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C005F078 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx

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
      v19 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v19 + 24) = 6090LL;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40552LL) & 1) != 0 )
      {
        v20 = 0LL;
        for ( *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL)
                                                            + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 3) + 184LL))
                                                + 16LL);
              (unsigned int)v20 < *((_DWORD *)a2 + 1604);
              v20 = (unsigned int)(v20 + 1) )
        {
          v21 = *((_QWORD *)this + v20 + 4);
          if ( v21 )
            *(_QWORD *)(v21 + 80) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 40552) & 0x10) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 40552) |= 0x10u;
        return 0LL;
      }
      v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v19 + 24) = 6111LL;
    }
    WdLogEvent5_WdAssertion(v19);
  }
  else
  {
    _InterlockedIncrement(&dword_1C002753C);
    v18 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v18 + 24) = 6085LL;
    WdLogEvent5_WdLowResource(v18);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
