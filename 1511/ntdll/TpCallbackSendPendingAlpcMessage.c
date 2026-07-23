/*
 * XREFs of TpCallbackSendPendingAlpcMessage @ 0x18007C1E0
 * Callers:
 *     <none>
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18007C21C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackSendPendingAlpcMessage(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = TppCallbackSendAndDestroyAlpcMessage(a1, a2);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  else
  {
    TppRaiseInvalidParameter(a1);
    return 3221225485LL;
  }
  return result;
}
