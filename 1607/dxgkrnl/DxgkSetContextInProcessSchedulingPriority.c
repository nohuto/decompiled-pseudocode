/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1C00D8C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r9
  int v17; // r15d
  unsigned int v18; // esi
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2084);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v3 = *v4;
    if ( *(_DWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 4) > 1u )
    {
      v25 = WdLogNewEntry5_WdWarning(v8, v7, ProcessDxgProcess, v10);
      *(_QWORD *)(v25 + 24) = *(int *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      WdLogEvent5_WdWarning(v25);
    }
    else
    {
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        (DXGCONTEXTBYHANDLE *)(v3 + 6),
        *v3,
        ProcessDxgProcess,
        (struct DXGCONTEXT **)v3 + 1,
        0);
      v15 = *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( v15 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2),
          *(struct DXGDEVICE **)(v15 + 16));
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 12), *(_QWORD *)(v15 + 16), 0, v16, 0);
        v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 12));
        if ( v17 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 12));
          if ( *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v27, &EventProfilerExit, v28, 2084);
          return (unsigned int)v17;
        }
        else
        {
          v18 = _guard_dispatch_icall_fptr();
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 12));
          if ( *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(qword_1C0056840, &EventProfilerExit, v19, 2084);
          return v18;
        }
      }
      v26 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v26 + 24) = *v3;
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
    }
    v24 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v23 = qword_1C0056840;
    v24 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v22, 2084);
  return 3221225485LL;
}
