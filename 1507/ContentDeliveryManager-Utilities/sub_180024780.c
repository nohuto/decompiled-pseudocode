/*
 * XREFs of sub_180024780 @ 0x180024780
 * Callers:
 *     unknown_libname_9 @ 0x1800227D0 (unknown_libname_9.c)
 *     sub_180023E08 @ 0x180023E08 (sub_180023E08.c)
 *     sub_180024A0C @ 0x180024A0C (sub_180024A0C.c)
 *     sub_180024EA4 @ 0x180024EA4 (sub_180024EA4.c)
 *     sub_1800251C0 @ 0x1800251C0 (sub_1800251C0.c)
 * Callees:
 *     sub_180025730 @ 0x180025730 (sub_180025730.c)
 */

__int64 __fastcall sub_180024780(_WORD *a1, int a2)
{
  __int16 v4; // cx
  double v7; // xmm0_8
  int v8; // r11d
  __int16 v9; // r14
  __int16 v10; // cx
  unsigned __int16 v11; // si
  __int16 v12; // dx
  __int16 v13; // r9
  __int16 v14; // cx
  __int64 v15; // r8
  __int16 v16; // r11
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r8
  __int16 v19; // ax
  unsigned __int16 v20; // dx
  __int16 v21; // ax
  bool v22; // zf

  v4 = (a1[3] >> 4) & 0x7FF;
  if ( v4 == 2047 )
  {
    if ( (a1[3] & 0xF) != 0 || a1[2] || a1[1] || *a1 )
      return 2;
    else
      return 1;
  }
  if ( !v4 )
  {
    v4 = sub_180025730(a1);
    if ( v4 > 0 )
      return 0LL;
  }
  if ( a2 <= 0 || 2047 - v4 > a2 )
  {
    if ( -v4 < a2 )
    {
      a1[3] &= 0x800Fu;
      a1[3] |= 16 * (v4 + a2);
      return 0xFFFFFFFFLL;
    }
    v8 = v4 + a2 - 1;
    v9 = a1[3] & 0x8000;
    v10 = a1[3] & 0xF | 0x10;
    a1[3] = v10;
    if ( (unsigned int)(v8 + 53) > 0x34 )
    {
      a1[3] = v9;
      *(_DWORD *)(a1 + 1) = 0;
      *a1 = 0;
    }
    else
    {
      v11 = 0;
      if ( (__int16)v8 <= -16 )
      {
        v12 = a1[1];
        v13 = v10;
        v14 = a1[2];
        v15 = (unsigned __int16)(((unsigned __int16)(-16 - v8) >> 4) + 1);
        LOWORD(v8) = 16 * v15 + v8;
        do
        {
          v11 = *a1 | (v11 != 0);
          *a1 = v12;
          v12 = v14;
          v14 = v13;
          v13 = 0;
          --v15;
        }
        while ( v15 );
        a1[3] = 0;
        a1[2] = v14;
        a1[1] = v12;
      }
      v16 = -(__int16)v8;
      if ( v16 )
      {
        v17 = a1[1];
        v11 = (v11 != 0) | (unsigned __int16)(*a1 << (16 - v16));
        v18 = a1[2];
        *a1 = (*a1 >> v16) | (v17 << (16 - v16));
        v19 = (v17 >> v16) | (v18 << (16 - v16));
        v20 = a1[3];
        a1[1] = v19;
        a1[3] = v20 >> v16;
        a1[2] = (v18 >> v16) | (v20 << (16 - v16));
      }
      a1[3] |= v9;
      v21 = a1[3];
      if ( v11 > 0x8000u || v11 == 0x8000 && (*(_BYTE *)a1 & 1) != 0 )
      {
        v22 = (*a1)++ == 0xFFFF;
        if ( v22 )
        {
          v22 = a1[1]++ == 0xFFFF;
          if ( v22 )
          {
            v22 = a1[2]++ == 0xFFFF;
            if ( v22 )
            {
              a1[3] = v21 + 1;
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
      if ( v21 != v9 || a1[2] || a1[1] || *a1 )
        return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  v7 = *(double *)&qword_18003A050;
  if ( (__int16)a1[3] < 0 )
    v7 = -*(double *)&qword_18003A050;
  *(double *)a1 = v7;
  return 1LL;
}
