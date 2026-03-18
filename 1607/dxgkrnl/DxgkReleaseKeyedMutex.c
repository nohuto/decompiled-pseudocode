/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1C0177410
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C000102C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C00010EC (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C0070028 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGKEYEDMUTEX *v18; // r14
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  _BYTE v26[48]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2055);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v10 = qword_1C0056840;
    v11 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2055);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v3;
  *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v3 + 16);
  v13 = *(unsigned int *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
    (DXGKEYEDMUTEXBYHANDLE *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    ProcessDxgProcess,
    (struct DXGKEYEDMUTEX **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v18 = *(DXGKEYEDMUTEX **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = v13;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  v20 = DXGKEYEDMUTEX::ReleaseSync(
          v18,
          v13,
          *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
          *(struct _LIST_ENTRY **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
          0LL,
          0);
  v22 = v20;
  if ( v20 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v23[3] = v13;
    v23[4] = v18;
    v23[5] = v22;
    WdLogEvent5_WdError(v23);
  }
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 2055);
  return (unsigned int)v22;
}
