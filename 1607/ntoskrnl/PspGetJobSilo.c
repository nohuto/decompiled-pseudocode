/*
 * XREFs of PspGetJobSilo @ 0x1400767A8
 * Callers:
 *     PsIsProcessInSilo @ 0x1400131FC (PsIsProcessInSilo.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     PsGetJobServerSilo @ 0x140076F4C (PsGetJobServerSilo.c)
 *     MiGetNextSession @ 0x140087F18 (MiGetNextSession.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401EC880 (MmIsSessionInCurrentServerSilo.c)
 *     PsGetProcessSilo @ 0x14020EF4C (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     NtQueryAttributesFile @ 0x140414020 (NtQueryAttributesFile.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     VrpShouldOperateOnCall @ 0x140463650 (VrpShouldOperateOnCall.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspCreateSilo @ 0x14067E740 (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1056);
  return a1;
}
