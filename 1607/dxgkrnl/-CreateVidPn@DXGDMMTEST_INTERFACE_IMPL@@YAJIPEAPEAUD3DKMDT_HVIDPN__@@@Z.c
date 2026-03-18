/*
 * XREFs of ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A7550
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01A6040 (-CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTE.c)
 */

__int64 __fastcall DXGDMMTEST_INTERFACE_IMPL::CreateVidPn(
        DXGDMMTEST_INTERFACE_IMPL *this,
        _QWORD *a2,
        struct D3DKMDT_HVIDPN__ **a3)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const struct _DXGDMM_VIDPN_INTERFACE **v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  DXGADAPTER *v30[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v31[80]; // [rsp+30h] [rbp-50h] BYREF
  struct DXGADAPTER *v32; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+40h] BYREF
  struct D3DKMDT_HVIDPN__ *v34; // [rsp+C8h] [rbp+48h] BYREF

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
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v8);
  if ( !ProcessDxgProcess )
  {
    v5 = WdLogNewEntry5_WdError(v10);
    goto LABEL_3;
  }
  v32 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v30, v3, ProcessDxgProcess, &v32);
  v12 = v32;
  if ( v32 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v32, 0LL);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
    LODWORD(v15) = v16;
    if ( v16 >= 0 )
    {
      if ( *((_QWORD *)v12 + 266) )
      {
        v33 = 0LL;
        v34 = 0LL;
        v24 = DXGDMM_INTERFACE_V1_IMPL::CreateVidPn(v12, &v33, &v34, v20);
        v15 = v24;
        if ( v24 >= 0 )
        {
          LODWORD(v15) = 0;
          *a2 = v33;
        }
        else
        {
          v29 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
          *(_QWORD *)(v29 + 24) = v12;
          *(_QWORD *)(v29 + 32) = v15;
        }
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v23 + 24) = v3;
        WdLogEvent5_WdError(v23);
        LODWORD(v15) = -1071775742;
      }
    }
    else
    {
      if ( v16 != -1073741130 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      WdLogEvent5_WdWarning(v22);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v3;
    WdLogEvent5_WdError(v13);
    LODWORD(v15) = -1071775742;
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v14);
  return (unsigned int)v15;
}
