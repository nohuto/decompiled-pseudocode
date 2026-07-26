/*
 * XREFs of NdisAllocateNetBuffer @ 0x1C000BB40
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000BDF0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0014630 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ndisPplAllocate @ 0x1C000BC30 (ndisPplAllocate.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBuffer(NDIS_HANDLE PoolHandle, PMDL MdlChain, ULONG DataOffset, SIZE_T DataLength)
{
  unsigned int v4; // r15d
  struct _NET_BUFFER *v8; // rbx
  __int64 v9; // rax
  ULONG v10; // ecx
  PMDL i; // rax
  ULONG ByteCount; // edx
  __int64 v14; // [rsp+70h] [rbp+70h] BYREF

  v4 = DataLength;
  v8 = 0LL;
  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 22) & 1) != 0 )
    {
      DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", PoolHandle);
    }
    else
    {
      v9 = ndisPplAllocate(PoolHandle, MdlChain, (unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFC0uLL);
      v8 = (struct _NET_BUFFER *)v9;
      if ( v9 )
      {
        *(_QWORD *)v9 = 0LL;
        v10 = DataOffset;
        *(_QWORD *)(v9 + 56) = PoolHandle;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 32) = 0LL;
        *(_DWORD *)(v9 + 40) = 0;
        *(_DWORD *)(v9 + 24) = 0;
        *(_DWORD *)(v9 + 48) = 0;
        *(_QWORD *)(v9 + 72) = 0LL;
        *(_QWORD *)(v9 + 64) = 0LL;
        *(_QWORD *)(v9 + 136) = 0LL;
        *(_QWORD *)(v9 + 128) = 0LL;
        *(_QWORD *)(v9 + 168) = 0LL;
        for ( i = MdlChain; i; v10 -= ByteCount )
        {
          ByteCount = i->ByteCount;
          if ( v10 < ByteCount )
            break;
          i = i->Next;
        }
        v8->MdlChain = MdlChain;
        v8->DataOffset = DataOffset;
        v8->DataLength = v4;
        v8->Link.Region = (unsigned __int64)i;
        v8->CurrentMdlOffset = v10;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v8;
}
