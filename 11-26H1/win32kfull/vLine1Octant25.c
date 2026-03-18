/*
 * XREFs of vLine1Octant25 @ 0x140206D30
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

char __fastcall vLine1Octant25(unsigned int *a1, __int64 a2, int a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  unsigned __int64 v7; // rax
  int v8; // r11d
  char *v9; // rdx
  int v10; // ecx
  __int64 v11; // rdi
  char v12; // r8

  v4 = a1[6];
  v5 = a1[4];
  v6 = a1[5];
  v7 = (unsigned __int64)a1[1] >> 3;
  v8 = 128 >> (a1[1] & 7);
  v9 = (char *)(v7 + a2);
  v10 = a1[3] - 1;
  v11 = a3;
  v12 = *v9;
  if ( a4 )
  {
    *v9 = v8 | v12;
    if ( v10 )
    {
      LOBYTE(v7) = v11;
      do
      {
        v9 += v11;
        v4 += v6;
        if ( v4 >= 0 )
        {
          v4 -= v5;
          LOBYTE(v8) = 2 * v8;
          if ( !(_BYTE)v8 )
          {
            LOBYTE(v8) = 1;
            --v9;
          }
        }
        *v9 |= v8;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    LOBYTE(v7) = v12 & ~(_BYTE)v8;
    for ( *v9 = v7; v10; --v10 )
    {
      v9 += v11;
      v4 += v6;
      if ( v4 >= 0 )
      {
        v4 -= v5;
        LOBYTE(v8) = 2 * v8;
        if ( !(_BYTE)v8 )
        {
          LOBYTE(v8) = 1;
          --v9;
        }
      }
      LOBYTE(v7) = ~(_BYTE)v8;
      *v9 &= ~(_BYTE)v8;
    }
  }
  return v7;
}
