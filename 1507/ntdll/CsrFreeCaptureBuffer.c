/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180007BE0
 * Callers:
 *     CsrpClientConnectToServer @ 0x180007B28 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
