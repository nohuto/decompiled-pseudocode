/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C000FE08
 * Callers:
 *     RIMReadInput @ 0x1C0006150 (RIMReadInput.c)
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C007F27C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     IsLeaveEditionCritSupported_0 @ 0x1C0002CE0 (IsLeaveEditionCritSupported_0.c)
 *     LeaveEditionCrit_0 @ 0x1C0002CE8 (LeaveEditionCrit_0.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( *(_DWORD *)this && !*((_DWORD *)this + 1) && (int)IsLeaveEditionCritSupported_0() >= 0 )
    LeaveEditionCrit_0();
}
