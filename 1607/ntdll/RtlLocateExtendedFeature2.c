/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x1800EB5A0
 * Callers:
 *     RtlLocateExtendedFeature @ 0x1800EB580 (RtlLocateExtendedFeature.c)
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800889DC (RtlpLocateXStateChunk.c)
 */

char *__fastcall RtlLocateExtendedFeature2(_DWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  char *XStateChunk; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  char *v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // r10

  if ( (unsigned int)(a2 - 2) <= 0x3D )
  {
    v5 = 1LL << a2;
    if ( ((1LL << a2) & *(_QWORD *)a3) != 0 && (*(_DWORD *)(a3 + 20) & 0xFFFFFFFC) == 0 )
    {
      XStateChunk = RtlpLocateXStateChunk(a1);
      v9 = XStateChunk;
      if ( a4 )
        *a4 = *(_DWORD *)(v7 + 8 * v8 + 28);
      v10 = 2;
      if ( (*(_BYTE *)(v7 + 20) & 2) == 0 )
      {
        v13 = *(unsigned int *)(v7 + 8 * v8 + 24);
        return &v9[v13 - 512];
      }
      v11 = *((_QWORD *)XStateChunk + 1);
      if ( (v5 & v11) != 0 )
      {
        v12 = *(_QWORD *)(v7 + 544);
        v13 = 576LL;
        if ( (unsigned int)v8 > 2 )
        {
          v14 = (_DWORD *)(v7 + 44);
          do
          {
            if ( ((1LL << v10) & v11) != 0 )
            {
              if ( ((1LL << v10) & v12) != 0 )
                LODWORD(v13) = (v13 + 63) & 0xFFFFFFC0;
              v13 = (unsigned int)(*v14 + v13);
            }
            ++v10;
            v14 += 2;
          }
          while ( v10 < (unsigned int)v8 );
        }
        if ( (v5 & v12) != 0 )
          v13 = ((_DWORD)v13 + 63) & 0xFFFFFFC0;
        return &v9[v13 - 512];
      }
    }
  }
  return 0LL;
}
