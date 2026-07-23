/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1400870D0
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 *     PiUEventHandleRegistration @ 0x14048DCAC (PiUEventHandleRegistration.c)
 *     EtwpNotifyGuid @ 0x14048E9C8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     CmpCreateKeyBody @ 0x1404912B8 (CmpCreateKeyBody.c)
 *     SeAuditHandleCreation @ 0x1404CB264 (SeAuditHandleCreation.c)
 *     EtwpDisallowedGuidAddition @ 0x140572F94 (EtwpDisallowedGuidAddition.c)
 *     PoShutdownBugCheck @ 0x14066E998 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FC4C (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadProcessId()
{
  return *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
}
