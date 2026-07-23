/*
 * XREFs of PsGetThreadProperty @ 0x1400EC3B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetJobProperty @ 0x1400A76DC (PsGetJobProperty.c)
 *     PspGetProperty @ 0x1400EC13C (PspGetProperty.c)
 *     PspValidateThread @ 0x1400EC448 (PspValidateThread.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  char v3; // di
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)PspValidateThread(Thread, Key, Flags) < 0 )
    return 0LL;
  if ( (int)PspGetProperty((__int64)&Thread[1].WaitBlock[1].SparePtr, Key, &v8) < 0 && (v3 & 1) == 0 )
  {
    v6 = *(_QWORD *)&Thread[1].WaitBlockFill11[160] == -3LL
       ? Thread->Process[1].Affinity.Bitmap[16]
       : PsGetCurrentSilo();
    if ( v6 )
      return (PVOID)PsGetJobProperty(v6, Key);
  }
  return v8;
}
