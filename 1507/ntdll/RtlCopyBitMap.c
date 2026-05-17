/*
 * XREFs of RtlCopyBitMap @ 0x1800D2630
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800D35D4 (RtlpCopyBitMapTailToHead.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  int *v8; // r11
  int *v9; // r10
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  unsigned int v17; // edx
  char v18; // di

  result = *(_DWORD *)a2 - a3;
  v6 = (unsigned int)result;
  if ( *a1 <= (unsigned int)result )
    v6 = *a1;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v9 = (int *)(v7 + 4 * result);
    if ( v8 > v9 || (result = (unsigned __int64)&v8[(v6 - 1) >> 5], (unsigned __int64)v9 > result) )
    {
      v10 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v15 = a3 & 0x1F;
        if ( v6 >= 0x20 )
        {
          v16 = v6 >> 5;
          v6 += -32LL * (v6 >> 5);
          do
          {
            *v9 = ((((1 << (32 - v15)) - 1) & *v8) << v15) | ((1 << v15) - 1) & *v9;
            ++v9;
            v17 = (*v8++ & (unsigned int)~((1 << (32 - v15)) - 1)) >> (32 - v15);
            result = v17 | ~((1 << v15) - 1) & *v9;
            *v9 = result;
            --v16;
          }
          while ( v16 );
        }
        if ( v6 )
        {
          v18 = 32 - v15;
          if ( v6 > 32 - v15 )
          {
            *v9 = ((*v8 & ((1 << v18) - 1)) << v15) | *v9 & ((1 << v15) - 1);
            result = ((*v8 & (unsigned int)(((1 << (v6 + v15 - 32)) - 1) << v18)) >> v18) | v9[1] & ~((1 << (v6 + v15 - 32)) - 1);
            v9[1] = result;
          }
          else
          {
            result = ((*v8 & ((1 << v6) - 1)) << v15) | *v9 & (unsigned int)~(((1 << v6) - 1) << v15);
            *v9 = result;
          }
        }
      }
      else
      {
        v11 = v6;
        v12 = v6 & 7;
        v13 = v11 >> 3;
        if ( v13 )
          result = (unsigned __int64)memmove((void *)(v10 + v7), *((const void **)a1 + 1), v13);
        if ( v12 )
        {
          v14 = (_BYTE *)(*(_QWORD *)(a2 + 8) + v13 + v10);
          *v14 &= ~((1 << v12) - 1);
          result = *((_QWORD *)a1 + 1);
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, a3, (unsigned int)v6);
    }
  }
  return result;
}
