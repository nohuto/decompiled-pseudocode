/*
 * XREFs of sub_180023C04 @ 0x180023C04
 * Callers:
 *     sub_180021A70 @ 0x180021A70 (sub_180021A70.c)
 *     sub_180023B7C @ 0x180023B7C (sub_180023B7C.c)
 *     sub_180023CBC @ 0x180023CBC (sub_180023CBC.c)
 * Callees:
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_1800255A0 @ 0x1800255A0 (sub_1800255A0.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 */

__int64 __fastcall sub_180023C04(__int64 a1, int a2, float a3)
{
  float v3; // xmm6_4
  __int16 v6; // ax
  float v7; // xmm0_4
  __int16 v9; // [rsp+48h] [rbp+10h] BYREF
  float v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v10 = a3;
  if ( a2 <= 0 )
    return a1;
  if ( a2 == 1 )
  {
LABEL_9:
    *(float *)a1 = v3;
    return a1;
  }
  v6 = sub_18002567C(&v9, &v10);
  if ( !v6 )
  {
    v3 = v10;
    goto LABEL_9;
  }
  if ( v6 <= 0 )
  {
    sub_1800255A0(&v10, 12LL);
    sub_180023230((unsigned __int16 *)&v10, v9);
    v7 = v10;
    *(float *)a1 = v10;
    *(float *)(a1 + 4) = a3 - v7;
    if ( a2 > 2 )
      *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(float *)a1 = v10;
    *(_DWORD *)(a1 + 4) = 0;
  }
  return a1;
}
