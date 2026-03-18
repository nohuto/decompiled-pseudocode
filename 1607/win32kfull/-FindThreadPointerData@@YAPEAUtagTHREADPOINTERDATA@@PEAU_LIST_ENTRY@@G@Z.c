/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000D13C (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     _DelegateCapturePointers @ 0x1C01D7AF4 (_DelegateCapturePointers.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01EE968 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01F018C (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F0EB8 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v5; // rdx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  do
  {
    v5 = Flink;
    if ( LOWORD(Flink[1].Flink) == a2 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  if ( Flink == a1 )
    return 0LL;
  return v5;
}
