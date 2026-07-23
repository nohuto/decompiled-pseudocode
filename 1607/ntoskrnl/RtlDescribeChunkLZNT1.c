/*
 * XREFs of RtlDescribeChunkLZNT1 @ 0x14068C47C
 * Callers:
 *     RtlReserveChunkLZNT1 @ 0x14068C53C (RtlReserveChunkLZNT1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDescribeChunkLZNT1(__int16 **a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int16 *v5; // rcx
  unsigned int v6; // r10d
  __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v9; // rax

  *(_QWORD *)a3 = *a1;
  *a4 = 0;
  v5 = *a1;
  v6 = -2147483622;
  if ( (unsigned __int64)v5 <= a2 - 4 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      v6 = 0;
      v8 = (v7 & 0xFFFu) + 3;
      *a4 = v8;
      *a1 = (__int16 *)((char *)*a1 + v8);
      if ( (unsigned __int64)*a1 > a2 || (v7 & 0x7000) != 0x3000 )
      {
        v9 = (unsigned int)*a4;
        goto LABEL_13;
      }
      if ( v7 >= 0 )
      {
        v9 = (unsigned int)*a4;
        if ( (_DWORD)v9 == 4098 )
        {
          *(_QWORD *)a3 += 2LL;
          *a4 -= 2;
          return v6;
        }
LABEL_13:
        v6 = -1073741246;
        *a1 = (__int16 *)((char *)*a1 - v9);
        return v6;
      }
      if ( *a4 == 6 && *(_BYTE *)(*(_QWORD *)a3 + 2LL) == 2 && !*(_BYTE *)(*(_QWORD *)a3 + 3LL) )
        *a4 = 0;
    }
  }
  return v6;
}
