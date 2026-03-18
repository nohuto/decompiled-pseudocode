/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C00D1AC0
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00D1D08 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0154CE0 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  SIZE_T v6; // rax
  PVOID v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  AUTOEXPANDALLOCATION *v11; // rax
  AUTOEXPANDALLOCATION *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  void *v15; // rcx
  SIZE_T v16; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v2 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v2 + 24) = 876LL;
    WdLogEvent5_WdError(v2);
    return 3221227272LL;
  }
  v4 = *((unsigned int *)this + 13);
  if ( !(_DWORD)v4 )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 881LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  v6 = 24 * v4;
  if ( !is_mul_ok(*((unsigned int *)this + 13), 0x18uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x674D444Fu, PagedPool);
  *((_QWORD *)this + 2) = v7;
  if ( !v7 )
  {
    v9 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v9 + 24) = 889LL;
LABEL_9:
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
  v10 = 0LL;
  if ( *((_DWORD *)this + 13) )
  {
    while ( 1 )
    {
      v11 = (AUTOEXPANDALLOCATION *)operator new[](0x10uLL, 0x674D444Fu, PagedPool);
      v12 = v11;
      if ( v11 )
      {
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
        *((_DWORD *)v11 + 3) = 0;
        AUTOEXPANDALLOCATION::GetBuffer(v11, 0x100u, 0);
      }
      else
      {
        v12 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10 + 16) = v12;
      v13 = *(_QWORD **)(*((_QWORD *)this + 2) + 24 * v10 + 16);
      if ( !v13 || !*v13 )
        break;
      v14 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
      v15 = v14;
      if ( v14 )
      {
        *v14 = 0LL;
        v14[1] = 0LL;
        *((_DWORD *)v14 + 6) = 0;
        v14[2] = 0LL;
        *((_DWORD *)v14 + 7) = 42;
        *((_DWORD *)v14 + 8) = 10;
      }
      else
      {
        v15 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10) = v15;
      if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10) )
        goto LABEL_25;
      v16 = 8LL * *((unsigned int *)this + 2);
      if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
        v16 = -1LL;
      *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v10 + 8) = operator new[](v16, 0x674D444Fu, PagedPool);
      v15 = *(void **)(*((_QWORD *)this + 2) + 24 * v10 + 8);
      if ( !v15 )
      {
LABEL_25:
        v9 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v9 + 24) = (unsigned int)v10;
        goto LABEL_9;
      }
      memset(v15, 0, 8LL * *((unsigned int *)this + 2));
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)this + 13) )
        return 0LL;
    }
    v9 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v9 + 24) = 901LL;
    goto LABEL_9;
  }
  return 0LL;
}
