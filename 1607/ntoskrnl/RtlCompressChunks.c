/*
 * XREFs of RtlCompressChunks @ 0x140685B0C
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBuffer @ 0x140080D40 (RtlCompressBuffer.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __stdcall RtlCompressChunks(
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PCOMPRESSED_DATA_INFO CompressedDataInfo,
        ULONG CompressedDataInfoLength,
        PVOID WorkSpace)
{
  PCOMPRESSED_DATA_INFO v7; // r12
  ULONG v8; // ebp
  UCHAR *v10; // rdx
  COMPRESSED_DATA_INFO *CompressedChunkSizes; // r13
  ULONG UncompressedChunkSize; // esi
  ULONG v14; // r14d
  NTSTATUS v15; // ebx
  __int64 v16; // rdi
  NTSTATUS v17; // eax
  ULONG v18; // ecx
  PUCHAR Src; // [rsp+80h] [rbp+8h]
  ULONG FinalCompressedSize; // [rsp+88h] [rbp+10h] BYREF

  Src = UncompressedBuffer;
  v7 = CompressedDataInfo;
  v8 = UncompressedBufferSize;
  v10 = UncompressedBuffer;
  CompressedChunkSizes = (COMPRESSED_DATA_INFO *)CompressedDataInfo->CompressedChunkSizes;
  UncompressedChunkSize = 1 << CompressedDataInfo->ChunkShift;
  v14 = v8 - (UncompressedBufferSize >> 4);
  v15 = 0;
  CompressedDataInfo = (PCOMPRESSED_DATA_INFO)((char *)CompressedDataInfo + 8);
  v7->NumberOfChunks = 0;
  while ( 1 )
  {
    v16 = v8;
    if ( v8 >= UncompressedChunkSize )
      v16 = UncompressedChunkSize;
    v17 = RtlCompressBuffer(
            v7->CompressionFormatAndEngine,
            v10,
            v16,
            CompressedBuffer,
            v14,
            UncompressedChunkSize,
            &FinalCompressedSize,
            WorkSpace);
    if ( v17 == 279 )
    {
      v18 = 0;
      FinalCompressedSize = 0;
    }
    else if ( v17 >= 0 )
    {
      v18 = FinalCompressedSize;
    }
    else
    {
      if ( v14 < UncompressedChunkSize )
        return -1073741789;
      memmove(CompressedBuffer, Src, (unsigned int)v16);
      if ( UncompressedChunkSize > (unsigned int)v16 )
        memset(&CompressedBuffer[v16], 0, UncompressedChunkSize - (unsigned int)v16);
      CompressedChunkSizes = CompressedDataInfo;
      v18 = UncompressedChunkSize;
      FinalCompressedSize = UncompressedChunkSize;
    }
    *(_DWORD *)&CompressedChunkSizes->CompressionFormatAndEngine = v18;
    CompressedChunkSizes = (COMPRESSED_DATA_INFO *)((char *)CompressedChunkSizes + 4);
    ++v7->NumberOfChunks;
    v10 = &Src[(unsigned int)v16];
    CompressedDataInfo = CompressedChunkSizes;
    Src = v10;
    if ( (unsigned int)v16 > v8 )
      break;
    v14 -= v18;
    CompressedBuffer += v18;
    v8 -= v16;
    if ( !v8 )
      return v15;
  }
  return -1073741246;
}
