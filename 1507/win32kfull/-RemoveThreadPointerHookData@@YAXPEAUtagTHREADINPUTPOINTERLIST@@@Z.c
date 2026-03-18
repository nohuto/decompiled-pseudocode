/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F955C
 * Callers:
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
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
