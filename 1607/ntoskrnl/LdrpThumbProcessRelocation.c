/*
 * XREFs of LdrpThumbProcessRelocation @ 0x1402156D4
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x1405546A8 (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x140215604 (LdrpArmProcessRelocation.c)
 */

__int64 __fastcall LdrpThumbProcessRelocation(unsigned __int16 *a1, __int64 a2, int a3)
{
  int v3; // r9d
  _WORD *v4; // r11
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  unsigned int v7; // r10d
  __int16 v8; // cx
  __int16 v9; // ax

  v3 = *a1 >> 12;
  v4 = (_WORD *)(a2 + (*a1 & 0xFFE));
  v5 = 1;
  if ( v3 == 5 )
  {
    return (unsigned int)LdrpArmProcessRelocation(a1, a2, a3);
  }
  else if ( v3 == 7 )
  {
    v6 = v4[1];
    v7 = a3
       + ((unsigned __int8)v6 | (v6 >> 4) & 0x700 | (unsigned __int16)(2 * ((*v4 << 11) | *v4 & 0x400)) | (((unsigned __int8)v4[3] | ((unsigned __int16)v4[3] >> 4) & 0x700 | (unsigned __int16)(2 * ((v4[2] << 11) | v4[2] & 0x400))) << 16));
    *v4 = *v4 & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v7 >> 11) | v7 & 0x800) >> 1);
    v8 = v7 & 0x700;
    v7 >>= 16;
    v4[1] = (unsigned __int8)(a3 + v6) | v6 & 0x8F00 | (16 * v8);
    v9 = v4[3];
    v4[2] = v4[2] & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v7 >> 11) | v7 & 0x800) >> 1);
    v4[3] = (unsigned __int8)v7 | v9 & 0x8F00 | (16 * (v7 & 0x700));
  }
  else
  {
    return 0;
  }
  return v5;
}
