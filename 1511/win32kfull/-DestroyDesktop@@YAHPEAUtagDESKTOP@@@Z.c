/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0111A00
 * Callers:
 *     UnmapDesktop @ 0x1C00CF6E0 (UnmapDesktop.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C0065710 (_PostThreadMessage.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01FCA04 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C022FA8C (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall DestroyDesktop(struct tagDESKTOP *a1, unsigned __int64 a2, struct _LIST_ENTRY *a3)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rcx
  PointerFrameList *v11; // rbp
  PointerList *v12; // rcx
  unsigned __int64 PrevMsgId; // rax
  __int64 v14; // rcx
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  struct tagPOINTERINPUTFRAME *v16; // rcx

  v4 = *((_QWORD *)a1 + 3);
  if ( (*((_DWORD *)a1 + 8) & 8) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 29);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 16) == 1 )
    {
      v11 = *(PointerFrameList **)(v5 + 224);
      v12 = *(PointerList **)(*((_QWORD *)v11 + 9) + 16LL);
      if ( v12 )
      {
        PrevMsgId = PointerList::GetPrevMsgId(v12, a2);
        if ( PrevMsgId )
        {
          if ( (*(_DWORD *)(PrevMsgId + 36) & 0x20) != 0 )
            PointerList::UnreferenceMsgData(PrevMsgId, 1LL);
        }
      }
      if ( v11 != *(PointerFrameList **)(v5 + 232) )
      {
        do
        {
          v14 = *(_QWORD *)(*((_QWORD *)v11 + 9) + 16LL);
          if ( v14 )
            PointerList::UnreferenceMsgData(v14, 1LL);
          NextFrame = PointerFrameList::GetNextFrame(v11, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, a3);
          UnreferenceFrameInt(v16);
          v11 = NextFrame;
        }
        while ( NextFrame != *(const struct tagPOINTERINPUTFRAME **)(v5 + 232) );
      }
      UnreferenceFrameInt(*(struct tagPOINTERINPUTFRAME **)(v5 + 232));
    }
    v10 = *(_QWORD *)(v5 + 8);
    if ( v10 )
    {
      Win32FreePool(v10);
      *(_QWORD *)(v5 + 8) = 0LL;
    }
    Win32FreePool(v5);
    *((_QWORD *)a1 + 29) = 0LL;
  }
  v6 = (_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 16);
  if ( v7 )
  {
    do
    {
      if ( (struct tagDESKTOP *)v7 == a1 )
        break;
      v6 = (_QWORD *)(v7 + 16);
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v7 );
    if ( *v6 )
    {
      LockObjectAssignment(v6, *((_QWORD *)a1 + 2));
      UnlockObjectAssignment((char *)a1 + 16);
    }
  }
  v8 = *(_QWORD *)(v4 + 24);
  LockObjectAssignment((char *)a1 + 16, *(_QWORD *)(v8 + 48));
  LockObjectAssignment(v8 + 48, a1);
  PostThreadMessage(*(_QWORD *)(v8 + 16), 0x31Cu, 2uLL, 0LL);
  *((_DWORD *)a1 + 8) |= 8u;
  return 1LL;
}
