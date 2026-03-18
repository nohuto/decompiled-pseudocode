/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F0C14
 * Callers:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall RemoveThreadPointerHookData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = *((_QWORD *)a1 + 3);
  if ( v1 )
  {
    PointerList::UnreferenceMsgData(*(_QWORD *)(v1 + 24), 5LL);
    Win32FreePool(v1, v3, v4);
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
