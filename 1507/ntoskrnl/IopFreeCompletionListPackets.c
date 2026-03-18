/*
 * XREFs of IopFreeCompletionListPackets @ 0x14052B640
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1401127F4 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140112C68 (IopFreeWaitCompletionPacket.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1404BE310 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(PSLIST_ENTRY ListEntry, void *a2)
{
  PSLIST_ENTRY v3; // rbx
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx

  if ( ListEntry )
  {
    v3 = ListEntry;
    do
    {
      v4 = (__int64)v3;
      v3 = v3->Next;
      v5 = *(_BYTE *)(v4 + 16);
      if ( v5 )
      {
        if ( v5 == 2 )
          IopFreeWaitCompletionPacket(v4, a2);
        else
          IopFreeMiniCompletionPacket((PSLIST_ENTRY)v4);
      }
      else
      {
        v6 = v4 - 168;
        if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
          IopDropIrp(v6, *(_QWORD *)(v6 + 192));
        else
          IoFreeIrp((PIRP)v6);
      }
    }
    while ( v3 );
  }
}
