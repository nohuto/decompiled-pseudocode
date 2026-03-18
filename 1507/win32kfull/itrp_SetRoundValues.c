/*
 * XREFs of itrp_SetRoundValues @ 0x1C00E85B8
 * Callers:
 *     itrp_SROUND @ 0x1C00E84E0 (itrp_SROUND.c)
 *     itrp_S45ROUND @ 0x1C02DD370 (itrp_S45ROUND.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall itrp_SetRoundValues(char a1, int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int16 v4; // ax
  int v5; // r9d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // r9d
  __int16 v10; // ax

  v2 = qword_1C0323160;
  v3 = a1 & 0xC0;
  if ( a2 )
  {
    if ( (a1 & 0xC0) == 0 )
    {
      *(_WORD *)(qword_1C0323160 + 142) = 32;
      goto LABEL_5;
    }
    v4 = 64;
    v5 = v3 - 64;
    if ( v5 )
    {
      if ( v5 == 64 )
      {
        *(_WORD *)(qword_1C0323160 + 142) = 128;
        goto LABEL_5;
      }
      v4 = 999;
    }
    *(_WORD *)(qword_1C0323160 + 142) = v4;
LABEL_5:
    *(_DWORD *)(v2 + 136) = ~(*(__int16 *)(v2 + 142) - 1);
    goto LABEL_6;
  }
  *(_WORD *)(qword_1C0323160 + 140) = 11591;
  if ( (a1 & 0xC0) == 0 )
  {
    v10 = 5795;
LABEL_24:
    *(_WORD *)(v2 + 140) = v10;
    goto LABEL_25;
  }
  v9 = v3 - 64;
  if ( v9 )
  {
    if ( v9 == 64 )
      v10 = 23182;
    else
      v10 = 999;
    goto LABEL_24;
  }
LABEL_25:
  *(_WORD *)(v2 + 142) = (*(__int16 *)(v2 + 140) + 128) >> 8;
LABEL_6:
  v6 = a1 & 0x30;
  if ( (a1 & 0x30) == 0 )
  {
    *(_WORD *)(v2 + 144) = 0;
    goto LABEL_8;
  }
  switch ( v6 )
  {
    case 16:
      v8 = (*(__int16 *)(v2 + 142) + 2) >> 2;
      goto LABEL_15;
    case 32:
      v8 = (*(__int16 *)(v2 + 142) + 1) >> 1;
LABEL_15:
      *(_WORD *)(v2 + 144) = v8;
      break;
    case 48:
      *(_WORD *)(v2 + 144) = (*(__int16 *)(v2 + 142) + 2 * (*(__int16 *)(v2 + 142) + 1)) >> 2;
      break;
  }
LABEL_8:
  if ( (a1 & 0xF) != 0 )
  {
    v7 = *(__int16 *)(v2 + 142);
    *(_WORD *)(v2 + 146) = (v7 * ((a1 & 0xF) - 4) + 4) >> 3;
  }
  else
  {
    LOWORD(v7) = *(_WORD *)(v2 + 142) - 1;
    *(_WORD *)(v2 + 146) = v7;
  }
  return v7;
}
