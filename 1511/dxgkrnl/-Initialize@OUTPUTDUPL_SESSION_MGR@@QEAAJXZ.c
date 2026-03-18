/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C00BBE74
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C009F1F0 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // esi
  unsigned int v3; // esi
  void **v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void **v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = (void **)operator new[](0x10uLL, 0x674D444Fu, PagedPool);
  v9 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v4, v3, 0);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 2) = v9;
  if ( v9 && (v6 = *v9) != 0LL )
  {
    memset(v6, 0, v3);
    v10 = (__int64)operator new[](0x40uLL, 0x674D444Fu, (POOL_TYPE)512);
    if ( v10 )
      v10 = DXGFASTMUTEX::DXGFASTMUTEX(v10, 43, 32);
    *((_QWORD *)this + 1) = v10;
    if ( v10 )
    {
      v15 = (__int64)operator new[](0x40uLL, 0x674D444Fu, (POOL_TYPE)512);
      if ( v15 )
        v15 = DXGFASTMUTEX::DXGFASTMUTEX(v15, 43, 32);
      *((_QWORD *)this + 4) = v15;
      if ( v15 )
        return 0LL;
    }
    v19 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v19 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v24, v23, v25, v26);
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    v18 = *((unsigned int *)this + 1);
    v19 = v17;
    *(_QWORD *)(v17 + 24) = v18;
    *(_QWORD *)(v17 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v18, v20, v21, v22);
  }
  WdLogEvent5_WdLowResource(v19);
  return 3221225495LL;
}
