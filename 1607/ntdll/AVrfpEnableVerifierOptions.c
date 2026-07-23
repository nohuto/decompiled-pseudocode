/*
 * XREFs of AVrfpEnableVerifierOptions @ 0x1800D6B5C
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 * Callees:
 *     AVrfpEnableHandleVerifier @ 0x1800D6A7C (AVrfpEnableHandleVerifier.c)
 *     AVrfpEnableHeapVerifier @ 0x1800D6AF0 (AVrfpEnableHeapVerifier.c)
 */

__int64 AVrfpEnableVerifierOptions()
{
  int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // eax
  char v3; // al

  v0 = AVrfpVerifierFlags;
  v1 = 0;
  if ( (AVrfpVerifierFlags & 0x8001) != 0 && !AVrfpEnableHeapVerifier() )
    v1 = -1073741823;
  if ( (v0 & 4) != 0 )
  {
    v2 = AVrfpEnableHandleVerifier();
    v0 = AVrfpVerifierFlags;
    v1 = v2;
  }
  if ( (v0 & 8) != 0 )
  {
    if ( NtCurrentPeb()->BeingDebugged || MEMORY[0x7FFE02D4] )
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x10000;
    v0 = AVrfpVerifierFlags;
  }
  v3 = RtlpCriticalSectionVerifier;
  if ( (v0 & 0x40000) != 0 )
    v3 = 1;
  RtlpCriticalSectionVerifier = v3;
  return v1;
}
