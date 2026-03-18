/*
 * XREFs of DxgkDestroyContext @ 0x1C0078CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C000A20C (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DxgkDestroyContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  DXGCONTEXT *v13; // rbx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  _BYTE v24[32]; // [rsp+80h] [rbp+80h] BYREF

  v3 = (unsigned int *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2040);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (unsigned int *)MmUserProbeAddress;
    v8 = *v3;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL),
      (struct DXGPROCESS *)ProcessDxgProcess);
    v12 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *(_DWORD *)(ProcessDxgProcess + 224)
      && (v11 = *(_QWORD *)(ProcessDxgProcess + 208),
          v10 = *(unsigned int *)(v11 + 16LL * (unsigned int)v12 + 8),
          v9 = ((unsigned int)v8 >> 26) & 0x30,
          (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v11 + 16LL * (unsigned int)v12 + 8) & 0x30))
      && (v10 & 0x1000) == 0
      && (v10 & 0xF) != 0
      && (*(_BYTE *)(v11 + 16LL * (unsigned int)v12 + 8) & 0xF) == 7 )
    {
      v13 = *(DXGCONTEXT **)(v11 + 16LL * (unsigned int)v12);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      if ( (unsigned int)v12 < *(_DWORD *)(ProcessDxgProcess + 224) )
      {
        v14 = *(_QWORD *)(ProcessDxgProcess + 208);
        v15 = *(_DWORD *)(v14 + 16LL * (unsigned int)v12 + 8);
        if ( (((unsigned int)v8 >> 26) & 0x30) == (v15 & 0x30) && (v15 & 0x1000) == 0 && (v15 & 0xF) != 0 )
          *(_DWORD *)(v14 + 16 * (((unsigned __int64)(unsigned int)v8 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL));
      DXGCONTEXT::ReleaseReference(v13);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v16, &EventProfilerExit, v17, 2040);
      return 0LL;
    }
    v23 = WdLogNewEntry5_WdWarning(v9, v12, v10, v11);
    *(_QWORD *)(v23 + 24) = v8;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL));
    v22 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v21 = qword_1C0056840;
    v22 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v20, 2040);
  return 3221225485LL;
}
