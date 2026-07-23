/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x1800E4BE4
 * Callers:
 *     RtlCopyBitMap @ 0x1800E37C0 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  size_t v7; // r8
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  _DWORD *v11; // r9
  _DWORD *v12; // r11
  char v13; // di
  int v14; // eax
  int v15; // edx
  int *i; // r11
  int v17; // edx

  v5 = (unsigned __int64)a3 >> 3;
  v6 = a3;
  if ( (a3 & 7) != 0 )
  {
    v8 = a3 & 0x1F;
    v9 = a4 & 0x1F;
    v10 = (unsigned __int64)a4 >> 5;
    v11 = (_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * (v10 + (v6 >> 5)));
    v12 = (_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v10);
    if ( v9 )
    {
      v13 = 32 - v8;
      if ( v9 > 32 - v8 )
      {
        v11[1] = ((*v12 & (unsigned int)(((1 << (v8 + v9 - 32)) - 1) << v13)) >> v13) | v11[1] & ~((1 << (v8 + v9 - 32))
                                                                                                 - 1);
        v15 = (*v12 & ((1 << v13) - 1)) << v8;
        v14 = (1 << v8) - 1;
      }
      else
      {
        v14 = ~(((1 << v9) - 1) << v8);
        v15 = (*v12 & ((1 << v9) - 1)) << v8;
      }
      *v11 = v15 | *v11 & v14;
    }
    for ( i = v12 - 1; v10; --v10 )
    {
      *v11 = ((~((1 << (32 - v8)) - 1) & (unsigned int)*i) >> (32 - v8)) | ~((1 << v8) - 1) & *v11;
      --v11;
      v17 = *i--;
      *v11 = ((((1 << (32 - v8)) - 1) & v17) << v8) | ((1 << v8) - 1) & *v11;
    }
  }
  else
  {
    v7 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
      *(_BYTE *)(v7 + *(_QWORD *)(a2 + 8) + v5) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v7 + *(_QWORD *)(a1 + 8)) | *(_BYTE *)(v7 + *(_QWORD *)(a2 + 8) + v5) & ~((1 << (a4 & 7)) - 1);
    if ( v7 )
      memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v7);
  }
}
