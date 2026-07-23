/*
 * XREFs of xtoa_s @ 0x140152138
 * Callers:
 *     _itoa_s @ 0x140151FB8 (_itoa_s.c)
 *     _ltoa_s @ 0x140151FE0 (_ltoa_s.c)
 *     _ultoa_s @ 0x140152018 (_ultoa_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

__int64 __fastcall xtoa_s(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  char *v11; // r8
  char *v12; // r9
  int v13; // eax
  unsigned int v14; // edx
  char v15; // dl
  char *v17; // r8
  char v18; // cl

  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v9 = 22;
LABEL_16:
    xHalFreeMessageTarget();
    return v9;
  }
  *a2 = 0;
  v9 = 34;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
    goto LABEL_16;
  if ( a4 - 2 <= 0x22 )
  {
    v10 = 0LL;
    v11 = a2;
    if ( a5 )
    {
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
      a1 = -a1;
    }
    v12 = v11;
    do
    {
      v14 = a1 % a4;
      v13 = a1 / a4;
      a1 /= a4;
      if ( v14 <= 9 )
        v15 = v14 + 48;
      else
        v15 = v14 + 87;
      *v11 = v15;
      ++v10;
      ++v11;
    }
    while ( v13 && v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v11 = 0;
    v17 = v11 - 1;
    do
    {
      v18 = *v17;
      *v17-- = *v12;
      *v12++ = v18;
    }
    while ( v12 < v17 );
    return 0LL;
  }
  else
  {
LABEL_20:
    xHalFreeMessageTarget();
    return 22LL;
  }
}
