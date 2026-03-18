/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C017E3FC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0078C30 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rdi
  __int64 v8; // r14
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct OUTPUTDUPL_MGR *v14; // rbx
  __int64 v15; // rax
  char v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGADAPTER *v22; // [rsp+48h] [rbp-51h] BYREF
  DXGADAPTER *v23; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v26[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v27[80]; // [rsp+88h] [rbp-11h] BYREF
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+F8h] [rbp+5Fh] BYREF

  v23 = 0LL;
  v5 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v24 = -1LL;
  v8 = a3;
  v22 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v14 = RemoteOutputDuplMgr;
    if ( !RemoteOutputDuplMgr )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = 90LL;
      WdLogEvent5_WdError(v18);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v23, &v25, &v22, &v24, &RemoteOutputDuplMgr);
  v14 = (struct OUTPUTDUPL_MGR *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v22;
    v14 = RemoteOutputDuplMgr;
    if ( v22 )
    {
      v16 = 1;
      goto LABEL_9;
    }
LABEL_8:
    v16 = 0;
LABEL_9:
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v26, v5, v16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v5, 0LL);
    if ( a1 )
    {
      DXGADAPTER::ReleaseReference(v23);
      DXGADAPTER::ReleaseReference(v5);
      if ( *((_DWORD *)v5 + 44) != 1 )
      {
        LODWORD(v14) = -1073741130;
LABEL_16:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
        if ( v26[16] )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
        return (unsigned int)v14;
      }
      v14 = RemoteOutputDuplMgr;
    }
    if ( (unsigned int)v8 < *((_DWORD *)v14 + 13) )
    {
      LODWORD(v14) = a5(v14, a4);
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = v8;
      WdLogEvent5_WdError(v21);
      LODWORD(v14) = -1071774972;
    }
    goto LABEL_16;
  }
  v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
  *(_QWORD *)(v15 + 24) = a1;
  *(_QWORD *)(v15 + 32) = v14;
  WdLogEvent5_WdWarning(v15);
  return (unsigned int)v14;
}
