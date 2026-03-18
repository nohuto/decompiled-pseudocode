/*
 * XREFs of DxgkSubmitCommand @ 0x1C00B8DB0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C007C660 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rbx

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2102);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v16 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v16 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v16);
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_16:
    v17 = WdLogNewEntry5_WdError(v7);
    v14 = -1073741811;
    *(_QWORD *)(v17 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_5;
  }
  v11 = DxgkSubmitCommandInternal(a1, *(struct DXGPROCESS **)(ProcessWin32Process + 248));
  v13 = 0x80000000LL;
  v14 = v11;
  if ( (int)(v11 + 0x80000000) >= 0
    && v11 != -1073741130
    && !g_DwmRenderDebugMode
    && (*(unsigned int (**)(void))(*(_QWORD *)(v10 + 80) + 216LL))()
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
      v14,
      (const void *)&g_DwmRenderDebugMode);
    JUMPOUT(0x1C010F14ELL);
  }
LABEL_5:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v12, 2102);
  return v14;
}
