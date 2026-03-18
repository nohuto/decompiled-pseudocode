/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0010E6C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     rimInputApc @ 0x1C0010CF0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 *     RIMReadInput @ 0x1C00117E0 (RIMReadInput.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0081BBC (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     IsLeaveEditionCritSupported_0 @ 0x1C0002CE0 (IsLeaveEditionCritSupported_0.c)
 *     LeaveEditionCrit_0 @ 0x1C0002CE8 (LeaveEditionCrit_0.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( *(_DWORD *)this && !*((_DWORD *)this + 1) && (int)IsLeaveEditionCritSupported_0() >= 0 )
    LeaveEditionCrit_0();
}
