/*
 * XREFs of DxgkSubmitCommand @ 0x1C00A4550
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00A6890 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2102);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v9 = DxgkSubmitCommandInternal(a1, ProcessDxgProcess);
    v11 = v9 + 0x80000000;
    if ( (int)v11 >= 0 && v9 != -1073741130 )
    {
      v11 = (unsigned int)g_DwmRenderDebugMode;
      if ( !g_DwmRenderDebugMode
        && (*(unsigned int (**)(void))(*((_QWORD *)v8 + 9) + 216LL))()
        && !KdRefreshDebuggerNotPresent() )
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "An unexpected render failure 0x%x from DWM has been detected.\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "To disable debug breaks for DWM render failures, run \"?? dxgmms2!g_DwmRenderDebugMode=1\" command,\n"
          "or \"ed 0x%p 1\"\n"
          "\n",
          v9,
          (const void *)&g_DwmRenderDebugMode);
        JUMPOUT(0x1C01199E5LL);
      }
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    v9 = -1073741811;
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v14);
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v10, 2102);
  return v9;
}
