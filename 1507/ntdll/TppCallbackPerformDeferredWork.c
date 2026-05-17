/*
 * XREFs of TppCallbackPerformDeferredWork @ 0x180074E98
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C3A4 (TppCallbackSendAndDestroyAlpcMessage.c)
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
