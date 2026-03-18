/*
 * XREFs of ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01C0CC0
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0840 (-DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01C2464 (UnreferenceUndispatchedFrame.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0C28 (-FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall PointerFrameList::FreePointerInfoNode(PointerFrameList *this, unsigned int a2)
{
  struct tagPOINTERINPUTFRAME *v2; // rax
  __int64 v3; // r9
  struct tagPOINTERINPUTFRAME *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax

  v2 = FindAndReferenceFrameById(a2);
  v4 = v2;
  if ( v2 )
  {
    v5 = 216 * v3;
    v6 = 216 * v3 + *((_QWORD *)v2 + 11);
    if ( *(_DWORD *)(v6 + 124) > 1u )
      FreeHistory((struct _LIST_ENTRY **)v2, (const struct tagPOINTERINFONODE *)v6);
    v7 = *((_QWORD *)v4 + 11);
    *(_DWORD *)(v5 + v7) |= 0x2000u;
    *(_QWORD *)(v5 + v7 + 16) = 0LL;
    ++*((_DWORD *)v4 + 11);
    UnreferenceFrameInt(v4);
  }
}
