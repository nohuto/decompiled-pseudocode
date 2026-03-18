/*
 * XREFs of CiThreadUpdatePriorities @ 0x1C000AC30
 * Callers:
 *     CiThreadSetRelativePriority @ 0x1C000A530 (CiThreadSetRelativePriority.c)
 *     CiThreadCreate @ 0x1C000A890 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadUpdatePriorities(_BYTE *a1, _BYTE *a2, char a3)
{
  char v4; // al
  unsigned __int8 v5; // dl
  char v6; // dl
  char v7; // r8
  int v8; // r11d
  int v9; // r11d

  if ( CiSystemResponsiveness == 100 )
  {
    a1[106] = a3 + 9;
    a1[105] = a3 + 9;
    a1[104] = a3 + 9;
    return;
  }
  v4 = a3 + a2[1];
  if ( v4 )
  {
    if ( (unsigned __int8)v4 >= 8u )
      v4 = 7;
  }
  else
  {
    v4 = 1;
  }
  v5 = a2[2];
  if ( v5 < 8u )
    v6 = v5 + 8;
  else
    v6 = a3 + 8;
  v7 = a3 + *a2;
  v8 = ((unsigned __int8)a2[3] >> 4) & 7;
  if ( v8 != 2 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v7 = v6;
      goto LABEL_10;
    }
    if ( v9 != 2 )
      goto LABEL_10;
    if ( (unsigned __int8)v7 >= 0x17u )
    {
      if ( (unsigned __int8)v7 > 0x1Au )
        v7 = 26;
      goto LABEL_10;
    }
LABEL_18:
    v7 = 23;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 < 0x10u )
  {
    v7 = 16;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 >= 0x18u )
    goto LABEL_18;
LABEL_10:
  if ( (unsigned __int8)v6 >= 0x1Bu )
    v6 = 26;
  if ( (unsigned __int8)v7 >= 0x1Bu )
    v7 = 27;
  a1[106] = v4;
  a1[105] = v6;
  a1[104] = v7;
}
