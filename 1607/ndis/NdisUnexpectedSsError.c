/*
 * XREFs of NdisUnexpectedSsError @ 0x1C006B3B0
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C006B1E0 (NdisMIdleNotificationConfirm.c)
 *     ndisIdleWaitWakeCallback @ 0x1C006B7E0 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C006B9B0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C006C890 (ndisSetPowerResumeComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C006C980 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisSetPowerSuspend @ 0x1C00DC7FC (ndisSetPowerSuspend.c)
 * Callees:
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00734F8 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
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
