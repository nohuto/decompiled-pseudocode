/*
 * XREFs of UnreferenceUndispatchedFrame @ 0x1C01C2464
 * Callers:
 *     ?UnreferenceUndispatchedFrameList@@YAXXZ @ 0x1C010F810 (-UnreferenceUndispatchedFrameList@@YAXXZ.c)
 *     ?FreeEdgyData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C0131554 (-FreeEdgyData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01C0CC0 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01F3CA4 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall UnreferenceUndispatchedFrame(PointerFrameList *a1, unsigned __int64 a2, __int64 a3)
{
  char *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 CurrentProcess; // rax
  int v7; // ebp
  unsigned __int64 PrevMsgId; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  v3 = (char *)a1 - 16;
  v4 = 0;
  if ( *((_DWORD *)a1 + 6) )
  {
    do
    {
      v5 = *((_QWORD *)v3 + 11) + 216LL * v4;
      CurrentProcess = PsGetCurrentProcess(a1);
      if ( !(unsigned int)IsProcessDwm(CurrentProcess)
        || !(unsigned int)IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v5)
        && (*(_DWORD *)(v5 + 4) & 0x200) == 0 )
      {
        a3 = *(_QWORD *)(v5 + 16);
        if ( !a3
          || (a1 = (PointerFrameList *)*(unsigned int *)(*((_QWORD *)v3 + 12) + 40LL * *(unsigned int *)(v5 + 8) + 20),
              ((unsigned __int8)a1 & 4) != 0) )
        {
          if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v5) )
            PointerFrameList::FreePointerInfoNode(a1, *((_DWORD *)v3 + 8));
        }
        else
        {
          v7 = ((unsigned __int8)~*(_BYTE *)(v5 + 68) >> 1) & 1;
          a2 = *(_DWORD *)(v5 + 68) & 1;
          if ( !(_DWORD)a2 )
          {
            PrevMsgId = PointerList::GetPrevMsgId(*(PointerList **)(v5 + 16), a2);
            if ( PrevMsgId )
            {
              a1 = (PointerFrameList *)*(unsigned int *)(PrevMsgId + 36);
              if ( ((unsigned __int8)a1 & 0x20) != 0 )
                PointerList::UnreferenceMsgData(PrevMsgId, 1LL);
            }
          }
          if ( v7 )
            PointerList::UnreferenceMsgData(*(_QWORD *)(v5 + 16), 1LL);
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)v3 + 10) );
  }
  v9 = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v10 = *(_QWORD *)(grpdeskRitInput + 232LL);
    if ( v10 )
    {
      if ( *(char **)(v10 + 224) == v3 )
      {
        *(_QWORD *)(v10 + 224) = 0LL;
        v9 = grpdeskRitInput;
      }
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 232LL);
      if ( *(char **)(v11 + 232) == v3 )
        *(_QWORD *)(v11 + 232) = 0LL;
    }
  }
  return UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v3, a2, a3);
}
