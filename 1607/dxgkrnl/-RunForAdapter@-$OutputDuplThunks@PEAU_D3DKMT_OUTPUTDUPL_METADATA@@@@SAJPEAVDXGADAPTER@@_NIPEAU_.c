/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C017E27C
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C017E584 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0078C30 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(
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
  __int64 v14; // rbx
  __int64 v15; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rax
  struct DXGADAPTER *v24; // [rsp+48h] [rbp-51h] BYREF
  DXGADAPTER *v25; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v28[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v29[80]; // [rsp+88h] [rbp-11h] BYREF
  struct OUTPUTDUPL_MGR *v30; // [rsp+F8h] [rbp+5Fh] BYREF

  v25 = 0LL;
  v5 = 0LL;
  v30 = 0LL;
  v26 = -1LL;
  v8 = a3;
  v24 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v25, &v27, &v24, &v26, &v30);
    v14 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = a1;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdWarning(v15);
      return (unsigned int)v14;
    }
    v5 = v24;
    RemoteOutputDuplMgr = v30;
    if ( v24 )
    {
      v18 = 1;
      goto LABEL_9;
    }
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = 90LL;
      WdLogEvent5_WdError(v20);
      return 3221226021LL;
    }
  }
  v18 = 0;
LABEL_9:
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28, v5, v18);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReference(v25),
        DXGADAPTER::ReleaseReference(v5),
        v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29),
        v22 >= 0) )
  {
    if ( (unsigned int)v8 < *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v22 = a5(RemoteOutputDuplMgr, a4);
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v23 + 24) = v8;
      WdLogEvent5_WdError(v23);
      v22 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
  if ( v28[16] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  return (unsigned int)v22;
}
