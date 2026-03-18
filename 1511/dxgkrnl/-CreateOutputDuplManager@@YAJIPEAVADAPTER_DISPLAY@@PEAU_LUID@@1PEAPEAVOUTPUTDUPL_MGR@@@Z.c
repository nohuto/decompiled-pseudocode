/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00DB9E8
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00DB25C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0157088 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0020954 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00DBC44 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ??0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z @ 0x1C00DBCD4 (--0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  OUTPUTDUPL_MGR *v14; // rbx
  _QWORD *v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax

  v8 = a1;
  if ( !a5 )
  {
    v19 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v19 + 24) = 0LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  *a5 = 0LL;
  if ( !a4 || !a3 )
  {
    v9 = operator new[](0x48uLL, 0x674D444Fu, PagedPool);
    v14 = (OUTPUTDUPL_MGR *)v9;
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
      v15 = v9 + 4;
      v15[1] = v15;
      *v15 = v15;
      goto LABEL_5;
    }
    goto LABEL_8;
  }
  v20 = operator new[](0x70uLL, 0x674D444Fu, PagedPool);
  if ( v20 )
  {
    v21 = (__int64)*a3;
    v22 = (__int64)*a4;
    v20[2] = DXGGLOBAL::GetGlobal(v11);
    *v20 = 0LL;
    v20[1] = 0LL;
    OUTPUTDUPL_MGR::OUTPUTDUPL_MGR((OUTPUTDUPL_MGR *)(v20 + 3), 0LL, v8);
    v20[12] = v22;
    v20[13] = v21;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
LABEL_8:
    v14 = 0LL;
    goto LABEL_5;
  }
  v14 = (OUTPUTDUPL_MGR *)(v20 + 3);
LABEL_5:
  if ( v14 )
  {
    result = OUTPUTDUPL_MGR::Initialize(v14);
    v18 = result;
    if ( (int)result < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v24 + 24) = a2;
      WdLogEvent5_WdError(v24);
      OUTPUTDUPL_MGR::`scalar deleting destructor'(v14);
      return v18;
    }
    else
    {
      *a5 = v14;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
  return result;
}
