/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180051740
 * Callers:
 *     CsrpClientConnectToServer @ 0x180051680 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
