/*
 * XREFs of PsGetThreadProperty @ 0x14010D36C
 * Callers:
 *     <none>
 * Callees:
 *     PsGetJobProperty @ 0x14010D2B0 (PsGetJobProperty.c)
 *     PspGetProperty @ 0x14010D3F0 (PspGetProperty.c)
 *     PspValidateThread @ 0x14010D4BC (PspValidateThread.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  char v3; // di
  __int64 v6; // rcx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)PspValidateThread(Thread, Key, Flags) < 0 )
    return 0LL;
  if ( (int)PspGetProperty(&Thread[1].WaitBlockFill11[88], Key, &v8) < 0 && (v3 & 1) == 0 )
  {
    v6 = Thread->Process[1].Affinity.Bitmap[16];
    if ( v6 )
      return (PVOID)PsGetJobProperty(v6, Key);
  }
  return v8;
}
