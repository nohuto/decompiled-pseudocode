/*
 * XREFs of RtlDecompressChunks @ 0x140685C68
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlDecompressBuffer @ 0x1402110A8 (RtlDecompressBuffer.c)
 */

NTSTATUS __stdcall RtlDecompressChunks(
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PUCHAR CompressedTail,
        ULONG CompressedTailSize,
        PCOMPRESSED_DATA_INFO CompressedDataInfo)
{
  PUCHAR v7; // rsi
  __int64 v8; // r12
  int NumberOfChunks; // ebx
  UCHAR *v12; // r13
  unsigned int v13; // edx
  NTSTATUS result; // eax
  ULONG *CompressedChunkSizes; // r14
  __int64 v16; // rdi
  ULONG v17; // eax
  __int64 v18; // rbx
  PUCHAR v19; // rbx
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+30h] [rbp-48h]
  ULONG FinalUncompressedSize; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h]

  v7 = UncompressedBuffer;
  v8 = UncompressedBufferSize;
  NumberOfChunks = CompressedDataInfo->NumberOfChunks;
  v12 = &UncompressedBuffer[UncompressedBufferSize];
  v13 = 1 << CompressedDataInfo->ChunkShift;
  v25 = NumberOfChunks;
  v23 = v13;
  if ( &v7[v8] < v7 )
    return -1073741811;
  CompressedChunkSizes = CompressedDataInfo->CompressedChunkSizes;
  while ( 1 )
  {
    v16 = (unsigned int)v8;
    if ( (unsigned int)v8 >= v13 )
      v16 = v13;
    if ( !NumberOfChunks || (v17 = *CompressedChunkSizes) == 0 )
    {
      if ( &v7[v16] > v12 )
        return -1073741246;
      memset(v7, 0, (unsigned int)v16);
      if ( !NumberOfChunks )
      {
        NumberOfChunks = 1;
        --CompressedChunkSizes;
      }
      goto LABEL_28;
    }
    if ( v17 != v13 )
      break;
    if ( (unsigned int)v16 < CompressedBufferSize )
    {
      memmove(v7, CompressedBuffer, (unsigned int)v16);
    }
    else
    {
      if ( !CompressedTailSize && (unsigned int)v16 > CompressedBufferSize )
        return -1073741246;
      v18 = CompressedBufferSize;
      memmove(v7, CompressedBuffer, CompressedBufferSize);
      memmove(&v7[CompressedBufferSize], CompressedTail, (unsigned int)v16 - CompressedBufferSize);
      CompressedBufferSize += CompressedTailSize;
      CompressedBuffer = &CompressedTail[-v18];
      CompressedTailSize = 0;
      NumberOfChunks = v25;
    }
LABEL_28:
    v7 += (unsigned int)v16;
    if ( v7 > v12 || (unsigned int)v16 > (unsigned int)v8 )
      return -1073741246;
    v22 = *CompressedChunkSizes;
    --NumberOfChunks;
    CompressedBuffer += v22;
    v25 = NumberOfChunks;
    CompressedBufferSize -= v22;
    ++CompressedChunkSizes;
    LODWORD(v8) = v8 - v16;
    if ( !(_DWORD)v8 )
      return 0;
    v13 = v23;
  }
  if ( v17 <= CompressedBufferSize )
  {
LABEL_20:
    result = RtlDecompressBuffer(
               CompressedDataInfo->CompressionFormatAndEngine,
               v7,
               v16,
               CompressedBuffer,
               *CompressedChunkSizes,
               &FinalUncompressedSize);
    if ( result < 0 )
      return result;
    if ( (unsigned int)v16 > FinalUncompressedSize )
      memset(&v7[FinalUncompressedSize], 0, (unsigned int)v16 - FinalUncompressedSize);
    if ( *CompressedChunkSizes >= CompressedBufferSize )
    {
      v21 = CompressedBufferSize;
      CompressedBufferSize += CompressedTailSize;
      CompressedBuffer = &CompressedTail[-v21];
      CompressedTailSize = 0;
    }
    goto LABEL_28;
  }
  if ( CompressedTailSize )
  {
    v19 = &v7[(unsigned int)v8 - (unsigned __int64)v13];
    v20 = (char *)&v19[CompressedBufferSize];
    if ( v20 < (char *)v19 )
      return -1073741811;
    if ( v19 >= v7 && v20 <= (char *)v12 )
    {
      memmove(v19, CompressedBuffer, CompressedBufferSize);
      memmove(&v19[CompressedBufferSize], CompressedTail, *CompressedChunkSizes - CompressedBufferSize);
      CompressedBuffer = v19;
      NumberOfChunks = v25;
      goto LABEL_20;
    }
  }
  return -1073741246;
}
