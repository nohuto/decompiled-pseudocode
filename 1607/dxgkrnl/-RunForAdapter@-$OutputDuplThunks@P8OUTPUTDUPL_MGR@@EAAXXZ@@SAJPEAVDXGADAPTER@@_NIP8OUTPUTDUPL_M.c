/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C017E110
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017DC90 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
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

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_CONTEXT **this)))
{
  struct DXGADAPTER *v5; // rdi
  int OutputDuplManager; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rax
  DXGADAPTER *v22; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v26[96]; // [rsp+70h] [rbp-11h] BYREF
  struct DXGADAPTER *v27; // [rsp+E0h] [rbp+5Fh] BYREF
  struct OUTPUTDUPL_MGR *v28; // [rsp+F8h] [rbp+77h] BYREF

  v22 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v23 = -1LL;
  v27 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, 0, &v22, &v24, &v27, &v23, &v28);
    v12 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      *(_QWORD *)(v13 + 24) = a1;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdWarning(v13);
      return (unsigned int)v12;
    }
    v5 = v27;
    RemoteOutputDuplMgr = v28;
    if ( v27 )
    {
      v16 = 1;
      goto LABEL_9;
    }
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = 90LL;
      WdLogEvent5_WdError(v18);
      return 3221226021LL;
    }
  }
  v16 = 0;
LABEL_9:
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25, v5, v16);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v5, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReference(v22),
        DXGADAPTER::ReleaseReference(v5),
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26),
        v20 >= 0) )
  {
    if ( *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v20 = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v21 + 24) = 0LL;
      WdLogEvent5_WdError(v21);
      v20 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  if ( v25[16] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  return (unsigned int)v20;
}
