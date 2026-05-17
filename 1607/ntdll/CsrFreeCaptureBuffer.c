/*
 * XREFs of CsrFreeCaptureBuffer @ 0x1800757F0
 * Callers:
 *     CsrpClientConnectToServer @ 0x18007572C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
