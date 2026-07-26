/*
 * XREFs of NdisUnexpectedSsError @ 0x1C00663C0
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C00661F0 (NdisMIdleNotificationConfirm.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0066760 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00668B0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0067E70 (ndisSetPowerResumeComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0067F60 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisSetPowerSuspend @ 0x1C00D68BC (ndisSetPowerSuspend.c)
 * Callees:
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C006E648 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

__int64 __fastcall NdisUnexpectedSsError(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int16 a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  __int64 result; // rax

  SelectiveSuspend = a1->SelectiveSuspend;
  NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, a2);
  result = SelectiveSuspend->LastUnexpectedFailureLine[0];
  SelectiveSuspend->LastUnexpectedFailureLine[1] = result;
  SelectiveSuspend->LastUnexpectedFailureLine[0] = a2;
  return result;
}
