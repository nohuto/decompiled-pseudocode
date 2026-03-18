/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C009FC40
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 (__fastcall *a8)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, const struct _DXGKARG_SETPOINTERSHAPE *a3, __int64 a4, UINT a5), __int64, __int64, int, int))
{
  struct DXGADAPTER *v8; // rsi
  __int64 v9; // r14
  DXGADAPTER *v10; // r15
  int OutputDuplManager; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  struct OUTPUTDUPL_MGR *v27; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v28[56]; // [rsp+48h] [rbp-38h] BYREF
  struct DXGADAPTER *v29; // [rsp+B0h] [rbp+30h] BYREF
  DXGADAPTER *v30; // [rsp+C0h] [rbp+40h] BYREF

  v8 = 0LL;
  v9 = a2;
  v27 = 0LL;
  v10 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a2, &v30, &v29, &v27);
    v18 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      *(_QWORD *)(v23 + 24) = a1;
      *(_QWORD *)(v23 + 32) = v18;
      WdLogEvent5_WdWarning(v23);
      return (unsigned int)v18;
    }
    v10 = v30;
    v8 = v29;
    RemoteOutputDuplMgr = v27;
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = 88LL;
      WdLogEvent5_WdError(v25);
      return 3221226021LL;
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v8, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReference(v10),
        DXGADAPTER::ReleaseReference(v8),
        v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28),
        v21 >= 0) )
  {
    if ( (unsigned int)v9 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v26 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v26 + 24) = v9;
      WdLogEvent5_WdError(v26);
      v21 = -1071774972;
    }
    else
    {
      v21 = a8(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a4, a5, a6, a7);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
  return (unsigned int)v21;
}
