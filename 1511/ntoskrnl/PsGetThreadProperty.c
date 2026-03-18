/*
 * XREFs of PsGetThreadProperty @ 0x1400DCC58
 * Callers:
 *     <none>
 * Callees:
 *     PspGetProperty @ 0x140074120 (PspGetProperty.c)
 *     PspValidateThread @ 0x1400DCCDC (PspValidateThread.c)
 *     PsGetJobProperty @ 0x1400DCD54 (PsGetJobProperty.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  char v3; // di
  unsigned __int64 v6; // rcx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)PspValidateThread(Thread, Key, Flags) < 0 )
    return 0LL;
  if ( (int)PspGetProperty(&Thread[1].WaitBlock[1].SparePtr, Key, &v8) >= 0 )
    return v8;
  if ( (v3 & 1) != 0 )
    return v8;
  v6 = Thread->Process[1].Affinity.Bitmap[16];
  if ( !v6 )
    return v8;
  return (PVOID)PsGetJobProperty(v6, Key);
}
