/*
 * XREFs of ?CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0179ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00B9638 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMMTEST_INTERFACE_IMPL::CreateVidPnFromActive(
        DXGDMMTEST_INTERFACE_IMPL *this,
        char **a2,
        struct D3DKMDT_HVIDPN__ **a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  int ClientVidPnFromActive; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  struct DXGADAPTER *v28; // rax
  char *v29; // rax
  char *v30; // rax
  _BYTE v31[64]; // [rsp+20h] [rbp-40h] BYREF
  struct DXGADAPTER *v32; // [rsp+98h] [rbp+38h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+40h] BYREF
  DXGADAPTER *v34; // [rsp+A8h] [rbp+48h] BYREF

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
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v8);
    goto LABEL_3;
  }
  v32 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v34, v3, Current, &v32);
  v10 = v32;
  if ( v32 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v32, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
    LODWORD(v12) = v13;
    if ( v13 >= 0 )
    {
      v20 = *((_QWORD *)v10 + 247);
      if ( v20 )
      {
        v22 = *(_QWORD *)(v20 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33, v22);
        v32 = 0LL;
        ClientVidPnFromActive = VIDPN_MGR::CreateClientVidPnFromActive(v22, (__int64 *)&v32, v23, v24);
        v12 = ClientVidPnFromActive;
        if ( ClientVidPnFromActive >= 0 )
        {
          v28 = v32;
          v32 = 0LL;
          v29 = (char *)v28 + 88;
          if ( v29 )
            v30 = v29 - 88;
          else
            v30 = 0LL;
          *a2 = v30;
          LODWORD(v12) = 0;
        }
        else
        {
          v27 = WdLogNewEntry5_WdDmmEvent(v26);
          *(_QWORD *)(v27 + 24) = v12;
          WdLogEvent5_WdDmmEvent(v27);
        }
        auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v21 + 24) = v3;
        WdLogEvent5_WdError(v21);
        LODWORD(v12) = -1071775742;
      }
    }
    else
    {
      if ( v13 != -1073741130 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        WdLogEvent5_WdAssertion(v18);
      }
      v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      WdLogEvent5_WdWarning(v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v3;
    WdLogEvent5_WdError(v11);
    LODWORD(v12) = -1071775742;
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v34);
  return (unsigned int)v12;
}
