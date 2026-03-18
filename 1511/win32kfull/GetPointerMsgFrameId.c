/*
 * XREFs of GetPointerMsgFrameId @ 0x1C01FBDFC
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C013F484 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E0FB4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerMsgFrameId(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 28);
  else
    return 0LL;
}
