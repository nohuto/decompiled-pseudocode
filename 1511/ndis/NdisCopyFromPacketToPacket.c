/*
 * XREFs of NdisCopyFromPacketToPacket @ 0x1C004BB00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

void __stdcall NdisCopyFromPacketToPacket(
        PNDIS_PACKET Destination,
        UINT DestinationOffset,
        UINT BytesToCopy,
        PNDIS_PACKET Source,
        UINT SourceOffset,
        PUINT BytesCopied)
{
  UINT v7; // edi
  _MDL *Head; // rsi
  char *v10; // rbx
  _MDL *v11; // r14
  UINT ByteCount; // r15d
  char *MappedSystemVa; // rcx
  UINT v14; // ebp
  UINT v16; // eax
  char *v17; // rax
  char *v18; // rax
  UINT v19; // eax
  UINT v20; // edi
  unsigned int v21; // [rsp+20h] [rbp-48h]
  char *v22; // [rsp+28h] [rbp-40h]
  char *v23; // [rsp+30h] [rbp-38h]

  v21 = 0;
  v7 = BytesToCopy;
  *BytesCopied = 0;
  if ( BytesToCopy )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      v10 = (char *)((Head->MdlFlags & 5) != 0 ? Head->MappedSystemVa : MmMapLockedPages(Destination->Private.Head, 0));
      v11 = Source->Private.Head;
      ByteCount = Head->ByteCount;
      v23 = v10;
      if ( v11 )
      {
        if ( (v11->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)v11->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPages(v11, 0);
        v14 = v11->ByteCount;
        v22 = MappedSystemVa;
        if ( v7 )
        {
          v16 = 0;
          while ( ByteCount )
          {
            if ( !v14 )
            {
              v11 = v11->Next;
              if ( !v11 )
                goto LABEL_40;
              if ( (v11->MdlFlags & 5) != 0 )
                v18 = (char *)v11->MappedSystemVa;
              else
                v18 = (char *)MmMapLockedPages(v11, 0);
              v14 = v11->ByteCount;
              v22 = v18;
              goto LABEL_18;
            }
            if ( DestinationOffset )
            {
              if ( DestinationOffset > ByteCount )
              {
                DestinationOffset -= ByteCount;
                ByteCount = 0;
                goto LABEL_39;
              }
              ByteCount -= DestinationOffset;
              v23 = &v10[DestinationOffset];
              DestinationOffset = 0;
            }
            if ( !SourceOffset )
              goto LABEL_34;
            if ( SourceOffset <= v14 )
            {
              v14 -= SourceOffset;
              MappedSystemVa += SourceOffset;
              v22 = MappedSystemVa;
              SourceOffset = 0;
LABEL_34:
              v19 = v7 - v21;
              v20 = ByteCount;
              if ( v14 <= ByteCount )
                v20 = v14;
              if ( v19 < v20 )
                v20 = v19;
              memmove(v23, MappedSystemVa, v20);
              v14 -= v20;
              MappedSystemVa = &v22[v20];
              v23 += v20;
              v16 = v20 + v21;
              ByteCount -= v20;
              v22 = MappedSystemVa;
              v7 = BytesToCopy;
              v21 = v16;
              goto LABEL_39;
            }
            SourceOffset -= v14;
            v14 = 0;
LABEL_19:
            v16 = v21;
LABEL_39:
            v10 = v23;
            if ( v16 >= v7 )
              goto LABEL_40;
          }
          Head = Head->Next;
          if ( !Head )
            goto LABEL_40;
          if ( (Head->MdlFlags & 5) != 0 )
            v17 = (char *)Head->MappedSystemVa;
          else
            v17 = (char *)MmMapLockedPages(Head, 0);
          ByteCount = Head->ByteCount;
          v23 = v17;
LABEL_18:
          MappedSystemVa = v22;
          goto LABEL_19;
        }
LABEL_40:
        *BytesCopied = v21;
      }
    }
  }
}
