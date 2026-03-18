/*
 * XREFs of ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C00E0E50
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C00E0A3C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C00E0BF8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2)
{
  int v2; // r10d
  int v3; // r11d
  int v4; // r9d
  int v5; // ecx
  unsigned int v6; // r8d
  int v7; // r8d
  unsigned int v8; // eax
  int *v9; // rdx
  bool v10; // cc
  int v11; // r9d
  int v12; // r9d
  int v13; // eax

  v2 = 0;
  v3 = a1.x - a2.x;
  v4 = 4;
  v5 = a1.y - a2.y;
  if ( v3 )
  {
    v7 = 100 * v5 / v3;
    if ( v7 < 0 )
      v7 = -v7;
    v8 = 0;
    v9 = (int *)&RIMDeadzone::s_adwTangentLookup;
    do
    {
      if ( v7 <= *v9 )
        break;
      ++v8;
      ++v9;
    }
    while ( v8 < 0x12 );
    v6 = 90;
    if ( v8 != 18 )
      v6 = 5 * v8;
    v10 = v3 <= 0;
    if ( v3 < 0 )
      goto LABEL_13;
  }
  else
  {
    v6 = 90;
  }
  if ( v5 >= 0 )
    goto LABEL_16;
  v10 = v3 <= 0;
LABEL_13:
  if ( v10 )
  {
    LOBYTE(v2) = v5 >= 0;
    v4 = v2 + 2;
  }
  else
  {
    v4 = 1;
  }
LABEL_16:
  v11 = v4 - 2;
  if ( !v11 )
  {
    v13 = 180;
    goto LABEL_22;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = 360;
LABEL_22:
      v6 = v13 - v6;
    }
  }
  else
  {
    v6 += 180;
  }
  return v6 % 0x168;
}
