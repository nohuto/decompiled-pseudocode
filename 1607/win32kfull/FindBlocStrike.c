/*
 * XREFs of FindBlocStrike @ 0x1C01258B4
 * Callers:
 *     sfac_SearchForStrike @ 0x1C001D694 (sfac_SearchForStrike.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindBlocStrike(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int16 a4,
        __int16 a5,
        unsigned __int16 *a6,
        int *a7)
{
  int v7; // r10d
  unsigned int v10; // r11d
  unsigned __int16 v11; // di
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // r8
  unsigned int v14; // ebx
  unsigned int v16; // r9d
  int v17; // eax

  v7 = 8;
  if ( a2 < 8 )
    return 0LL;
  v10 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  if ( v10 > (a2 - 8) / 0x30 )
    return 0LL;
  v11 = 2;
  v12 = 0;
  if ( a5 )
  {
    if ( a5 == 2 )
    {
      v13 = 2;
    }
    else
    {
      v13 = 4;
      if ( a5 != 4 )
        v13 = 8;
    }
    v11 = 276;
  }
  else
  {
    v13 = 1;
  }
  if ( !v10 )
    return 0LL;
  v14 = 53;
  do
  {
    if ( a3 == *(unsigned __int8 *)(v14 - 1 + a1) && a4 == *(unsigned __int8 *)(v14 + a1) )
    {
      v16 = *(unsigned __int8 *)(v14 + 1 + a1);
      v17 = v11;
      if ( _bittest(&v17, v16) )
      {
        if ( !_byteswap_ulong(*(_DWORD *)(v14 - 33 + a1)) )
        {
          if ( (_WORD)v16 == v13 )
          {
            *a7 = v7;
            *a6 = v13;
            return 1LL;
          }
          if ( (unsigned __int16)v16 <= v13 )
          {
            if ( v12 < v13 && (unsigned __int16)v16 > v12 )
            {
LABEL_29:
              v12 = *(unsigned __int8 *)(v14 + 1 + a1);
              *a7 = v7;
            }
          }
          else if ( (unsigned __int16)v16 < v12 || v12 < v13 )
          {
            goto LABEL_29;
          }
        }
      }
    }
    v7 += 48;
    v14 += 48;
    --v10;
  }
  while ( v10 );
  if ( !v12 )
    return 0LL;
  *a6 = v12;
  return 1LL;
}
