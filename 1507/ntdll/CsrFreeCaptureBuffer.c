/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180007BE0
 * Callers:
 *     CsrpClientConnectToServer @ 0x180007B28 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(__int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0LL, a1);
  return result;
}
