/*
 * XREFs of AVrfpEnableHandleVerifier @ 0x1800C573C
 * Callers:
 *     AVrfpEnableVerifierOptions @ 0x1800C581C (AVrfpEnableVerifierOptions.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     NtSetInformationProcess @ 0x180093AC0 (NtSetInformationProcess.c)
 */

__int64 AVrfpEnableHandleVerifier()
{
  int v0; // ebx
  int v1; // eax

  if ( !AVrfpHandleTraces || (v0 = NtSetInformationProcess(), v0 < 0) )
  {
    v1 = NtSetInformationProcess();
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
