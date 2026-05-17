/*
 * XREFs of ScanHexFormat @ 0x18004CABC
 * Callers:
 *     RtlGUIDFromString @ 0x18004C8B0 (RtlGUIDFromString.c)
 * Callees:
 *     <none>
 */

__int64 ScanHexFormat(_WORD *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned __int16 v3; // ax
  unsigned int v6; // r9d
  int v7; // r10d
  unsigned __int16 **v8; // rsi
  int v9; // edi
  int v10; // r10d
  unsigned __int16 v11; // dx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // rax
  unsigned __int16 *v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = a3;
  v3 = *a3;
  v6 = 0;
  v7 = *a3;
  if ( !*a3 )
    goto LABEL_30;
  v8 = &v18;
  while ( v7 == 37 )
  {
    v18 = ++a3;
    v3 = *a3;
    if ( *a3 == 37 )
      break;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = *a3;
      if ( (unsigned __int16)(*a3 - 48) <= 9u )
      {
        v10 = v11 + 2 * (5 * v10 - 24);
        goto LABEL_11;
      }
      if ( v11 == 108 )
      {
        ++v9;
        goto LABEL_11;
      }
      if ( ((v11 - 88) & 0xFFDF) == 0 )
        break;
LABEL_11:
      v18 = ++a3;
    }
    v12 = 0;
    v18 = a3 + 1;
    while ( v10 )
    {
      --v10;
      if ( !a2 )
        return 0xFFFFFFFFLL;
      v13 = 16 * v12;
      if ( (unsigned __int16)(*a1 - 48) > 9u )
      {
        if ( (unsigned __int16)(*a1 - 97) > 5u )
        {
          if ( (unsigned __int16)(*a1 - 65) > 5u )
            return 0xFFFFFFFFLL;
          v14 = v13 - 55;
        }
        else
        {
          v14 = v13 - 87;
        }
      }
      else
      {
        v14 = v13 - 48;
      }
      v15 = (unsigned __int16)*a1++;
      v12 = v15 + v14;
      --a2;
    }
    v16 = *++v8;
    if ( v9 )
      *v16 = v12;
    else
      *(_WORD *)v16 = v12;
    a3 = v18;
    ++v6;
LABEL_29:
    v3 = *a3;
    v7 = *a3;
    if ( !*a3 )
    {
LABEL_30:
      if ( a2 )
      {
        if ( *a1 )
          return (unsigned int)-1;
      }
      return v6;
    }
  }
  if ( a2 && *a1 == v3 )
  {
    ++a1;
    --a2;
    v18 = ++a3;
    goto LABEL_29;
  }
  return 0xFFFFFFFFLL;
}
