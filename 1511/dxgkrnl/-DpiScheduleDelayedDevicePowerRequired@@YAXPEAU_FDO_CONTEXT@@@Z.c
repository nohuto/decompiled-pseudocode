/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00230B8
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C00104C8 (DpiRequestDevicePowerState.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0023418 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 * Callees:
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
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
    Template_xq(v3, &Dxgk_DevicePowerRequiredTimer, v4, *((_QWORD *)a1 + 318), 1);
  KeSetTimer((PKTIMER)((char *)a1 + 2784), (LARGE_INTEGER)qword_1C00470F0, (PKDPC)((char *)a1 + 2848));
}
