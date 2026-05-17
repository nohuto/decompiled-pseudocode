/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x1800D35D4
 * Callers:
 *     RtlCopyBitMap @ 0x1800D2630 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
 */

void __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  size_t v7; // r8
  char v8; // cl
  _BYTE *v9; // r9
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  _DWORD *v13; // r9
  _DWORD *v14; // r11
  char v15; // di
  int v16; // eax
  int v17; // edx
  int *i; // r11
  int v19; // edx

  v5 = (unsigned __int64)a3 >> 3;
  v6 = a3;
  if ( (a3 & 7) != 0 )
  {
    v10 = a3 & 0x1F;
    v11 = a4 & 0x1F;
    v12 = (unsigned __int64)a4 >> 5;
    v13 = (_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * (v12 + (v6 >> 5)));
    v14 = (_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v12);
    if ( v11 )
    {
      v15 = 32 - v10;
      if ( v11 > 32 - v10 )
      {
        v13[1] = ((*v14 & (unsigned int)(((1 << (v10 + v11 - 32)) - 1) << v15)) >> v15) | v13[1] & ~((1 << (v10 + v11 - 32)) - 1);
        v17 = (*v14 & ((1 << v15) - 1)) << v10;
        v16 = (1 << v10) - 1;
      }
      else
      {
        v16 = ~(((1 << v11) - 1) << v10);
        v17 = (*v14 & ((1 << v11) - 1)) << v10;
      }
      *v13 = v17 | *v13 & v16;
    }
    for ( i = v14 - 1; v12; --v12 )
    {
      *v13 = ((~((1 << (32 - v10)) - 1) & (unsigned int)*i) >> (32 - v10)) | *v13 & ~((1 << v10) - 1);
      --v13;
      v19 = *i--;
      *v13 = ((((1 << (32 - v10)) - 1) & v19) << v10) | *v13 & ((1 << v10) - 1);
    }
  }
  else
  {
    v7 = (unsigned __int64)a4 >> 3;
    v8 = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v9 = (_BYTE *)(v5 + v7 + *(_QWORD *)(a2 + 8));
      *v9 &= ~((1 << v8) - 1);
      *v9 |= (unsigned __int8)((1 << v8) - 1) & *(_BYTE *)(v7 + *(_QWORD *)(a1 + 8));
    }
    if ( v7 )
      memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v7);
  }
}
