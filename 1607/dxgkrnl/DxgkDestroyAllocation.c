/*
 * XREFs of DxgkDestroyAllocation @ 0x1C0152EE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0074C00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r10
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r8
  _BYTE v13[112]; // [rsp+F0h] [rbp+F0h] BYREF

  v1 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL;
  memset((void *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 32), 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 40));
  *(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 51;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v3, &EventProfilerEnter, v4, 2006);
  CurrentProcess = PsGetCurrentProcess(v3);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v1 = *(_OWORD *)a1;
    *(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(a1 + 16);
    v10 = DxgkDestroyAllocationHelper(
            ProcessDxgProcess,
            *(_DWORD *)v1,
            *(_DWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
            *(unsigned int **)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            *(_DWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            0,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(v1 + 32));
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v11, 2006);
  return v10;
}
