/*
 * XREFs of NdisUnchainBufferAtBack @ 0x1C0050BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisUnchainBufferAtBack(PNDIS_PACKET Packet, PNDIS_BUFFER *Buffer)
{
  _MDL *Head; // rax
  _MDL *Tail; // r8

  Head = Packet->Private.Head;
  if ( Head )
  {
    Tail = Packet->Private.Tail;
    if ( Head == Tail )
    {
      Packet->Private.Head = 0LL;
    }
    else
    {
      while ( Head->Next != Tail )
        Head = Head->Next;
      Packet->Private.Tail = Head;
      Head->Next = 0LL;
    }
    Tail->Next = 0LL;
    Packet->Private.ValidCounts = 0;
  }
  else
  {
    Tail = 0LL;
  }
  *Buffer = Tail;
}
