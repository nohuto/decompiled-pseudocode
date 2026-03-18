/*
 * XREFs of PspGetJobSilo @ 0x140076728
 * Callers:
 *     PsIsProcessInSilo @ 0x14001367C (PsIsProcessInSilo.c)
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     PsGetJobServerSilo @ 0x140076ECC (PsGetJobServerSilo.c)
 *     MiGetNextSession @ 0x140086628 (MiGetNextSession.c)
 *     SepAdtLogAuditRecord @ 0x140145330 (SepAdtLogAuditRecord.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401ECA54 (MmIsSessionInCurrentServerSilo.c)
 *     PsGetProcessSilo @ 0x14020F120 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x14020F794 (PsGetJobSilo.c)
 *     PsGetCurrentSilo @ 0x140406380 (PsGetCurrentSilo.c)
 *     NtQueryAttributesFile @ 0x140415160 (NtQueryAttributesFile.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 *     ObOpenObjectByName @ 0x140464694 (ObOpenObjectByName.c)
 *     VrpShouldOperateOnCall @ 0x140464780 (VrpShouldOperateOnCall.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     PspCreateSilo @ 0x14067E65C (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1056);
  return a1;
}
