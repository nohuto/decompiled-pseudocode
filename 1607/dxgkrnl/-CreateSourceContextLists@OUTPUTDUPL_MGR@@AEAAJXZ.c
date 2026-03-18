/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C00F7744
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00F78E4 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C017DCF0 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this)
{
  unsigned int v2; // eax
  SIZE_T v3; // rax
  unsigned __int64 v4; // kr00_8
  PVOID v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  void *v12; // rcx
  SIZE_T v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 24) = 907LL;
    WdLogEvent5_WdError(v15);
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
      v5 = operator new(v3, 0x674D444Fu, PagedPool);
      *((_QWORD *)this + 2) = v5;
      if ( v5 )
      {
        v7 = 0LL;
        if ( !*((_DWORD *)this + 13) )
          return 0LL;
        while ( 1 )
        {
          v8 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
          v9 = v8;
          if ( v8 )
          {
            *(_QWORD *)v8 = 0LL;
            v8[2] = 0;
            v8[3] = 0;
            AUTOEXPANDALLOCATION::GetBuffer((void **)v8, 0x100u, 0);
          }
          else
          {
            v9 = 0LL;
          }
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v7 + 16) = v9;
          v10 = *(_QWORD **)(*((_QWORD *)this + 2) + 24 * v7 + 16);
          if ( !v10 || !*v10 )
            break;
          v11 = operator new(0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
          v12 = v11;
          if ( v11 )
          {
            *v11 = 0LL;
            v11[1] = 0LL;
            *((_DWORD *)v11 + 6) = 0;
            v11[2] = 0LL;
            *((_DWORD *)v11 + 7) = 42;
            *((_DWORD *)v11 + 8) = 10;
          }
          else
          {
            v12 = 0LL;
          }
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v7) = v12;
          if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 24 * v7) )
            goto LABEL_22;
          v13 = 8LL * *((unsigned int *)this + 2);
          if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
            v13 = -1LL;
          *(_QWORD *)(*((_QWORD *)this + 2) + 24 * v7 + 8) = operator new[](v13, 0x674D444Fu, PagedPool);
          v12 = *(void **)(*((_QWORD *)this + 2) + 24 * v7 + 8);
          if ( !v12 )
          {
LABEL_22:
            v17 = WdLogNewEntry5_WdLowResource(v12);
            *(_QWORD *)(v17 + 24) = (unsigned int)v7;
            goto LABEL_23;
          }
          memset(v12, 0, 8LL * *((unsigned int *)this + 2));
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *((_DWORD *)this + 13) )
            return 0LL;
        }
        v17 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v17 + 24) = 932LL;
      }
      else
      {
        v17 = WdLogNewEntry5_WdLowResource(v6);
        *(_QWORD *)(v17 + 24) = 920LL;
      }
LABEL_23:
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v16 + 24) = 912LL;
      WdLogEvent5_WdError(v16);
      return 3221225485LL;
    }
  }
}
