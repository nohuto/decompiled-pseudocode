/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C00DBAB0
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00DBC44 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0158FC4 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this)
{
  unsigned int v2; // eax
  SIZE_T v3; // rax
  unsigned __int64 v4; // kr00_8
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rdi
  _QWORD *v16; // rcx
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rcx
  SIZE_T v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v24 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v24 + 24) = 863LL;
    WdLogEvent5_WdError(v24);
    return 3221227272LL;
  }
  else
  {
    v2 = *((_DWORD *)this + 13);
    if ( v2 )
    {
      v4 = v2;
      v3 = 24LL * v2;
      if ( !is_mul_ok(v4, 0x18uLL) )
        v3 = -1LL;
      v5 = operator new[](v3, 0x674D444Fu, PagedPool);
      *((_QWORD *)this + 2) = v5;
      if ( v5 )
      {
        v10 = 0LL;
        if ( !*((_DWORD *)this + 13) )
          return 0LL;
        while ( 1 )
        {
          v11 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
          v15 = v11;
          if ( v11 )
          {
            *(_QWORD *)v11 = 0LL;
            v11[2] = 0;
            v11[3] = 0;
            AUTOEXPANDALLOCATION::GetBuffer((void **)v11, 0x100u, 0);
          }
          else
          {
            v15 = 0LL;
          }
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10 + 16) = v15;
          v16 = *(_QWORD **)(*((_QWORD *)this + 2) + 24 * v10 + 16);
          if ( !v16 || !*v16 )
            break;
          v17 = operator new[](0x40uLL, 0x674D444Fu, (POOL_TYPE)512);
          if ( v17 )
            v21 = (void *)DXGFASTMUTEX::DXGFASTMUTEX((__int64)v17, 42, 10);
          else
            v21 = 0LL;
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10) = v21;
          if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10) )
            goto LABEL_22;
          v22 = 8LL * *((unsigned int *)this + 2);
          if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
            v22 = -1LL;
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10 + 8) = operator new[](v22, 0x674D444Fu, PagedPool);
          v21 = *(void **)(*((_QWORD *)this + 2) + 24 * v10 + 8);
          if ( !v21 )
          {
LABEL_22:
            v26 = WdLogNewEntry5_WdLowResource(v21, v18, v19, v20);
            *(_QWORD *)(v26 + 24) = (unsigned int)v10;
            goto LABEL_23;
          }
          memset(v21, 0, 8LL * *((unsigned int *)this + 2));
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *((_DWORD *)this + 13) )
            return 0LL;
        }
        v26 = WdLogNewEntry5_WdLowResource(v16, v12, v13, v14);
        *(_QWORD *)(v26 + 24) = 888LL;
      }
      else
      {
        v26 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
        *(_QWORD *)(v26 + 24) = 876LL;
      }
LABEL_23:
      WdLogEvent5_WdLowResource(v26);
      return 3221225495LL;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v25 + 24) = 868LL;
      WdLogEvent5_WdError(v25);
      return 3221225485LL;
    }
  }
}
