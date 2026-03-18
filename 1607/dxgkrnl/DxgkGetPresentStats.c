/*
 * XREFs of DxgkGetPresentStats @ 0x1C0172E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  struct DXGADAPTER *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGADAPTER *v28; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v29[16]; // [rsp+38h] [rbp-90h] BYREF
  DXGADAPTER *v30[3]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v31[80]; // [rsp+60h] [rbp-68h] BYREF

  v5 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))() )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = v12;
    LODWORD(v12) = -1073741790;
    *(_QWORD *)(v18 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *(struct DXGFASTMUTEX *const *)(v12 + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v30, v5, (struct DXGPROCESS *)v12, &v28);
  v20 = v28;
  if ( !v28 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v21 + 24) = v5;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_15;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v28, 0LL);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
  v12 = v23;
  if ( v23 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v24);
LABEL_13:
    *(_QWORD *)(v25 + 24) = v20;
    *(_QWORD *)(v25 + 32) = v12;
    WdLogEvent5_WdError(v25);
    goto LABEL_14;
  }
  if ( *((_BYTE *)v20 + 2053) || (v26 = *((_QWORD *)v20 + 267)) == 0 )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    v12 = -1073741811LL;
    goto LABEL_13;
  }
  LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v26 + 376) + 8LL)
                                                                            + 408LL))(
                   *(_QWORD *)(v26 + 384),
                   a2,
                   a3,
                   a4);
LABEL_14:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
LABEL_15:
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v22);
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  return (unsigned int)v12;
}
