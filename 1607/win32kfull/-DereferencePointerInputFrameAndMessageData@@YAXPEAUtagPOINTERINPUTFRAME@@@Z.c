/*
 * XREFs of ?DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0840
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01C0CC0 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01F3CA4 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall DereferencePointerInputFrameAndMessageData(struct tagPOINTERINPUTFRAME *a1)
{
  const struct tagPOINTERINFONODE *v1; // rdi
  unsigned int v2; // ebp
  struct tagPOINTERINPUTFRAME *v3; // rbx
  _BYTE *v4; // rsi
  __int64 CurrentProcess; // rax
  int v6; // r14d
  unsigned __int64 v7; // rdx
  unsigned __int64 PrevMsgId; // rax
  unsigned int v9; // r9d

  v1 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a1 + 11);
  v2 = 0;
  v3 = a1;
  if ( *((_DWORD *)a1 + 10) )
  {
    v4 = (char *)v1 + 68;
    do
    {
      if ( (*((_DWORD *)v3 + 18) & 1) != 0 )
      {
        if ( (*(_DWORD *)v1 & 0x2000) == 0 )
        {
          a1 = (struct tagPOINTERINPUTFRAME *)(*((_QWORD *)v3 + 11) + 216LL * v2);
          *(_DWORD *)a1 |= 0x2000u;
          *((_QWORD *)a1 + 2) = 0LL;
          ++*((_DWORD *)v3 + 11);
        }
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess(a1);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess)
          || !(unsigned int)IsManipulationThreadNode(v1) && (*((_DWORD *)v4 - 16) & 0x200) == 0 )
        {
          if ( !*(_QWORD *)(v4 - 52)
            || (a1 = (struct tagPOINTERINPUTFRAME *)*(unsigned int *)(*((_QWORD *)v3 + 12)
                                                                    + 40LL * *((unsigned int *)v4 - 15)
                                                                    + 20),
                ((unsigned __int8)a1 & 4) != 0) )
          {
            if ( (unsigned int)IsPointerInfoNodeValid(v1) )
              PointerFrameList::FreePointerInfoNode(a1, *((_DWORD *)v3 + 8), v2, v9);
          }
          else
          {
            v6 = ((unsigned __int8)~*v4 >> 1) & 1;
            v7 = *(_DWORD *)v4 & 1;
            if ( !(_DWORD)v7 )
            {
              PrevMsgId = PointerList::GetPrevMsgId(*(PointerList **)(v4 - 52), v7);
              if ( PrevMsgId )
              {
                a1 = (struct tagPOINTERINPUTFRAME *)*(unsigned int *)(PrevMsgId + 36);
                if ( ((unsigned __int8)a1 & 0x20) != 0 )
                  PointerList::UnreferenceMsgData(PrevMsgId, 1LL);
              }
            }
            if ( v6 )
              PointerList::UnreferenceMsgData(*(_QWORD *)(v4 - 52), 1LL);
          }
        }
      }
      ++v2;
      v1 = (const struct tagPOINTERINFONODE *)((char *)v1 + 216);
      v4 += 216;
    }
    while ( v2 < *((_DWORD *)v3 + 10) );
  }
  UnreferenceFrameInt(v3);
}
