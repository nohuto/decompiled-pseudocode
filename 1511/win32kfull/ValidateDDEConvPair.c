/*
 * XREFs of ValidateDDEConvPair @ 0x1C01EC014
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     NtUserPostMessage @ 0x1C005F7D0 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C009176C (_PostTransformableMessageIL.c)
 *     _PostMessageCheckIL @ 0x1C01E2A4C (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01EAC40 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
