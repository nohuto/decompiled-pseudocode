/*
 * XREFs of RtlpSparseBitmapCtxFindRunsFromNullRange @ 0x180100CAC
 * Callers:
 *     RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x180100B34 (RtlpSparseBitmapCtxAppendNextRangeToRun.c)
 *     RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C (RtlpSparseBitmapCtxFindRunsInternal.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindRunsFromNullRange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        char *a9)
{
  int v10; // r12d
  char *v12; // rdi
  char *v13; // r13
  unsigned __int64 v15; // rbx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  unsigned int v19; // [rsp+60h] [rbp+18h]
  int v20; // [rsp+74h] [rbp+2Ch]

  v19 = a3;
  v10 = 0;
  v12 = a5;
  v13 = &a5[24 * a4];
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    v15 = a7 + a6 * (unsigned __int64)*(unsigned int *)(a1 + 56);
    v16 = *(_DWORD *)(a1 + 56) - a7;
    v20 = HIDWORD(v15);
    do
    {
      *((_DWORD *)v12 + 1) = v20;
      v17 = a3;
      if ( v16 < a3 )
        v17 = v16;
      *(_DWORD *)v12 = v15;
      if ( v15 + v17 > a8 )
      {
        v10 = 1;
        v17 = a8 - v15 + 1;
      }
      v16 -= v17;
      v15 += v17;
      *((_DWORD *)v12 + 2) = v17;
      v20 = HIDWORD(v15);
      if ( a9 )
      {
        memset(a9, 0, *(unsigned int *)(a1 + 68));
        a3 = v19;
        a9 += *(unsigned int *)(a1 + 68);
      }
      v12 += 24;
    }
    while ( v12 != v13 && v16 && !v10 );
  }
  return (v12 - a5) / 24;
}
