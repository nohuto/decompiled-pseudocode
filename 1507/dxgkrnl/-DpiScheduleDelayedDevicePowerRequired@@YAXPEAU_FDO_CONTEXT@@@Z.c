/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00231B8
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0023518 (DpiRequestDevicePowerState.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0023868 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 * Callees:
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequired(struct _FDO_CONTEXT *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v2[4] = 0LL;
  v2[5] = 0LL;
  WdLogEvent5_WdPower(v2);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_xq(v3, &Dxgk_DevicePowerRequiredTimer, v4, *((_QWORD *)a1 + 313), 1);
  KeSetTimer((PKTIMER)((char *)a1 + 2720), (LARGE_INTEGER)qword_1C0047070, (PKDPC)((char *)a1 + 2784));
}
