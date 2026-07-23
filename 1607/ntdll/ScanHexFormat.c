/*
 * XREFs of ScanHexFormat @ 0x18005E72C
 * Callers:
 *     RtlGUIDFromString @ 0x18005E520 (RtlGUIDFromString.c)
 * Callees:
 *     <none>
 */

__int64 ScanHexFormat(_WORD *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned int v5; // r9d
  _DWORD **v6; // rsi
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  unsigned __int16 v10; // dx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // rax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF

  v5 = 0;
  v6 = (_DWORD **)(&v17 + 8);
  while ( 1 )
  {
LABEL_2:
    v7 = *a3;
    if ( !*a3 )
    {
      if ( a2 && *a1 )
        return (unsigned int)-1;
      return v5;
    }
    if ( v7 != 37 )
      break;
    LOWORD(v7) = *++a3;
    if ( *a3 == 37 )
      break;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = *a3;
      if ( (unsigned __int16)(*a3 - 48) <= 9u )
      {
        v9 = v10 + 2 * (5 * v9 - 24);
        goto LABEL_8;
      }
      if ( v10 != 108 )
        break;
      ++v8;
LABEL_8:
      ++a3;
    }
    if ( ((v10 - 88) & 0xFFDF) != 0 )
      goto LABEL_8;
    v11 = 0;
    while ( v9 )
    {
      --v9;
      if ( !a2 )
        return 0xFFFFFFFFLL;
      v12 = 16 * v11;
      if ( (unsigned __int16)(*a1 - 48) > 9u )
      {
        if ( (unsigned __int16)(*a1 - 97) > 5u )
        {
          if ( (unsigned __int16)(*a1 - 65) > 5u )
            return 0xFFFFFFFFLL;
          v13 = v12 - 55;
        }
        else
        {
          v13 = v12 - 87;
        }
      }
      else
      {
        v13 = v12 - 48;
      }
      v14 = (unsigned __int16)*a1++;
      v11 = v14 + v13;
      --a2;
    }
    v15 = *++v6;
    if ( v8 )
      *v15 = v11;
    else
      *(_WORD *)v15 = v11;
    ++a3;
    ++v5;
  }
  if ( a2 && *a1 == (_WORD)v7 )
  {
    ++a1;
    --a2;
    ++a3;
    goto LABEL_2;
  }
  return 0xFFFFFFFFLL;
}
