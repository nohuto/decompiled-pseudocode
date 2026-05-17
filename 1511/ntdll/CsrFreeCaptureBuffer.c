/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180051740
 * Callers:
 *     CsrpClientConnectToServer @ 0x180051680 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
