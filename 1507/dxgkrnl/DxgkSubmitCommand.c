/*
 * XREFs of DxgkSubmitCommand @ 0x1C0068EA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0068F10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rdi
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v12; // rbx

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2102);
  Current = DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    v7 = DxgkSubmitCommandInternal(a1, Current);
    v9 = v7 + 0x80000000;
    if ( (int)v9 >= 0 && v7 != -1073741130 )
    {
      v9 = (unsigned int)g_DwmRenderDebugMode;
      if ( !g_DwmRenderDebugMode
        && (*(unsigned int (**)(void))(*((_QWORD *)v6 + 10) + 216LL))()
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
          v7,
          (const void *)&g_DwmRenderDebugMode);
        JUMPOUT(0x1C00ED897LL);
      }
    }
    v10 = v7;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v5);
    v10 = -1073741811;
    *(_QWORD *)(v12 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v8, 2102);
  return v10;
}
