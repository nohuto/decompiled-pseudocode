/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140242D14
 * Callers:
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140237F18 (PopFxFindAndReferenceAcpiDevice.c)
 */

LONG __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3, __int64 a4)
{
  LONG result; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  result = PopFxFindAndReferenceAcpiDevice((__int64 *)BugCheckParameter2, (__int64)a2, a3, a4);
  if ( result >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    memset(v7, 0, 0x20uLL);
    LODWORD(v7[0]) = 0;
    v7[1] = qword_14032C608;
    v7[3] = a2;
    PopFxPlatformInterface(v7);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  }
  return result;
}
