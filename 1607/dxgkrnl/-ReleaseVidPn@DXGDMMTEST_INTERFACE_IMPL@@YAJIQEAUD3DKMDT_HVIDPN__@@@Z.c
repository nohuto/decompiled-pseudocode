/*
 * XREFs of ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A7860
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00BC240 (-ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z.c)
 */

__int64 __fastcall DXGDMMTEST_INTERFACE_IMPL::ReleaseVidPn(
        DXGDMMTEST_INTERFACE_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3)
{
  __int64 v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct D3DKMDT_HVIDPN__ *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  DXGADAPTER *v30[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v31[80]; // [rsp+30h] [rbp-58h] BYREF
  struct DXGADAPTER *v32; // [rsp+A0h] [rbp+18h] BYREF

  v4 = (unsigned int)this;
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v32 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v30, v4, ProcessDxgProcess, &v32);
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
          v24 = DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(v12, a2, v19);
          v15 = v24;
          if ( v24 >= 0 )
          {
            LODWORD(v15) = 0;
          }
          else
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
            v29[3] = a2;
            v29[4] = v4;
            v29[5] = v15;
          }
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v23 + 24) = v4;
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
      *(_QWORD *)(v13 + 24) = v4;
      WdLogEvent5_WdError(v13);
      LODWORD(v15) = -1071775742;
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v14);
    return (unsigned int)v15;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
