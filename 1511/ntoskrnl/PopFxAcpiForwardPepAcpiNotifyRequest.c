/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1401F49C4
 * Callers:
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1400E26D0 (IoReleaseRemoveLockEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1401EA1FC (PopFxFindAndReferenceAcpiDevice.c)
 */

void __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (int)PopFxFindAndReferenceAcpiDevice((__int64 *)BugCheckParameter2) >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    memset(v4, 0, 0x20uLL);
    LODWORD(v4[0]) = 0;
    v4[1] = qword_1402DC248;
    v4[3] = a2;
    PopFxPlatformInterface(v4);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), (PVOID)0x66466F50, 0x20u);
  }
}
