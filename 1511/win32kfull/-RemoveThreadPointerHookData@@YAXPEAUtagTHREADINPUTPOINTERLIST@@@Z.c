/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F9A0C
 * Callers:
 *     xxxPointerCallHook @ 0x1C000B9B8 (xxxPointerCallHook.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall RemoveThreadPointerHookData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 3);
  if ( v1 )
  {
    PointerList::UnreferenceMsgData(*(_QWORD *)(v1 + 24), 5LL);
    Win32FreePool(v1);
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
