/*
 * XREFs of EtwpWriteBufferCompressed @ 0x1800F52A0
 * Callers:
 *     EtwpFlushBuffer @ 0x180009AB4 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBuffer @ 0x18005B470 (RtlCompressBuffer.c)
 *     NtWriteFile @ 0x180093980 (NtWriteFile.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v5; // eax
  __int64 v7; // r10
  unsigned int v10; // r11d
  int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // eax
  char *v24; // rcx
  size_t v25; // r8
  char *v26; // rdx
  int v28; // [rsp+80h] [rbp+8h] BYREF

  *a4 = 0;
  v5 = *(_DWORD *)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 460);
  *a3 = 0;
  v10 = *(_DWORD *)(a1 + 456) - v7 - 72;
  if ( v10 >= v5 )
    v10 = v5;
  v11 = RtlCompressBuffer(
          3u,
          (__int64)a2 + 72,
          *((_DWORD *)a2 + 12) - 72,
          v7 + *(_QWORD *)(a1 + 448) + 72LL,
          v10,
          0,
          (__int64)&v28,
          *(_QWORD *)(a1 + 440));
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
    v13 = v28 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 460) + *(_QWORD *)(a1 + 448)) = v13;
  v16 = *(_DWORD *)(a1 + 460);
  ++*(_DWORD *)(a1 + 464);
  v17 = v13 + v16;
  *(_DWORD *)(a1 + 460) = v17;
  if ( v17 >= *(_DWORD *)(a1 + 208) )
  {
    v12 = NtWriteFile();
    if ( (v12 & 0x80000000) == 0 )
    {
      v21 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 368) += v21;
      v22 = *(_DWORD *)(a1 + 460) - v21;
      v23 = *(_DWORD *)(a1 + 464);
      *(_DWORD *)(a1 + 460) = v22;
      *(_DWORD *)(a1 + 468) = v22;
      if ( v22 )
      {
        v24 = *(char **)(a1 + 448);
        v25 = v22;
        *(_DWORD *)(a1 + 464) = 1;
        v26 = &v24[*(unsigned int *)(a1 + 208)];
        *a3 = v23 - 1;
        memmove(v24, v26, v25);
        return v12;
      }
      *a3 = v23;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 468);
      v19 = v18 == 0;
      *(_DWORD *)(a1 + 460) = v18;
      v20 = *(_DWORD *)(a1 + 464);
      if ( !v19 )
      {
        *(_DWORD *)(a1 + 464) = 1;
        *a4 = v20 - 1;
        return v12;
      }
      *a4 = v20;
    }
    *(_DWORD *)(a1 + 464) = 0;
  }
  return v12;
}
