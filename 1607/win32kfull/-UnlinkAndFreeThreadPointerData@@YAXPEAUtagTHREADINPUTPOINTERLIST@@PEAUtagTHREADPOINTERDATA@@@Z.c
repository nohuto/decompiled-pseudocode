/*
 * XREFs of ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F0D18
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0107DE0 (xxxCleanupThreadPointerInputInfo.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F0EB8 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall UnlinkAndFreeThreadPointerData(struct tagTHREADINPUTPOINTERLIST *a1, struct tagTHREADPOINTERDATA *a2)
{
  __int64 v4; // rdx
  struct tagTHREADPOINTERDATA **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  v4 = *(_QWORD *)a2;
  v5 = (struct tagTHREADPOINTERDATA **)*((_QWORD *)a2 + 1);
  if ( *(struct tagTHREADPOINTERDATA **)(v4 + 8) != a2 || *v5 != a2 )
    __fastfail(3u);
  *v5 = (struct tagTHREADPOINTERDATA *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  PointerList::UnreferenceMsgData(*((_QWORD *)a2 + 3), 4LL);
  Win32FreePool(a2, v6, v7);
  --*((_DWORD *)a1 + 4);
}
