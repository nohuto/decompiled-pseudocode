/*
 * XREFs of DxgkReleaseKeyedMutex2 @ 0x1C006F680
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C000102C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C00010EC (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C0070028 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGKEYEDMUTEX *v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  _QWORD *v25; // rax
  _BYTE v26[64]; // [rsp+B0h] [rbp+B0h] BYREF

  v3 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2069);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v3;
    *(_OWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)(v3 + 16);
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v3 + 32);
    v8 = *(unsigned int *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
      (DXGKEYEDMUTEXBYHANDLE *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      ProcessDxgProcess,
      (struct DXGKEYEDMUTEX **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    v13 = *(DXGKEYEDMUTEX **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v13 )
    {
      v14 = DXGKEYEDMUTEX::ReleaseSync(
              v13,
              v8,
              *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
              *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
              *(void **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
              *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
      v16 = v14;
      if ( v14 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v25[3] = v8;
        v25[4] = v13;
        v25[5] = v16;
        WdLogEvent5_WdError(v25);
      }
      DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v17, &EventProfilerExit, v18, 2069);
      return (unsigned int)v16;
    }
    v24 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v24 + 24) = v8;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL));
    v23 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    v22 = qword_1C0056840;
    v23 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v21, 2069);
  return 3221225485LL;
}
