/*
 * XREFs of InvokeRoundValue @ 0x1C00BD5B4
 * Callers:
 *     itrp_MIAP @ 0x1C00BC8C0 (itrp_MIAP.c)
 *     itrp_ROUND @ 0x1C00BD280 (itrp_ROUND.c)
 *     itrp_MDAP @ 0x1C00BD320 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C00BD810 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C00BE9A0 (itrp_MIRP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeRoundValue(int a1, int a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  bool v9; // sf
  __int64 result; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // eax

  if ( a1 <= 8 )
  {
    if ( a1 == 8 )
      return itrp_Super45Round((unsigned int)a2, a3);
    v3 = a1 - 1;
    if ( !v3 )
    {
      if ( a2 < 0 )
        v8 = -((a3 - a2 + 16) & 0xFFFFFFE0);
      else
        v8 = (a2 + a3 + 16) & 0xFFFFFFE0;
      v9 = ((a2 ^ v8) & 0x80000000) != 0;
LABEL_11:
      if ( v9 )
      {
        if ( a2 )
          return 0;
      }
      return v8;
    }
    v4 = v3 - 1;
    if ( !v4 )
      return itrp_RoundDownToGrid((unsigned int)a2, a3);
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( a2 >= 0 )
      {
        v7 = a3 + 63;
        goto LABEL_9;
      }
      v17 = a3 - a2 + 63;
LABEL_26:
      v8 = -(v17 & 0xFFFFFFC0);
      goto LABEL_10;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      if ( a2 >= 0 )
      {
        v7 = a3 + 32;
LABEL_9:
        v8 = (a2 + v7) & 0xFFFFFFC0;
LABEL_10:
        v9 = ((a2 ^ v8) & 0x80000000) != 0;
        goto LABEL_11;
      }
      v17 = a3 - a2 + 32;
      goto LABEL_26;
    }
    v20 = v6 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
        return itrp_RoundOff((unsigned int)a2, a3);
      if ( v21 == 1 )
        return itrp_SuperRound((unsigned int)a2, a3);
LABEL_71:
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    if ( a2 < 0 )
      v22 = -32 - ((a3 - a2) & 0xFFFFFFC0);
    else
      v22 = ((a2 + a3) & 0xFFFFFFC0) + 32;
    if ( ((a2 ^ v22) & 0x80000000) != 0 )
    {
      if ( a2 )
      {
        v22 = -32;
        if ( a2 > 0 )
          return 32;
      }
    }
    return v22;
  }
  v11 = a1 - 9;
  if ( !v11 )
  {
    v25 = (int)a3 / 2;
    if ( a2 >= 0 )
    {
      result = (a2 + v25 + 1) & 0xFFFFFFFE;
      goto LABEL_21;
    }
    v19 = (v25 - a2 + 1) & 0xFFFFFFFE;
    goto LABEL_32;
  }
  v12 = v11 - 1;
  if ( !v12 )
    return itrp_RoundDownToGridSP((unsigned int)a2, a3);
  v13 = v12 - 1;
  if ( !v13 )
  {
    v26 = (int)a3 / 2;
    if ( a2 >= 0 )
    {
      v16 = v26 + 3;
      goto LABEL_20;
    }
    v18 = v26 - a2 + 3;
    goto LABEL_31;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v23 = v14 - 1;
    if ( v23 )
    {
      if ( v23 == 1 )
        return itrp_RoundOffSP((unsigned int)a2, a3);
      goto LABEL_71;
    }
    v24 = (int)a3 / 2;
    if ( a2 < 0 )
      v22 = -2 - ((v24 - a2) & 0xFFFFFFFC);
    else
      v22 = ((v24 + a2) & 0xFFFFFFFC) + 2;
    if ( ((a2 ^ v22) & 0x80000000) != 0 )
    {
      if ( a2 )
      {
        v22 = -2;
        if ( a2 > 0 )
          return 2;
      }
    }
    return v22;
  }
  v15 = (int)a3 / 2;
  if ( a2 < 0 )
  {
    v18 = v15 - a2 + 2;
LABEL_31:
    v19 = v18 & 0xFFFFFFFC;
LABEL_32:
    result = -v19;
    goto LABEL_21;
  }
  v16 = v15 + 2;
LABEL_20:
  result = (a2 + v16) & 0xFFFFFFFC;
LABEL_21:
  if ( (int)(a2 ^ result) < 0 && a2 )
    return 0LL;
  return result;
}
