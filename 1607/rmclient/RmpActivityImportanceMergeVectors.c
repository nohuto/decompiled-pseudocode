/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x1800046D0
 * Callers:
 *     RmActivityImportanceTakeMostImportant @ 0x1800046B0 (RmActivityImportanceTakeMostImportant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // ax
  __int16 v5; // r9
  __int16 v6; // r9
  __int16 v7; // r9
  __int16 v8; // r9
  __int16 v9; // r9
  __int16 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // [rsp+8h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v3 = ((unsigned __int16)a2 >> 1) & 7;
  if ( (unsigned __int16)(((unsigned __int16)a1 >> 1) & 7) > v3 )
    v3 = ((unsigned __int16)a1 >> 1) & 7;
  v4 = ((unsigned __int16)a1 >> 4) & 3;
  if ( v4 <= (unsigned __int16)(((unsigned __int16)a2 >> 4) & 3) )
    LOBYTE(v4) = ((unsigned __int16)a2 >> 4) & 3;
  v5 = ((unsigned __int8)(2 * v3) ^ 1) & 0xE ^ 1;
  v6 = ((unsigned __int8)v5 ^ (unsigned __int8)(16 * v4)) & 0x30 ^ v5;
  v11 = HIBYTE(a1);
  v7 = ((unsigned __int8)v6 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x40) != 0) << 6)) & 0x40 ^ v6;
  v8 = (v7 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x80) != 0) << 7)) & 0x80 ^ v7;
  v9 = (v8 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x100) != 0) << 8)) & 0x100 ^ v8;
  v10 = (v9 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x200) != 0) << 9)) & 0x200 ^ v9;
  LOWORD(v14) = (v10 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x400) != 0) << 10)) & 0x400 ^ v10;
  if ( HIBYTE(a1) >= HIBYTE(a2) )
  {
    if ( HIBYTE(a1) > HIBYTE(a2) )
    {
      HIBYTE(v14) = HIBYTE(a1);
      v12 = HIWORD(a1);
    }
    else
    {
      v12 = HIWORD(a1);
      v13 = HIWORD(a2);
      HIBYTE(v14) = v11;
      if ( (unsigned __int8)v12 <= (unsigned __int8)v13 )
      {
        BYTE2(v14) = v13;
        return v14;
      }
    }
    BYTE2(v14) = v12;
    return v14;
  }
  BYTE2(v14) = BYTE2(a2);
  HIBYTE(v14) = HIBYTE(a2);
  return v14;
}
