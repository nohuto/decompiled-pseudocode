/*
 * XREFs of RaAllocateIoResource @ 0x1C0039688
 * Callers:
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C00077A0 (StorSubmitIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C00186EC (StorNextIoGatewayItem.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaAllocateIoResource(PSLIST_HEADER ListHead)
{
  int Alignment; // ecx
  PSLIST_ENTRY result; // rax
  __int64 v4; // rax
  int v5; // edi
  unsigned int v6; // ecx
  int v7; // esi

  Alignment = ListHead[4].Alignment;
  if ( !Alignment )
    return ExpInterlockedPopEntrySList(ListHead);
  v4 = (unsigned int)(Alignment * HIDWORD(KeGetPcr()[1].LockArray)) / *((_DWORD *)&ListHead[4].HeaderX64 + 1);
  v5 = v4;
  result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(ListHead->Alignment + 8 * v4));
  if ( !result )
  {
    v6 = ListHead[4].Alignment;
    v7 = 1;
    if ( v6 <= 1 )
      return result;
    while ( !result )
    {
      result = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(ListHead->Alignment + 8LL * ((v7 + v5) % v6)));
      v6 = ListHead[4].Alignment;
      if ( ++v7 >= v6 )
      {
        if ( !result )
          return result;
        break;
      }
    }
  }
  LODWORD(result->Next) = v5;
  return result;
}
