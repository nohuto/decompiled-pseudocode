/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0008034
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007FB4 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     _DelegateCapturePointers @ 0x1C01E118C (_DelegateCapturePointers.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F72D4 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8958 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F9810 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
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
