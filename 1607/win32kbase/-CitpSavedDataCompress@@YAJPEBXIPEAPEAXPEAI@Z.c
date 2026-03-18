/*
 * XREFs of ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C00F6EC0
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSavedDataCompress(void *Src, size_t Size, UCHAR **a3, unsigned int *a4)
{
  size_t CompressedBufferSize; // rdi
  void *WorkSpace; // rsi
  NTSTATUS CompressionWorkSpaceSize; // eax
  const char *v10; // rdx
  unsigned int v11; // ebx
  int v12; // r8d
  __int64 v13; // rcx
  ULONG v14; // eax
  const char *v15; // rdx
  UCHAR *v16; // rbx
  ULONG v17; // eax
  unsigned int v18; // eax
  ULONG FinalCompressedSize; // [rsp+40h] [rbp-28h] BYREF
  ULONG v21; // [rsp+44h] [rbp-24h] BYREF
  ULONG v22; // [rsp+48h] [rbp-20h] BYREF

  CompressedBufferSize = (unsigned int)Size;
  WorkSpace = 0LL;
  CompressionWorkSpaceSize = RtlGetCompressionWorkSpaceSize(2u, &v22, &v21);
  v11 = CompressionWorkSpaceSize;
  if ( CompressionWorkSpaceSize < 0 )
  {
    v12 = 5114;
    v13 = (unsigned int)CompressionWorkSpaceSize;
LABEL_3:
    CitpLogFailureWorker(v13, v10, v12);
    return v11;
  }
  v14 = v22;
  if ( v22 <= v21 )
    v14 = v21;
  v22 = v14;
  if ( v14 )
  {
    WorkSpace = (void *)Win32AllocPool();
    if ( !WorkSpace )
    {
      v13 = 3221225626LL;
      v12 = 5125;
      v11 = -1073741670;
      goto LABEL_3;
    }
  }
  v16 = (UCHAR *)Win32AllocPool();
  if ( v16 )
  {
    if ( RtlCompressBuffer(
           2u,
           (PUCHAR)Src,
           CompressedBufferSize,
           v16 + 8,
           CompressedBufferSize,
           0x1000u,
           &FinalCompressedSize,
           WorkSpace) < 0
      || (v17 = FinalCompressedSize, FinalCompressedSize > (unsigned int)CompressedBufferSize) )
    {
      FinalCompressedSize = CompressedBufferSize;
      memmove(v16 + 8, Src, CompressedBufferSize);
      v17 = FinalCompressedSize;
    }
    v18 = v17 + 8;
    *((_DWORD *)v16 + 1) = CompressedBufferSize;
    *(_DWORD *)v16 = v18;
    *a3 = v16;
    v11 = 0;
    *a4 = v18;
  }
  else
  {
    v11 = -1073741670;
    CitpLogFailureWorker(3221225626LL, v15, 5139);
  }
  if ( WorkSpace )
    Win32FreePool();
  return v11;
}
