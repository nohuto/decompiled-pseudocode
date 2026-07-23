/*
 * XREFs of CsrFreeCaptureBuffer @ 0x1800757E0
 * Callers:
 *     CsrpClientConnectToServer @ 0x18007571C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
