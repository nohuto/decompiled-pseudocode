/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D19F8
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00CF474 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0152DE4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0020A60 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00D1D08 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ??0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z @ 0x1C00D1DF4 (--0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z.c)
 */

__int64 __fastcall CreateOutputDuplManager(
        __int64 a1,
        struct ADAPTER_DISPLAY *a2,
        struct _LUID *a3,
        struct _LUID *a4,
        struct OUTPUTDUPL_MGR **a5)
{
  unsigned int v8; // r15d
  _QWORD *v9; // rax
  __int64 v10; // rcx
  OUTPUTDUPL_MGR *v11; // rbx
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax

  v8 = a1;
  if ( !a5 )
  {
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  *a5 = 0LL;
  if ( !a4 || !a3 )
  {
    v9 = operator new[](0x48uLL, 0x674D444Fu, PagedPool);
    v11 = (OUTPUTDUPL_MGR *)v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = 0;
      v9[2] = 0LL;
      v9[3] = 0LL;
      v9[7] = 0LL;
      v9[8] = 0LL;
      *v9 = a2;
      *((_DWORD *)v9 + 12) = 1;
      *((_DWORD *)v9 + 13) = v8;
      v12 = v9 + 4;
      v12[1] = v12;
      *v12 = v12;
      goto LABEL_5;
    }
    goto LABEL_8;
  }
  v18 = operator new[](0x70uLL, 0x674D444Fu, PagedPool);
  if ( v18 )
  {
    v21 = (__int64)*a3;
    v22 = (__int64)*a4;
    v18[2] = DXGGLOBAL::GetGlobal(v10, v17, v19, v20);
    *v18 = 0LL;
    v18[1] = 0LL;
    OUTPUTDUPL_MGR::OUTPUTDUPL_MGR((OUTPUTDUPL_MGR *)(v18 + 3), 0LL, v8);
    v18[12] = v22;
    v18[13] = v21;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
  {
LABEL_8:
    v11 = 0LL;
    goto LABEL_5;
  }
  v11 = (OUTPUTDUPL_MGR *)(v18 + 3);
LABEL_5:
  if ( v11 )
  {
    result = OUTPUTDUPL_MGR::Initialize(v11);
    v15 = result;
    if ( (int)result < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v24 + 24) = a2;
      WdLogEvent5_WdError(v24);
      OUTPUTDUPL_MGR::`scalar deleting destructor'(v11);
      return v15;
    }
    else
    {
      *a5 = v11;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
  return result;
}
