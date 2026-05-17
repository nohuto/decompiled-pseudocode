/*
 * XREFs of RtlExtractBitMap @ 0x1800D2830
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // eax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  __int64 v13; // r8
  unsigned int *v14; // r11
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax

  v5 = *(_DWORD *)a1 - a3;
  v7 = v5;
  if ( a4 <= v5 )
    v7 = a4;
  v8 = *a2;
  if ( v7 > v8 )
    v7 = *a2;
  if ( v7 )
  {
    v9 = (unsigned __int64)a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v14 = (unsigned int *)*((_QWORD *)a2 + 1);
      v15 = (unsigned __int64)a3 >> 5;
      v16 = a3 & 0x1F;
      v17 = (_DWORD *)(v8 + 4 * v15);
      if ( v7 >= 0x20 )
      {
        v18 = v7 >> 5;
        v7 += -32LL * (v7 >> 5);
        do
        {
          v19 = ~((1 << v16) - 1) & *v17++;
          *v14 = v19 >> v16;
          LODWORD(v8) = (((1 << v16) - 1) & *v17) << (32 - v16);
          *v14++ |= v8;
          --v18;
        }
        while ( v18 );
      }
      if ( v7 )
      {
        if ( v7 > 32 - v16 )
        {
          LODWORD(v8) = (*v17 & (unsigned int)~((1 << v16) - 1)) >> v16;
          *v14 = v8 | ((v17[1] & ((1 << (v7 + v16 - 32)) - 1)) << (32 - v16));
        }
        else
        {
          LODWORD(v8) = (*v17 & (unsigned int)(((1 << v7) - 1) << v16)) >> v16;
          *v14 = v8;
        }
      }
    }
    else
    {
      v10 = v7;
      v11 = v7 & 7;
      v12 = v10 >> 3;
      if ( v12 )
        LOBYTE(v8) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v9 + *(_QWORD *)(a1 + 8)), v12);
      if ( v11 )
      {
        v13 = *((_QWORD *)a2 + 1);
        *(_BYTE *)(v12 + v13) &= ~((1 << v11) - 1);
        LOBYTE(v8) = ((1 << v11) - 1) & *(_BYTE *)(v12 + *(_QWORD *)(a1 + 8) + v9);
        *(_BYTE *)(v12 + v13) |= v8;
      }
    }
  }
  return v8;
}
