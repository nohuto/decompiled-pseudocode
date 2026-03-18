/*
 * XREFs of DpiSetDevicePowerTransitionState @ 0x1C000D038
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C00104C8 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00288D4 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C00289BC (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
 */

__int64 __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 result; // rax
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
  *(_DWORD *)(a1 + 2776) = v2;
  if ( !v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    return Template_xq(v6, &Dxgk_SetDevicePowerTransitionState, v7, *(_QWORD *)(a1 + 2544), v2);
  return result;
}
