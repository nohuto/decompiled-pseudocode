/*
 * XREFs of ?vLine1Octant16@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02CE010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine1Octant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // ebp
  int v7; // edi
  int v8; // r11d
  unsigned __int8 *v9; // rdx
  int i; // edi
  int j; // edi

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = *((_DWORD *)a1 + 3);
  v8 = 128 >> (*((_BYTE *)a1 + 4) & 7);
  v9 = &a2[(unsigned __int64)*((unsigned int *)a1 + 1) >> 3];
  if ( a4 )
  {
    *v9 |= v8;
    for ( i = v7 - 1; i; --i )
    {
      v9 += a3;
      v4 += v6;
      if ( v4 >= 0 )
      {
        v4 -= v5;
        LOBYTE(v8) = (unsigned __int8)v8 >> 1;
        if ( !(_BYTE)v8 )
        {
          LOBYTE(v8) = 0x80;
          ++v9;
        }
      }
      *v9 |= v8;
    }
  }
  else
  {
    *v9 &= ~(_BYTE)v8;
    for ( j = v7 - 1; j; --j )
    {
      v9 += a3;
      v4 += v6;
      if ( v4 >= 0 )
      {
        v4 -= v5;
        LOBYTE(v8) = (unsigned __int8)v8 >> 1;
        if ( !(_BYTE)v8 )
        {
          LOBYTE(v8) = 0x80;
          ++v9;
        }
      }
      *v9 &= ~(_BYTE)v8;
    }
  }
}
