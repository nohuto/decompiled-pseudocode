/*
 * XREFs of TpCallbackSendPendingAlpcMessage @ 0x180072F30
 * Callers:
 *     <none>
 * Callees:
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C3A4 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackSendPendingAlpcMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 && (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = TppCallbackSendAndDestroyAlpcMessage(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  else
  {
    TppRaiseInvalidParameter(a1, a2, a3);
    return 3221225485LL;
  }
  return result;
}
