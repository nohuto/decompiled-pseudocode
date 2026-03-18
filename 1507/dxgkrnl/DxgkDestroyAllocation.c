/*
 * XREFs of DxgkDestroyAllocation @ 0x1C005C010
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C005C100 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocation(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  struct DXGPROCESS *v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8

  v3 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2006);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v6 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
    if ( v6 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      v8 = DxgkDestroyAllocationHelper(
             v6,
             *(_OWORD *)v3,
             HIDWORD(*(_QWORD *)v3),
             *(const unsigned int **)(v3 + 8),
             *(_QWORD *)(v3 + 16),
             0);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v7, &EventProfilerExit, v9, 2006);
      return v8;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v11 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v11);
  }
  v12 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v12 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v12);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 2006);
  return 3221225485LL;
}
