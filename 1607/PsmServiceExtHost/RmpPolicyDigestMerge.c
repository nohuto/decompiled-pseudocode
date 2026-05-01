/*
 * XREFs of RmpPolicyDigestMerge @ 0x180014A50
 * Callers:
 *     RmpActivityHostUpdateDigests @ 0x180014920 (RmpActivityHostUpdateDigests.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestMerge(char a1, char a2)
{
  __int16 v2; // r8
  __int16 v3; // ax
  bool v4; // r9
  __int16 v5; // ax
  bool v6; // r9
  __int16 v7; // ax
  bool v8; // r9
  __int16 v9; // ax
  bool v10; // r9
  __int16 v11; // ax
  bool v12; // r9
  __int16 v13; // ax
  char v14; // r9
  __int16 v15; // ax

  v2 = 0;
  v3 = (a1 & 1) != 0 || (a2 & 1) != 0;
  v4 = (a1 & 2) != 0 && (a2 & 2) != 0;
  v5 = ((unsigned __int8)v3 ^ (unsigned __int8)(2 * v4)) & 2 ^ v3;
  v6 = (a1 & 4) != 0 && (a2 & 4) != 0;
  v7 = ((unsigned __int8)v5 ^ (unsigned __int8)(4 * v6)) & 4 ^ v5;
  v8 = (a1 & 8) != 0 || (a2 & 8) != 0;
  v9 = ((unsigned __int8)v7 ^ (unsigned __int8)(8 * v8)) & 8 ^ v7;
  v10 = (a1 & 0x10) != 0 || (a2 & 0x10) != 0;
  v11 = ((unsigned __int8)v9 ^ (unsigned __int8)(16 * v10)) & 0x10 ^ v9;
  v12 = (a1 & 0x20) != 0 && (a2 & 0x20) != 0;
  v13 = ((unsigned __int8)v11 ^ (unsigned __int8)(32 * v12)) & 0x20 ^ v11;
  v14 = (a1 & 0x40) != 0 && (a2 & 0x40) != 0;
  v15 = ((unsigned __int8)v13 ^ (unsigned __int8)(v14 << 6)) & 0x40 ^ v13;
  if ( a1 < 0 || a2 < 0 )
    v2 = 1;
  return (v15 ^ (v2 << 7)) & 0x80 ^ v15;
}
