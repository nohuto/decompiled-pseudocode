/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C0074A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0074C00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *ProcessDxgProcess; // r10
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v21[2]; // [rsp+50h] [rbp-68h]
  _QWORD v22[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v22, 0, sizeof(v22));
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v22[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 52;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2105);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_QWORD *)&v21[0].0 = *(_QWORD *)(a1 + 16);
    if ( (v21[1].Value & 0x7FFFFFFC) != 0 )
    {
      v11 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8, v9);
      *(_QWORD *)(v11 + 24) = 8167LL;
      WdLogEvent5_WdWarning(v11);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v12, &EventProfilerExit, v13, 2105);
      return 3221225485LL;
    }
    else
    {
      v16 = DxgkDestroyAllocationHelper(
              ProcessDxgProcess,
              *(_OWORD *)a1,
              HIDWORD(*(_QWORD *)a1),
              *(const unsigned int **)(a1 + 8),
              v21[0].Value,
              v21[1],
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v22);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v15, &EventProfilerExit, v17, 2105);
      return v16;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2105);
    return 3221225485LL;
  }
}
