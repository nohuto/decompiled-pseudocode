/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180014750
 * Callers:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  __int16 v3; // r8
  unsigned __int16 v4; // ax
  __int16 v5; // r8
  __int16 v6; // r8
  __int16 v7; // r8
  __int16 v8; // r8
  __int16 v9; // r8
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v13; // ecx
  unsigned int v14; // [rsp+8h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v2 = ((unsigned __int16)a1 >> 1) & 7;
  if ( v2 <= (unsigned __int16)(((unsigned __int16)a2 >> 1) & 7) )
    LOBYTE(v2) = ((unsigned __int16)a2 >> 1) & 7;
  v3 = ((unsigned __int8)(2 * v2) ^ 1) & 0xE ^ 1;
  v4 = ((unsigned __int16)a1 >> 4) & 3;
  if ( v4 <= (unsigned __int16)(((unsigned __int16)a2 >> 4) & 3) )
    LOBYTE(v4) = ((unsigned __int16)a2 >> 4) & 3;
  v5 = ((unsigned __int8)v3 ^ (unsigned __int8)(16 * v4)) & 0x30 ^ v3;
  v6 = ((unsigned __int8)v5 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x40) != 0) << 6)) & 0x40 ^ v5;
  v7 = (v6 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x80) != 0) << 7)) & 0x80 ^ v6;
  v8 = (v7 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x100) != 0) << 8)) & 0x100 ^ v7;
  v9 = (v8 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x200) != 0) << 9)) & 0x200 ^ v8;
  LOWORD(v14) = (v9 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x400) != 0) << 10)) & 0x400 ^ v9;
  v10 = HIBYTE(a1);
  if ( HIBYTE(a1) > HIBYTE(a2) )
  {
    HIBYTE(v14) = HIBYTE(a1);
    v13 = HIWORD(a1);
  }
  else
  {
    if ( HIBYTE(a1) < HIBYTE(a2) )
    {
      HIBYTE(v14) = HIBYTE(a2);
      v11 = HIWORD(a2);
LABEL_10:
      BYTE2(v14) = v11;
      return v14;
    }
    v13 = HIWORD(a1);
    v11 = HIWORD(a2);
    HIBYTE(v14) = v10;
    if ( (unsigned __int8)v13 <= (unsigned __int8)v11 )
      goto LABEL_10;
  }
  BYTE2(v14) = v13;
  return v14;
}
