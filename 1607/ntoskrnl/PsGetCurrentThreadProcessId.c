/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1400857E0
 * Callers:
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PiDqTraceQueryCreate @ 0x14048CA30 (PiDqTraceQueryCreate.c)
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 *     EtwpNotifyGuid @ 0x14048DF38 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     CmpCreateKeyBody @ 0x140490828 (CmpCreateKeyBody.c)
 *     SeAuditHandleCreation @ 0x1404E9174 (SeAuditHandleCreation.c)
 *     EtwpDisallowedGuidAddition @ 0x140572A54 (EtwpDisallowedGuidAddition.c)
 *     PoShutdownBugCheck @ 0x14066E8B4 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FB14 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadProcessId()
{
  return *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
}
