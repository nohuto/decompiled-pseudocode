/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14020E2B4
 * Callers:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140202A00 (PopFxFindAndReferenceAcpiDevice.c)
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
    v4[1] = qword_140301688;
    v4[3] = a2;
    PopFxPlatformInterface(v4);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), (PVOID)0x66466F50, 0x20u);
  }
}
