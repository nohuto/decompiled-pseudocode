/*
 * XREFs of RmActivityImportanceTakeMostImportant @ 0x1800021F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmActivityImportanceTakeMostImportant(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int16 v4; // r9
  __int16 v5; // ax
  unsigned __int16 v6; // r9
  __int16 v7; // ax
  __int16 v8; // ax
  __int16 v9; // ax
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
  {
    v13 = a2;
    goto LABEL_4;
  }
  if ( (a2 & 1) != 0 )
  {
    v4 = ((unsigned __int16)a1 >> 1) & 7;
    if ( v4 <= (unsigned __int16)(((unsigned __int16)a2 >> 1) & 7) )
      LOBYTE(v4) = ((unsigned __int16)a2 >> 1) & 7;
    v5 = ((unsigned __int8)(2 * v4) ^ 1) & 0xE ^ 1;
    v6 = ((unsigned __int16)a1 >> 4) & 3;
    if ( v6 <= (unsigned __int16)(((unsigned __int16)a2 >> 4) & 3) )
      LOBYTE(v6) = ((unsigned __int16)a2 >> 4) & 3;
    v7 = ((unsigned __int8)v5 ^ (unsigned __int8)(16 * v6)) & 0x30 ^ v5;
    v8 = ((unsigned __int8)v7 ^ (((((unsigned __int8)a1 | (unsigned __int8)a2) & 0x40) != 0) << 6)) & 0x40 ^ v7;
    v9 = (v8 ^ ((((a1 | a2) & 0x80u) != 0) << 7)) & 0x80 ^ v8;
    LOWORD(v13) = (v9 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x100) != 0) << 8)) & 0x100 ^ v9;
    v10 = HIBYTE(a1);
    if ( HIBYTE(a1) < HIBYTE(a2) )
    {
      BYTE2(v13) = BYTE2(a2);
      HIBYTE(v13) = HIBYTE(a2);
      goto LABEL_4;
    }
    if ( HIBYTE(a1) > HIBYTE(a2) )
    {
      HIBYTE(v13) = HIBYTE(a1);
      v11 = HIWORD(a1);
    }
    else
    {
      v11 = HIWORD(a1);
      v12 = HIWORD(a2);
      HIBYTE(v13) = v10;
      if ( (unsigned __int8)v11 <= (unsigned __int8)v12 )
      {
        BYTE2(v13) = v12;
        goto LABEL_4;
      }
    }
    BYTE2(v13) = v11;
    goto LABEL_4;
  }
  v13 = a1;
LABEL_4:
  *a3 = v13;
  return 0LL;
}
