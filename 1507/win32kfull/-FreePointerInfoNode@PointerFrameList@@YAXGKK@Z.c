/*
 * XREFs of ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C022F4EC
 * Callers:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C022F454 (-FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
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
    v6 = 216 * v3 + *((_QWORD *)v2 + 9);
    if ( *(_DWORD *)(v6 + 124) > 1u )
      FreeHistory((struct _LIST_ENTRY **)v2, (const struct tagPOINTERINFONODE *)v6);
    v7 = *((_QWORD *)v4 + 9);
    *(_DWORD *)(v5 + v7) |= 0x1000u;
    *(_QWORD *)(v5 + v7 + 16) = 0LL;
    ++*((_DWORD *)v4 + 7);
    UnreferenceFrameInt(v4);
  }
}
