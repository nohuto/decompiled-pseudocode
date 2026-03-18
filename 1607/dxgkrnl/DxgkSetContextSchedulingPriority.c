/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C00D9AE0
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
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00A773C (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r9
  int v15; // ebx
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2029);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v3 = *v4;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)(v3 + 6),
      *v3,
      ProcessDxgProcess,
      (struct DXGCONTEXT **)v3 + 1,
      0);
    v13 = *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v13 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2),
        *(struct DXGDEVICE **)(v13 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 12), *(_QWORD *)(v13 + 16), 0, v14, 0);
      v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 12));
      if ( v15 >= 0 )
      {
        v15 = -1073741811;
        v16 = *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        if ( (unsigned int)(v16 + 7) <= 0xE )
        {
          v15 = DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)v13, (unsigned int)(v16 + *(_DWORD *)(v13 + 336)), 1u);
          if ( v15 >= 0 )
            *(_DWORD *)(v13 + 340) = v16;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 12));
      if ( *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v22 + 24) = *v3;
      v15 = -1073741811;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
    v19 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v7);
    v15 = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v17 = qword_1C0056840;
    v19 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 2029);
  return (unsigned int)v15;
}
