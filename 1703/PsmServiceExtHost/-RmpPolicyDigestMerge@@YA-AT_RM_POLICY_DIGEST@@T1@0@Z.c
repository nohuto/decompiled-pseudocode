/*
 * XREFs of ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x180012010
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestMerge(char a1, char a2)
{
  __int16 v2; // ax
  __int16 v3; // r11
  __int16 v4; // r9
  __int16 v5; // r10
  __int16 v6; // r9
  __int16 v7; // r8
  __int16 v8; // r10
  __int16 v9; // r8
  __int16 v10; // r10
  __int16 v11; // r9
  __int16 v12; // r10
  __int16 v13; // r9

  v2 = 0;
  if ( (a1 & 1) != 0 || (a2 & 1) != 0 )
  {
    v3 = 1;
    v4 = 5;
  }
  else
  {
    v3 = 0;
    v4 = 4;
  }
  if ( (a1 & 2) != 0 && (a2 & 2) != 0 )
    v5 = 2;
  else
    v5 = 0;
  if ( (a1 & 4) != 0 && (a2 & 4) != 0 )
    v6 = v5 | v4;
  else
    v6 = v3 | v5;
  if ( (a1 & 8) != 0 || (a2 & 8) != 0 )
  {
    v7 = 8;
    v8 = 24;
  }
  else
  {
    v7 = 0;
    v8 = 16;
  }
  v9 = v6 | v7;
  if ( (a1 & 0x10) != 0 || (a2 & 0x10) != 0 )
    v9 = v6 | v8;
  if ( (a1 & 0x20) != 0 && (a2 & 0x20) != 0 )
  {
    v10 = 32;
    v11 = 96;
  }
  else
  {
    v10 = 0;
    v11 = 64;
  }
  v12 = v9 | v10;
  if ( (a1 & 0x40) != 0 && (a2 & 0x40) != 0 )
    v13 = v9 | v11;
  else
    v13 = v12;
  if ( a1 < 0 || a2 < 0 )
    v2 = 128;
  return v13 | v2;
}
