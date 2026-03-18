/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@1@Z@Z @ 0x1C015934C
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0158D50 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this)))
{
  struct DXGADAPTER *v4; // rdi
  DXGADAPTER *v5; // r14
  int OutputDuplManager; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct OUTPUTDUPL_MGR *v22; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v23[56]; // [rsp+38h] [rbp-38h] BYREF
  struct DXGADAPTER *v24; // [rsp+A0h] [rbp+30h] BYREF
  DXGADAPTER *v25; // [rsp+B0h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, 0, &v25, &v24, &v22);
    v13 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = a1;
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdWarning(v14);
      return (unsigned int)v13;
    }
    v5 = v25;
    v4 = v24;
    RemoteOutputDuplMgr = v22;
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
    if ( !RemoteOutputDuplMgr )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = 88LL;
      WdLogEvent5_WdError(v21);
      return 3221226021LL;
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v4, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReference(v5),
        DXGADAPTER::ReleaseReference(v4),
        v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23),
        v18 >= 0) )
  {
    if ( *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v18 = a4(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v19 + 24) = 0LL;
      WdLogEvent5_WdError(v19);
      v18 = -1071774972;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
  return (unsigned int)v18;
}
