/*
 * XREFs of ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C017CAA0 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 */

__int64 __fastcall DXGDMMTEST_INTERFACE_IMPL::CreateVidPn(
        DXGDMMTEST_INTERFACE_IMPL *this,
        _QWORD *a2,
        struct D3DKMDT_HVIDPN__ **a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const struct _DXGDMM_VIDPN_INTERFACE **v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  DXGADAPTER *v27; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v28[56]; // [rsp+28h] [rbp-38h] BYREF
  struct DXGADAPTER *v29; // [rsp+98h] [rbp+38h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  struct D3DKMDT_HVIDPN__ *v31; // [rsp+A8h] [rbp+48h] BYREF

  v3 = (unsigned int)this;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = v3;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  *a2 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v8);
    goto LABEL_3;
  }
  v29 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v27, v3, Current, &v29);
  v10 = v29;
  if ( v29 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v29, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28);
    LODWORD(v12) = v13;
    if ( v13 >= 0 )
    {
      if ( *((_QWORD *)v10 + 248) )
      {
        v30 = 0LL;
        v31 = 0LL;
        v21 = DXGDMM_INTERFACE_V1_IMPL::CreateVidPn(v10, &v30, &v31, v17);
        v12 = v21;
        if ( v21 >= 0 )
        {
          LODWORD(v12) = 0;
          *a2 = v30;
        }
        else
        {
          v26 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
          *(_QWORD *)(v26 + 24) = v10;
          *(_QWORD *)(v26 + 32) = v12;
        }
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v20 + 24) = v3;
        WdLogEvent5_WdError(v20);
        LODWORD(v12) = -1071775742;
      }
    }
    else
    {
      if ( v13 != -1073741130 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v18);
      }
      v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      WdLogEvent5_WdWarning(v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v3;
    WdLogEvent5_WdError(v11);
    LODWORD(v12) = -1071775742;
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v27);
  return (unsigned int)v12;
}
