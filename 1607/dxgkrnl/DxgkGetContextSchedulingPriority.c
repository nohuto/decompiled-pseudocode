/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1C0070680
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r9
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned int v26[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2030);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v9 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v9 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v3 = *v9;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)(v3 + 6),
      *v3,
      ProcessDxgProcess,
      (struct DXGCONTEXT **)v3 + 1,
      0);
    v14 = *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v14 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        (DXGDEVICEACCESSLOCKSHARED *)(v3 + 2),
        *(struct DXGDEVICE **)(v14 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 12), *(_QWORD *)(v14 + 16), 0, v15, 0);
      v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 12));
      if ( v16 < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 12));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 2));
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(qword_1C0056840, &EventProfilerExit, v25, 2030);
        return (unsigned int)v16;
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_DWORD *)(v14 + 340);
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (_QWORD *)MmUserProbeAddress;
        *v4 = *(_QWORD *)v3;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 12));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 2));
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v17, &EventProfilerExit, v18, 2030);
        return 0LL;
      }
    }
    v24 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v24 + 24) = *v3;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
    v23 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    v22 = qword_1C0056840;
    v23 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v21, 2030);
  return 3221225485LL;
}
