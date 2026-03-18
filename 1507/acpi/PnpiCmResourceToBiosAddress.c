/*
 * XREFs of PnpiCmResourceToBiosAddress @ 0x1C007E7E8
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0072DA8 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddress(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  char v6; // al
  unsigned int v7; // r9d
  int v8; // ecx
  __int64 i; // rdx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // ax

  v3 = *(unsigned __int8 *)(a1 + 3);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 3221225473LL;
      v6 = 6;
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 3;
  }
  v7 = *(_DWORD *)(a2 + 16);
  v8 = 0;
  if ( v7 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != v6; i += 20LL )
    {
      if ( ++v8 >= v7 )
        return 0LL;
    }
    if ( *(_BYTE *)i )
    {
      if ( *(_BYTE *)i != 1 )
      {
        if ( *(_BYTE *)i != 2 )
        {
LABEL_25:
          *(_BYTE *)i = 0;
          return 0LL;
        }
        v10 = *(_WORD *)(i + 4);
        *(_WORD *)(a1 + 8) = v10;
        *(_WORD *)(a1 + 10) = v10 + *(_WORD *)(i + 8) - 1;
        v11 = *(_WORD *)(i + 8);
LABEL_24:
        *(_WORD *)(a1 + 14) = v11;
        goto LABEL_25;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 5) = 0;
      *(_BYTE *)(a1 + 5) = (*(_BYTE *)(i + 2) & 1) == 0;
      v12 = *(_WORD *)(i + 2);
      if ( (v12 & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 5) |= 2u;
      }
      else if ( (v12 & 8) != 0 )
      {
        *(_BYTE *)(a1 + 5) |= 4u;
      }
      else if ( (v12 & 4) != 0 )
      {
        *(_BYTE *)(a1 + 5) |= 6u;
      }
    }
    v13 = *(_WORD *)(i + 4);
    *(_WORD *)(a1 + 8) = v13;
    *(_WORD *)(a1 + 10) = *(_WORD *)(i + 12) + v13 - 1;
    v11 = *(_WORD *)(i + 12);
    goto LABEL_24;
  }
  return 0LL;
}
