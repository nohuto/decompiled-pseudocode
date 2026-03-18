/*
 * XREFs of ValidateDDEConvPair @ 0x140211B04
 * Callers:
 *     _PostTransformableMessageIL @ 0x1400218F0 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140022150 (NtUserPostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessageCheckIL @ 0x1401EE5AC (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x140211B4C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

struct tagWND *__fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *result; // rax
  unsigned int v4; // ebx

  result = (struct tagWND *)ValidateHwnd(a1);
  v4 = 0;
  if ( result )
  {
    LOBYTE(v4) = FindDdeConv(result, a2) != 0LL;
    return (struct tagWND *)v4;
  }
  return result;
}
