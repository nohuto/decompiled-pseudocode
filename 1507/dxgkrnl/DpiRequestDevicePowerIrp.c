/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x1C0023468
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0023518 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0028D14 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS result; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rax

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  WdLogEvent5_WdPower(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_xq(v5, &Dxgk_DpiRequestDevicePowerIrp, v6, *(_QWORD *)(a1 + 2504), v2);
  result = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 24), 2u, (POWER_STATE)v2, 0LL, 0LL, 0LL);
  v9 = result;
  if ( result != 259 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v10[3] = 0LL;
    v10[4] = PoRequestPowerIrp;
    v10[5] = v9;
    return WdLogEvent5_WdError(v10);
  }
  return result;
}
