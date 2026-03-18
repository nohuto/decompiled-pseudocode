/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C0062AD0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0062C10 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v20[2]; // [rsp+40h] [rbp-18h]

  v3 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2105);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v8 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
    if ( v8 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_QWORD *)&v20[0].0 = *(_QWORD *)(v3 + 16);
      if ( (v20[1].Value & 0x7FFFFFFC) != 0 )
      {
        v9 = WdLogNewEntry5_WdWarning(v8, MmUserProbeAddress, v6, v7);
        *(_QWORD *)(v9 + 24) = 7747LL;
        WdLogEvent5_WdWarning(v9);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v10, &EventProfilerExit, v11, 2105);
        return 3221225485LL;
      }
      else
      {
        v14 = DxgkDestroyAllocationHelper(
                v8,
                *(_OWORD *)v3,
                HIDWORD(*(_QWORD *)v3),
                *(const unsigned int **)(v3 + 8),
                v20[0].Value,
                v20[1]);
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v13, &EventProfilerExit, v15, 2105);
        return v14;
      }
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v16 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v16);
  }
  v17 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v17 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v17);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 2105);
  return 3221225485LL;
}
