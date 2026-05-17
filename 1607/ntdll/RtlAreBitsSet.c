/*
 * XREFs of RtlAreBitsSet @ 0x180070390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // r9
  unsigned int v4; // r11d
  __int64 v5; // rcx
  int *v6; // r8
  int *v7; // r10
  int v8; // eax
  unsigned int v9; // r9d

  v3 = a3;
  v4 = a3 + a2 - 1;
  if ( v4 < *(_DWORD *)a1 )
  {
    if ( a3 <= 1 )
    {
      if ( a3 == 1 )
        return _bittest(*(const signed __int32 **)(a1 + 8), a2);
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = (int *)(v5 + 4 * ((unsigned __int64)a2 >> 5));
      v7 = (int *)(v5 + 4 * ((unsigned __int64)v4 >> 5));
      v8 = *v6;
      if ( v6 == v7 )
      {
        v9 = 0xFFFFFFFF >> (32 - v3) << a2;
        return (v9 & v8) == v9;
      }
      if ( ((-1 << a2) & v8) == -1 << a2 )
      {
        while ( ++v6 != v7 )
        {
          if ( *v6 != -1 )
            return 0;
        }
        v8 = *v6;
        v9 = 0xFFFFFFFF >> (-1 - v4);
        return (v9 & v8) == v9;
      }
    }
  }
  return 0;
}
