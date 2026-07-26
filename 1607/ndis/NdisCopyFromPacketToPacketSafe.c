/*
 * XREFs of NdisCopyFromPacketToPacketSafe @ 0x1C0050680
 * Callers:
 *     ndisMTransferData @ 0x1C00568C0 (ndisMTransferData.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 */

void __stdcall NdisCopyFromPacketToPacketSafe(
        PNDIS_PACKET Destination,
        UINT DestinationOffset,
        UINT BytesToCopy,
        PNDIS_PACKET Source,
        UINT SourceOffset,
        PUINT BytesCopied,
        MM_PAGE_PRIORITY Priority)
{
  UINT v8; // edi
  UINT v9; // ebx
  _MDL *Head; // rsi
  char *v11; // r13
  _MDL *v12; // r14
  ULONG ByteCount; // r15d
  char *v14; // r12
  UINT v15; // ebp
  UINT v16; // eax
  UINT v17; // eax
  UINT v18; // edi
  unsigned int v19; // [rsp+30h] [rbp-48h]
  UINT v20; // [rsp+88h] [rbp+10h]

  v20 = DestinationOffset;
  v19 = 0;
  v8 = BytesToCopy;
  v9 = DestinationOffset;
  *BytesCopied = 0;
  if ( BytesToCopy )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      v11 = (char *)((Head->MdlFlags & 5) != 0
                   ? Head->MappedSystemVa
                   : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, Priority | ndisMdlMappingNxFlag));
      if ( v11 )
      {
        v12 = Source->Private.Head;
        ByteCount = Head->ByteCount;
        if ( v12 )
        {
          v14 = (char *)((v12->MdlFlags & 5) != 0
                       ? v12->MappedSystemVa
                       : MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, Priority | ndisMdlMappingNxFlag));
          if ( v14 )
          {
            v15 = v12->ByteCount;
            if ( v8 )
            {
              v16 = 0;
              do
              {
                if ( ByteCount )
                {
                  if ( v15 )
                  {
                    if ( v9 )
                    {
                      if ( v9 > ByteCount )
                      {
                        v20 = v9 - ByteCount;
                        ByteCount = 0;
                        goto LABEL_42;
                      }
                      ByteCount -= v9;
                      v11 += v9;
                      v20 = 0;
                    }
                    if ( !SourceOffset )
                      goto LABEL_37;
                    if ( SourceOffset <= v15 )
                    {
                      v14 += SourceOffset;
                      v15 -= SourceOffset;
                      SourceOffset = 0;
LABEL_37:
                      v17 = v8 - v19;
                      v18 = ByteCount;
                      if ( v15 <= ByteCount )
                        v18 = v15;
                      if ( v17 < v18 )
                        v18 = v17;
                      memmove(v11, v14, v18);
                      v15 -= v18;
                      v16 = v18 + v19;
                      v11 += v18;
                      v14 += v18;
                      v19 += v18;
                      ByteCount -= v18;
                      v8 = BytesToCopy;
                      goto LABEL_42;
                    }
                    SourceOffset -= v15;
                    v15 = 0;
                  }
                  else
                  {
                    v12 = v12->Next;
                    if ( !v12 )
                      break;
                    v14 = (char *)((v12->MdlFlags & 5) != 0
                                 ? v12->MappedSystemVa
                                 : MmMapLockedPagesSpecifyCache(
                                     v12,
                                     0,
                                     MmCached,
                                     0LL,
                                     0,
                                     Priority | ndisMdlMappingNxFlag));
                    if ( !v14 )
                      break;
                    v15 = v12->ByteCount;
                  }
                }
                else
                {
                  Head = Head->Next;
                  if ( !Head )
                    break;
                  v11 = (char *)((Head->MdlFlags & 5) != 0
                               ? Head->MappedSystemVa
                               : MmMapLockedPagesSpecifyCache(
                                   Head,
                                   0,
                                   MmCached,
                                   0LL,
                                   0,
                                   Priority | ndisMdlMappingNxFlag));
                  if ( !v11 )
                    break;
                  ByteCount = Head->ByteCount;
                }
                v16 = v19;
LABEL_42:
                v9 = v20;
              }
              while ( v16 < v8 );
            }
            *BytesCopied = v19;
          }
        }
      }
    }
  }
}
