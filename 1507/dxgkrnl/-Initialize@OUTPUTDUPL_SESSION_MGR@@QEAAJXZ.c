/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C00D8834
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00D85B4 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // esi
  unsigned int v3; // esi
  void **v4; // rax
  void *v5; // rcx
  void **v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = (void **)operator new[](0x10uLL, 0x674D444Fu, PagedPool);
  v6 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer(v4, v3, 0);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 2) = v6;
  if ( !v6 || (v5 = *v6) == 0LL )
  {
    v7 = WdLogNewEntry5_WdLowResource(v5);
    v8 = *((unsigned int *)this + 1);
    v9 = v7;
    *(_QWORD *)(v7 + 24) = v8;
    *(_QWORD *)(v7 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v8, v10, v11, v12);
LABEL_6:
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
  memset(v5, 0, v3);
  v14 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v14 )
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    *((_DWORD *)v14 + 6) = 0;
    v14[2] = 0LL;
    *((_DWORD *)v14 + 7) = 43;
    *((_DWORD *)v14 + 8) = 32;
  }
  *((_QWORD *)this + 1) = v14;
  if ( !v14 )
    goto LABEL_11;
  v20 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v20 )
  {
    *v20 = 0LL;
    v20[1] = 0LL;
    *((_DWORD *)v20 + 6) = 0;
    v20[2] = 0LL;
    *((_DWORD *)v20 + 7) = 43;
    *((_DWORD *)v20 + 8) = 32;
  }
  *((_QWORD *)this + 4) = v20;
  if ( !v20 )
  {
LABEL_11:
    v9 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17, v16, v18, v19);
    goto LABEL_6;
  }
  return 0LL;
}
