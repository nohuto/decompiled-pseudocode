/*
 * XREFs of CompareId @ 0x1C000D58C
 * Callers:
 *     IoctlToNVMe @ 0x1C000A2B0 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C000D71C (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     <none>
 */

char __fastcall CompareId(__int64 a1, unsigned int a2, char *a3, unsigned int a4, unsigned int *a5)
{
  char v5; // bl
  char *v9; // r10
  char v10; // r9
  unsigned int v11; // ecx
  char *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  char *v16; // rcx
  int v17; // edx
  __int64 v18; // rsi
  char v19; // al
  char v20; // di
  unsigned int v21; // ecx
  char *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  char *v25; // r10
  char v26; // dl
  int v27; // eax

  v5 = 0;
  v9 = a3;
  if ( a1 && a3 )
  {
    v10 = 1;
    while ( *a3 || a3[1] )
    {
      v11 = 0;
      if ( a4 )
      {
        v12 = a3;
        do
        {
          if ( !*v12 )
            break;
          ++v11;
          ++v12;
        }
        while ( v11 < a4 );
      }
      v13 = a4;
      if ( v11 < a4 )
        v13 = v11;
      if ( a2 >= v13 )
      {
        v15 = 0;
        if ( a4 )
        {
          v16 = a3;
          do
          {
            if ( !*v16 )
              break;
            ++v15;
            ++v16;
          }
          while ( v15 < a4 );
        }
        v14 = a4;
        if ( v15 < a4 )
          v14 = v15;
      }
      else
      {
        v14 = a2;
      }
      if ( !v14 )
        return 0;
      v17 = 0;
      v5 = 1;
      v18 = a1 - (_QWORD)v9;
      while ( 1 )
      {
        v19 = *v9;
        if ( *v9 == 42 )
        {
          ++v9;
          goto LABEL_37;
        }
        v20 = v9[v18];
        if ( !v20 || !v19 || v20 != v19 && v19 != 63 )
          break;
        ++v9;
        if ( ++v17 >= v14 )
          goto LABEL_37;
      }
      v5 = 0;
      v21 = 0;
      if ( a4 )
      {
        v22 = a3;
        do
        {
          if ( !*v22 )
            break;
          ++v21;
          ++v22;
        }
        while ( v21 < a4 );
      }
      v23 = a4;
      if ( v21 < a4 )
        v23 = v21;
      a3 += v23 + 1;
      v9 = a3;
    }
LABEL_37:
    if ( !a5 || v5 != 1 || *v9 != 32 )
      return v5;
    v24 = 0;
    v25 = v9 + 1;
    if ( v25 )
    {
      v26 = *v25;
      if ( !*v25 )
      {
LABEL_48:
        *a5 = v24;
        return v10 != 0;
      }
      do
      {
        if ( (unsigned __int8)(v26 - 48) > 9u )
          break;
        ++v25;
        v27 = v26;
        v26 = *v25;
        v24 = v27 + 2 * (5 * v24 - 24);
        if ( !*v25 )
          goto LABEL_48;
      }
      while ( v24 <= 0x19999999 );
    }
    v10 = 0;
    return v10 != 0;
  }
  return 1;
}
