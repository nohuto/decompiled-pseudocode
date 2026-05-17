/*
 * XREFs of TppCallbackPerformDeferredWork @ 0x180080968
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18007C21C (TppCallbackSendAndDestroyAlpcMessage.c)
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
