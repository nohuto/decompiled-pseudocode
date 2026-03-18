/*
 * XREFs of ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9AE4
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C004BE40 (xxxCleanupThreadPointerInputInfo.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F9CB4 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall UnlinkAndFreeThreadPointerData(struct tagTHREADINPUTPOINTERLIST *a1, struct tagTHREADPOINTERDATA *a2)
{
  __int64 v4; // rdx
  struct tagTHREADPOINTERDATA **v5; // rax

  v4 = *(_QWORD *)a2;
  v5 = (struct tagTHREADPOINTERDATA **)*((_QWORD *)a2 + 1);
  if ( *(struct tagTHREADPOINTERDATA **)(v4 + 8) != a2 || *v5 != a2 )
    __fastfail(3u);
  *v5 = (struct tagTHREADPOINTERDATA *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  PointerList::UnreferenceMsgData(*((_QWORD *)a2 + 3), 4LL);
  Win32FreePool(a2);
  --*((_DWORD *)a1 + 4);
}
