/*
 * XREFs of IsMiPPointerMessage @ 0x1401362D0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x140136220 (-PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPPointerMessage(unsigned int a1, int a2)
{
  if ( a1 - 577 <= 3 )
    return (_WORD)a2 == 1;
  if ( a1 >= 0x245 )
  {
    if ( a1 > 0x257 || a1 == 589 )
      return 0LL;
    return (_WORD)a2 == 1;
  }
  if ( a1 != 528 || (_WORD)a2 != 582 )
    return 0LL;
  return HIWORD(a2) == 1;
}
