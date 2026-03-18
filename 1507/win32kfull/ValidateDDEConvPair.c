/*
 * XREFs of ValidateDDEConvPair @ 0x1C01EBAF4
 * Callers:
 *     _PostTransformableMessageIL @ 0x1C004E7D4 (_PostTransformableMessageIL.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     NtUserPostMessage @ 0x1C006FDF0 (NtUserPostMessage.c)
 *     _PostMessageCheckIL @ 0x1C01E25BC (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01EA730 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
