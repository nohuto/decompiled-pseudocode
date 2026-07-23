/*
 * XREFs of EtwpWriteBufferCompressed @ 0x1800F4C9C
 * Callers:
 *     EtwpFlushBuffer @ 0x18005C0F4 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBuffer @ 0x180065930 (RtlCompressBuffer.c)
 *     NtWriteFile @ 0x1800A51C0 (NtWriteFile.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  ULONG v5; // eax
  __int64 v7; // r10
  ULONG CompressedBufferSize; // r11d
  NTSTATUS v11; // eax
  unsigned __int32 v12; // ebp
  ULONG v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  ULONG v17; // ecx
  ULONG v18; // eax
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  char *v25; // rcx
  size_t v26; // r8
  char *v27; // rdx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG FinalCompressedSize; // [rsp+80h] [rbp+8h] BYREF

  *a4 = 0;
  v5 = *(_DWORD *)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 460);
  *a3 = 0;
  CompressedBufferSize = *(_DWORD *)(a1 + 456) - v7 - 72;
  if ( CompressedBufferSize >= v5 )
    CompressedBufferSize = v5;
  v11 = RtlCompressBuffer(
          3u,
          (PUCHAR)a2 + 72,
          *((_DWORD *)a2 + 12) - 72,
          (PUCHAR)(v7 + *(_QWORD *)(a1 + 448) + 72LL),
          CompressedBufferSize,
          0,
          &FinalCompressedSize,
          *(PVOID *)(a1 + 440));
  v12 = v11;
  if ( v11 == -1073741789 )
  {
    v13 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 448) + *(unsigned int *)(a1 + 460)), a2, v13);
  }
  else
  {
    if ( v11 < 0 )
    {
      *a4 = 1;
      return v12;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v14 = *(unsigned int *)(a1 + 460);
    v15 = *(_QWORD *)(a1 + 448);
    *(_OWORD *)(v14 + v15) = *a2;
    *(_OWORD *)(v14 + v15 + 16) = a2[1];
    *(_OWORD *)(v14 + v15 + 32) = a2[2];
    *(_OWORD *)(v14 + v15 + 48) = a2[3];
    *(_QWORD *)(v14 + v15 + 64) = *((_QWORD *)a2 + 8);
    v13 = FinalCompressedSize + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 460) + *(_QWORD *)(a1 + 448)) = v13;
  v16 = *(_DWORD *)(a1 + 460);
  ++*(_DWORD *)(a1 + 464);
  v17 = v13 + v16;
  *(_DWORD *)(a1 + 460) = v17;
  v18 = *(_DWORD *)(a1 + 208);
  if ( v17 >= v18 )
  {
    v12 = NtWriteFile(
            *(HANDLE *)(a1 + 144),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 448),
            v18,
            (PLARGE_INTEGER)(a1 + 368),
            0LL);
    if ( (v12 & 0x80000000) == 0 )
    {
      v22 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 368) += v22;
      v23 = *(_DWORD *)(a1 + 460) - v22;
      v24 = *(_DWORD *)(a1 + 464);
      *(_DWORD *)(a1 + 460) = v23;
      *(_DWORD *)(a1 + 468) = v23;
      if ( v23 )
      {
        v25 = *(char **)(a1 + 448);
        v26 = v23;
        *(_DWORD *)(a1 + 464) = 1;
        v27 = &v25[*(unsigned int *)(a1 + 208)];
        *a3 = v24 - 1;
        memmove(v25, v27, v26);
        return v12;
      }
      *a3 = v24;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 468);
      v20 = v19 == 0;
      *(_DWORD *)(a1 + 460) = v19;
      v21 = *(_DWORD *)(a1 + 464);
      if ( !v20 )
      {
        *(_DWORD *)(a1 + 464) = 1;
        *a4 = v21 - 1;
        return v12;
      }
      *a4 = v21;
    }
    *(_DWORD *)(a1 + 464) = 0;
  }
  return v12;
}
