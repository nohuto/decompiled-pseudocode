/*
 * XREFs of DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C015A92C
 * Callers:
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C002F270 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 * Callees:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z @ 0x1C015A698 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAIPEAU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionIndexByLuid(__int64 a1, struct _LUID *a2, _WORD *a3)
{
  unsigned int VirtualGpuByLuid; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(*(ADAPTER_RENDER **)(a1 + 2136), a2, (__int64)a3);
  if ( VirtualGpuByLuid <= 0xFFFF )
  {
    *a3 = VirtualGpuByLuid;
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = 781LL;
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
}
