/*
 * XREFs of RtlCopyBitMapEx @ 0x140211E90
 * Callers:
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlpCopyBitMapTailToHeadEx @ 0x14021322C (RtlpCopyBitMapTailToHeadEx.c)
 */

char *__fastcall RtlCopyBitMapEx(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  char *v6; // rcx
  char *v7; // rdx
  char *result; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  size_t v11; // rdi
  unsigned __int64 v12; // r9

  v3 = *a1;
  if ( *a1 > *a2 )
    v3 = *a2;
  if ( v3 )
  {
    v6 = (char *)a2[1];
    v7 = (char *)a1[1];
    if ( v7 > v6 || (result = &v7[8 * ((v3 - 1) >> 6)], v6 > result) )
    {
      v9 = v3;
      v10 = v3 & 7;
      v11 = v9 >> 3;
      if ( v11 )
        result = (char *)memmove(v6, v7, v11);
      if ( v10 )
      {
        v12 = a2[1];
        *(_BYTE *)(v11 + v12) &= ~((1 << v10) - 1);
        result = (char *)a1[1];
        *(_BYTE *)(v11 + v12) |= (unsigned __int8)((1 << v10) - 1) & result[v11];
      }
    }
    else
    {
      return (char *)RtlpCopyBitMapTailToHeadEx(a1, a2, a3, v3);
    }
  }
  return result;
}
