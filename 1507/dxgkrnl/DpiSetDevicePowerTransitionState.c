/*
 * XREFs of DpiSetDevicePowerTransitionState @ 0x1C00238B0
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0023518 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0028D14 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0028DFC (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 */

NTSTATUS __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // zf

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  result = WdLogEvent5_WdPower(v4);
  v8 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 2712) = v2;
  if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    return Template_xq(v6, &Dxgk_SetDevicePowerTransitionState, v7, *(_QWORD *)(a1 + 2504), v2);
  return result;
}
