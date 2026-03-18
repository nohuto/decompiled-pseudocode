/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C00742FC
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
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

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *__hidden this, const struct _DXGKARG_SETPOINTERPOSITION *), __int64))
{
  struct DXGADAPTER *v6; // rdi
  __int64 v8; // r14
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v16; // r8
  __int64 v17; // rcx
  int v18; // edi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  DXGADAPTER *v24; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v27[24]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v28[80]; // [rsp+78h] [rbp-19h] BYREF
  struct DXGADAPTER *v29; // [rsp+E8h] [rbp+57h] BYREF
  struct OUTPUTDUPL_MGR *v30; // [rsp+100h] [rbp+6Fh] BYREF

  v24 = 0LL;
  v6 = 0LL;
  v30 = 0LL;
  v25 = -1LL;
  v8 = a3;
  v29 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v24, &v26, &v29, &v25, &v30);
    v14 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v20 + 24) = a1;
      *(_QWORD *)(v20 + 32) = v14;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v14;
    }
    v6 = v29;
    RemoteOutputDuplMgr = v30;
    if ( v29 )
    {
      v16 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = 90LL;
      WdLogEvent5_WdError(v22);
      return 3221226021LL;
    }
  }
  v16 = 0;
LABEL_5:
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27, v6, v16);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v6, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReference(v24),
        DXGADAPTER::ReleaseReference(v6),
        v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28),
        v18 >= 0) )
  {
    if ( (unsigned int)v8 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v23 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v23 + 24) = v8;
      WdLogEvent5_WdError(v23);
      v18 = -1071774972;
    }
    else
    {
      v18 = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerPositionChange, a5);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
  if ( v27[16] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  return (unsigned int)v18;
}
