/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C0078A64
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0078C30 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, const struct _DXGKARG_SETPOINTERSHAPE *a3, __int64 a4, UINT a5), __int64, __int64, int, int))
{
  struct DXGADAPTER *v9; // rbx
  __int64 v10; // rsi
  int OutputDuplManager; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r8
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  DXGADAPTER *v24; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v27[24]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v28[16]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v29; // [rsp+88h] [rbp-21h]
  struct DXGADAPTER *v30; // [rsp+90h] [rbp-19h]
  char v31; // [rsp+98h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-1h]
  struct DXGADAPTER *v33; // [rsp+B0h] [rbp+7h]
  char v34; // [rsp+B8h] [rbp+Fh]
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+E8h] [rbp+3Fh] BYREF
  struct DXGADAPTER *v36; // [rsp+100h] [rbp+57h] BYREF

  v24 = 0LL;
  v9 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v10 = a3;
  v36 = 0LL;
  v25 = -1LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v24, &v26, &v36, &v25, &RemoteOutputDuplMgr);
    v9 = (struct DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v20 + 24) = a1;
      *(_QWORD *)(v20 + 32) = v9;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v9;
    }
    v9 = v36;
    if ( v36 )
    {
      v17 = 1;
LABEL_5:
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27, v9, v17);
      v30 = v9;
      v31 = 0;
      if ( v9 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
        v9 = v36;
        v29 = -1LL;
      }
      v33 = v9;
      v34 = 0;
      if ( v9 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
        v9 = v36;
        v32 = -1LL;
      }
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v24),
            DXGADAPTER::ReleaseReference(v9),
            LODWORD(v9) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28),
            (int)v9 >= 0) )
      {
        if ( (unsigned int)v10 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v23 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v23 + 24) = v10;
          WdLogEvent5_WdError(v23);
          LODWORD(v9) = -1071774972;
        }
        else
        {
          LODWORD(v9) = a9(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a5, a6, a7, a8);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
      if ( v27[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
      return (unsigned int)v9;
    }
LABEL_19:
    v17 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    goto LABEL_19;
  v22 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v22 + 24) = 90LL;
  WdLogEvent5_WdError(v22);
  return 3221226021LL;
}
