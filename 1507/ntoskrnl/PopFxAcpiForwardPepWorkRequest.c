/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x140242DA8
 * Callers:
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  ULONG_PTR v3; // rbx
  NTSTATUS result; // eax
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  v3 = BugCheckParameter2 + 240;
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), (PVOID)0x77466F50, &File, 1u, 0x20u);
  if ( result >= 0 )
  {
    memset(v5, 0, 0x20uLL);
    LODWORD(v5[0]) = 0;
    v5[1] = qword_14032C608;
    v5[3] = a2;
    PopFxPlatformInterface(v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
  }
  return result;
}
