/*
 * XREFs of ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01A76B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084EB8 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMMTEST_INTERFACE_IMPL::CreateVidPnFromActive(
        DXGDMMTEST_INTERFACE_IMPL *this,
        char **a2,
        struct D3DKMDT_HVIDPN__ **a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  int ClientVidPnFromActive; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  struct DXGADAPTER *v31; // rax
  char *v32; // rax
  char *v33; // rax
  DXGADAPTER *v34[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v35[80]; // [rsp+30h] [rbp-50h] BYREF
  struct DXGADAPTER *v36; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+30h] BYREF

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
  v36 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v34, v3, ProcessDxgProcess, &v36);
  v12 = v36;
  if ( v36 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v36, 0LL);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
    LODWORD(v15) = v16;
    if ( v16 >= 0 )
    {
      v23 = *((_QWORD *)v12 + 266);
      if ( v23 )
      {
        v25 = *(_QWORD *)(v23 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v37, v25);
        v36 = 0LL;
        ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive(v25, (__int64 *)&v36, v26, v27);
        v15 = ClientVidPnFromActive;
        if ( ClientVidPnFromActive >= 0 )
        {
          v31 = v36;
          v36 = 0LL;
          v32 = (char *)v31 + 88;
          if ( v32 )
            v33 = v32 - 88;
          else
            v33 = 0LL;
          *a2 = v33;
          LODWORD(v15) = 0;
        }
        else
        {
          v30 = WdLogNewEntry5_WdDmmEvent(v29);
          *(_QWORD *)(v30 + 24) = v15;
          WdLogEvent5_WdDmmEvent(v30);
        }
        auto_rc<DMMVIDPN>::reset((__int64 *)&v36, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v24 + 24) = v3;
        WdLogEvent5_WdError(v24);
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
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v3;
    WdLogEvent5_WdError(v13);
    LODWORD(v15) = -1071775742;
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v34, v14);
  return (unsigned int)v15;
}
