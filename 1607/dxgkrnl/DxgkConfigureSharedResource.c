/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C00D2F70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0095794 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v9; // rcx
  PERESOURCE *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2056);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v19 = WdLogNewEntry5_WdError(v7);
    v14 = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_10:
    v16 = qword_1C0056840;
    v17 = (qword_1C0056840 & 2) == 0;
LABEL_11:
    if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v16, &EventProfilerExit, v15, 2056);
    return v14;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v4;
  *(_OWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v4[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 8));
  v10 = *(PERESOURCE **)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v10 )
  {
    v20 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v20 + 24) = *(unsigned int *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v14 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
    v17 = (qword_1C0056840 & 2) == 0;
    goto LABEL_11;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, (__int64)v10, 0, v11, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  if ( v13 >= 0 )
  {
    LOBYTE(v12) = *(_BYTE *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    v14 = DXGDEVICE::ConfigureSharedResource(
            v10,
            v12,
            *(void **)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
            *(unsigned int *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
            *(_BYTE *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    if ( *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_10;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  if ( *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 2056);
  return (unsigned int)v13;
}
