/*
 * XREFs of PspGetJobSilo @ 0x1400776E8
 * Callers:
 *     PsGetJobServerSilo @ 0x1400222FC (PsGetJobServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     PsIsProcessInSilo @ 0x14009E1A0 (PsIsProcessInSilo.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PsLookupThreadByThreadId @ 0x140436060 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     PsGetSiloObjectFromJob @ 0x14063F86C (PsGetSiloObjectFromJob.c)
 *     PsInsertSiloObjectFromJob @ 0x14063F9E4 (PsInsertSiloObjectFromJob.c)
 *     PsRemoveSiloObjectFromJob @ 0x14063FB60 (PsRemoveSiloObjectFromJob.c)
 *     PspCreateSilo @ 0x140640174 (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && !*(_QWORD *)(a1 + 1248) )
    a1 = *(_QWORD *)(a1 + 1064);
  return a1;
}
