/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1P6AJPEAV3@21@Z@Z @ 0x1C00AD274
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, __int64 a3, __int64 a4), __int64))
{
  struct DXGADAPTER *v5; // rsi
  __int64 v6; // r14
  DXGADAPTER *v7; // r15
  int OutputDuplManager; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  struct OUTPUTDUPL_MGR *v24; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v25[56]; // [rsp+38h] [rbp-38h] BYREF
  struct DXGADAPTER *v26; // [rsp+A0h] [rbp+30h] BYREF
  DXGADAPTER *v27; // [rsp+B0h] [rbp+40h] BYREF

  v5 = 0LL;
  v6 = (unsigned int)a2;
  v24 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, (unsigned int)a2, &v27, &v26, &v24);
    v15 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v20 + 24) = a1;
      *(_QWORD *)(v20 + 32) = v15;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v15;
    }
    v7 = v27;
    v5 = v26;
    RemoteOutputDuplMgr = v24;
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2, a3, a4);
    if ( !RemoteOutputDuplMgr )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = 88LL;
      WdLogEvent5_WdError(v22);
      return 3221226021LL;
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v5, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReference(v7),
        DXGADAPTER::ReleaseReference(v5),
        v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25),
        v18 >= 0) )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v23 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v23 + 24) = v6;
      WdLogEvent5_WdError(v23);
      v18 = -1071774972;
    }
    else
    {
      v18 = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerPositionChange, a4);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  return (unsigned int)v18;
}
