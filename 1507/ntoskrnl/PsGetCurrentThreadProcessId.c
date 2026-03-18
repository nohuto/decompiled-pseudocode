/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1400CD4B0
 * Callers:
 *     PiUEventHandleRegistration @ 0x14041610C (PiUEventHandleRegistration.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x140551628 (EtwpDisallowedGuidAddition.c)
 *     PiDqTraceQueryCreate @ 0x140554728 (PiDqTraceQueryCreate.c)
 *     SeAuditHandleCreation @ 0x140554E5C (SeAuditHandleCreation.c)
 *     EtwpDisallowedGuidRemoval @ 0x14058D7E4 (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterSecurityProvider @ 0x1405C2950 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1406B5E1C (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadProcessId()
{
  return *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
}
