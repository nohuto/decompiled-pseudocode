/*
 * XREFs of ValidateDDEConvPair @ 0x1C01E2B94
 * Callers:
 *     NtUserPostMessage @ 0x1C0080290 (NtUserPostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     _PostTransformableMessageIL @ 0x1C009CD54 (_PostTransformableMessageIL.c)
 *     _PostMessageCheckIL @ 0x1C01D8C8C (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E17C0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
