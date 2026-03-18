/*
 * XREFs of pbmiConvertInfo @ 0x1C02A7F10
 * Callers:
 *     GreSetDIBits @ 0x1C0113E5C (GreSetDIBits.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 */

char *__fastcall pbmiConvertInfo(unsigned __int16 *a1)
{
  int v1; // edx
  int v4; // ebx
  char *v5; // rax
  char *v6; // rcx
  char *v7; // r8
  _BYTE *v8; // rdx
  unsigned __int16 v9; // ax
  char v10; // al

  v1 = a1[5];
  if ( v1 == 1 )
  {
    v4 = 2;
  }
  else if ( a1[5] == 4 )
  {
    v4 = 16;
  }
  else if ( a1[5] == 8 )
  {
    v4 = 256;
  }
  else
  {
    if ( v1 != 16 && v1 != 24 && v1 != 32 )
      return 0LL;
    v4 = 0;
  }
  v5 = (char *)PALLOCMEM2((unsigned int)(4 * v4 + 40), 1886221383LL, 0);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  *(_DWORD *)v5 = 40;
  v7 = (char *)(a1 + 6);
  v8 = v5 + 40;
  *((_DWORD *)v5 + 1) = a1[2];
  *((_DWORD *)v5 + 2) = a1[3];
  *((_WORD *)v5 + 6) = a1[4];
  v9 = a1[5];
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 7) = 0;
  *((_DWORD *)v6 + 8) = 0;
  *((_DWORD *)v6 + 9) = 0;
  for ( *((_WORD *)v6 + 7) = v9; v4; --v4 )
  {
    v8[2] = v7[2];
    v8[1] = v7[1];
    v10 = *v7;
    v7 += 3;
    *v8 = v10;
    v8[3] = 0;
    v8 += 4;
  }
  return v6;
}
