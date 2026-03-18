/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14003D380
 * Callers:
 *     EtwpDisallowedGuidRemoval @ 0x1403B5278 (EtwpDisallowedGuidRemoval.c)
 *     PiUEventHandleRegistration @ 0x1403BFB78 (PiUEventHandleRegistration.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     PiDqTraceQueryCreate @ 0x14045F5F4 (PiDqTraceQueryCreate.c)
 *     SeAuditHandleCreation @ 0x1404BD7B8 (SeAuditHandleCreation.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     EtwpRegisterSecurityProvider @ 0x14054B668 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x14063650C (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadProcessId()
{
  return *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
}
