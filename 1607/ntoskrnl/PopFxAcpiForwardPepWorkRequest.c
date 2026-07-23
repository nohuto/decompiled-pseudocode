/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x14020E33C
 * Callers:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

void __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  struct _IO_REMOVE_LOCK *v3; // rdi
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  v3 = (struct _IO_REMOVE_LOCK *)(BugCheckParameter2 + 240);
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), (PVOID)0x77466F50, &File, 1u, 0x20u) >= 0 )
  {
    memset(v4, 0, 0x20uLL);
    LODWORD(v4[0]) = 0;
    v4[1] = qword_140301688;
    v4[3] = a2;
    PopFxPlatformInterface(v4);
    IoReleaseRemoveLockEx(v3, (PVOID)0x77466F50, 0x20u);
  }
}
