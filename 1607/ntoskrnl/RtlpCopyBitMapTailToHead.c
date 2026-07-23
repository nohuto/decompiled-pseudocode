/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x140076BC0
 * Callers:
 *     RtlCopyBitMap @ 0x140076AF8 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

void __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  _DWORD *v10; // r9
  _DWORD *v11; // r11
  char v12; // di
  int v13; // eax
  int v14; // edx
  int *i; // r11
  int v16; // edx
  size_t v17; // r8

  v5 = (unsigned __int64)a3 >> 3;
  v6 = a3;
  if ( (a3 & 7) != 0 )
  {
    v7 = a3 & 0x1F;
    v8 = a4 & 0x1F;
    v9 = (unsigned __int64)a4 >> 5;
    v10 = (_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * (v9 + (v6 >> 5)));
    v11 = (_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v9);
    if ( v8 )
    {
      v12 = 32 - v7;
      if ( v8 > 32 - v7 )
      {
        v10[1] = ((*v11 & (unsigned int)(((1 << (v7 + v8 - 32)) - 1) << v12)) >> v12) | v10[1] & ~((1 << (v7 + v8 - 32))
                                                                                                 - 1);
        v14 = (*v11 & ((1 << v12) - 1)) << v7;
        v13 = (1 << v7) - 1;
      }
      else
      {
        v13 = ~(((1 << v8) - 1) << v7);
        v14 = (*v11 & ((1 << v8) - 1)) << v7;
      }
      *v10 = v14 | *v10 & v13;
    }
    for ( i = v11 - 1; v9; --v9 )
    {
      *v10 = ((~((1 << (32 - v7)) - 1) & (unsigned int)*i) >> (32 - v7)) | ~((1 << v7) - 1) & *v10;
      --v10;
      v16 = *i--;
      *v10 = ((((1 << (32 - v7)) - 1) & v16) << v7) | ((1 << v7) - 1) & *v10;
    }
  }
  else
  {
    v17 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
      *(_BYTE *)(v17 + *(_QWORD *)(a2 + 8) + v5) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v17 + *(_QWORD *)(a1 + 8)) | *(_BYTE *)(v17 + *(_QWORD *)(a2 + 8) + v5) & ~((1 << (a4 & 7)) - 1);
    if ( v17 )
      memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v17);
  }
}
