/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@1@Z@Z @ 0x1C0159480
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01595CC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_RELEASE_FRAME *>::RunForAdapter(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v4; // rbx
  __int64 v5; // r14
  DXGADAPTER *v6; // r15
  int OutputDuplManager; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGADAPTER *v22; // [rsp+30h] [rbp-50h] BYREF
  struct OUTPUTDUPL_MGR *v23; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v24[64]; // [rsp+40h] [rbp-40h] BYREF
  DXGADAPTER *v25; // [rsp+B0h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = a2;
  v23 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
    if ( !RemoteOutputDuplMgr )
    {
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = 88LL;
      WdLogEvent5_WdError(v20);
      return 3221226021LL;
    }
    goto LABEL_5;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a2, &v25, &v22, &v23);
  v4 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v6 = v25;
    v4 = v22;
    RemoteOutputDuplMgr = v23;
LABEL_5:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v4, 0LL);
    if ( !a1
      || (DXGADAPTER::ReleaseReference(v6),
          DXGADAPTER::ReleaseReference(v4),
          LODWORD(v4) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24),
          (int)v4 >= 0) )
    {
      if ( (unsigned int)v5 < *((_DWORD *)RemoteOutputDuplMgr + 13) )
      {
        LODWORD(v4) = a4(RemoteOutputDuplMgr, a3);
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v18 + 24) = v5;
        WdLogEvent5_WdError(v18);
        LODWORD(v4) = -1071774972;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    return (unsigned int)v4;
  }
  v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
  *(_QWORD *)(v15 + 24) = a1;
  *(_QWORD *)(v15 + 32) = v4;
  WdLogEvent5_WdWarning(v15);
  return (unsigned int)v4;
}
