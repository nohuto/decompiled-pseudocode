/*
 * XREFs of RtlpSparseBitmapCtxFindRunsFromNullRange @ 0x1402733C8
 * Callers:
 *     RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x14027319C (RtlpSparseBitmapCtxAppendNextRangeToRun.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x1402737D8 (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindRunsFromNullRange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char *a5,
        int a6,
        unsigned int a7,
        char *a8)
{
  char *v11; // rdi
  char *v12; // r12
  unsigned __int64 v14; // rbx
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v18; // [rsp+74h] [rbp+2Ch]

  v11 = a5;
  v12 = &a5[24 * a4];
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    v14 = a7 + (unsigned __int64)(unsigned int)(a6 * *(_DWORD *)(a1 + 56));
    v15 = *(_DWORD *)(a1 + 56) - a7;
    v18 = HIDWORD(v14);
    do
    {
      *((_DWORD *)v11 + 1) = v18;
      v16 = a3;
      if ( v15 < a3 )
        v16 = v15;
      *(_DWORD *)v11 = v14;
      v15 -= v16;
      v14 += v16;
      *((_DWORD *)v11 + 2) = v16;
      v18 = HIDWORD(v14);
      if ( a8 )
      {
        memset(a8, 0, *(unsigned int *)(a1 + 68));
        a8 += *(unsigned int *)(a1 + 68);
      }
      v11 += 24;
    }
    while ( v11 != v12 && v15 );
  }
  return (v11 - a5) / 24;
}
