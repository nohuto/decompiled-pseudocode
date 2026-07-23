/*
 * XREFs of TppCallbackPerformDeferredWork @ 0x180086378
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008339C (TppCallbackSendAndDestroyAlpcMessage.c)
 */

__int64 __fastcall TppCallbackPerformDeferredWork(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = TppCallbackSendAndDestroyAlpcMessage(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  return result;
}
