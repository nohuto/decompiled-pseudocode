/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C008F594
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 (__fastcall *a8)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, const struct _DXGKARG_SETPOINTERSHAPE *a3, __int64 a4, UINT a5), __int64, __int64, int, int))
{
  DXGADAPTER *v8; // rbx
  __int64 v9; // r14
  DXGADAPTER *v10; // r15
  int OutputDuplManager; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct OUTPUTDUPL_MGR *v23; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v25[8]; // [rsp+50h] [rbp-30h] BYREF
  DXGADAPTER *v26; // [rsp+58h] [rbp-28h]
  char v27; // [rsp+60h] [rbp-20h]
  _BYTE v28[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGADAPTER *v29; // [rsp+70h] [rbp-10h]
  char v30; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v31; // [rsp+B0h] [rbp+30h] BYREF
  DXGADAPTER *v32; // [rsp+C0h] [rbp+40h] BYREF

  v8 = 0LL;
  v9 = (unsigned int)a2;
  v23 = 0LL;
  v10 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, (unsigned int)a2, &v32, &v31, &v23);
    v8 = (DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      *(_QWORD *)(v20 + 24) = a1;
      *(_QWORD *)(v20 + 32) = v8;
      WdLogEvent5_WdWarning(v20);
      return (unsigned int)v8;
    }
    v10 = v32;
    v8 = v31;
    RemoteOutputDuplMgr = v23;
LABEL_4:
    v26 = v8;
    v27 = 0;
    if ( v8 )
      DXGADAPTER::AcquireReference(v8);
    v29 = v8;
    v30 = 0;
    if ( v8 )
      DXGADAPTER::AcquireReference(v8);
    if ( !a1
      || (DXGADAPTER::ReleaseReference(v10),
          DXGADAPTER::ReleaseReference(v8),
          LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24),
          (int)v8 >= 0) )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
      {
        v22 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v22 + 24) = v9;
        WdLogEvent5_WdError(v22);
        LODWORD(v8) = -1071774972;
      }
      else
      {
        LODWORD(v8) = a8(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a4, a5, a6, a7);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    return (unsigned int)v8;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2, a3, a4);
  if ( RemoteOutputDuplMgr )
    goto LABEL_4;
  v21 = WdLogNewEntry5_WdError(v15);
  *(_QWORD *)(v21 + 24) = 88LL;
  WdLogEvent5_WdError(v21);
  return 3221226021LL;
}
