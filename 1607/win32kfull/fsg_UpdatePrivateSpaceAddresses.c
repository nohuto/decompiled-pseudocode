/*
 * XREFs of fsg_UpdatePrivateSpaceAddresses @ 0x1C001BBD8
 * Callers:
 *     fs__NewTransformation @ 0x1C001AE3C (fs__NewTransformation.c)
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 * Callees:
 *     itrp_UpdateGlobalGS @ 0x1C001BD44 (itrp_UpdateGlobalGS.c)
 */

__int64 __fastcall fsg_UpdatePrivateSpaceAddresses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rbx
  unsigned int v20; // ebp
  int v21; // eax
  int v23; // [rsp+A0h] [rbp+8h]
  int v24; // [rsp+C8h] [rbp+30h]

  v12 = a3 + a4[3];
  v13 = a3 + *a4;
  v14 = *(_DWORD *)(a1 + 100);
  v15 = a3 + a4[1];
  v16 = a3 + (unsigned int)a4[2];
  v17 = a3 + a4[4];
  v18 = a3 + (unsigned int)a4[5];
  v19 = a3 + (unsigned int)a4[6];
  v20 = *(_DWORD *)(a1 + 60) >> 1;
  v23 = v14;
  v21 = *(_DWORD *)(a1 + 68);
  *a6 = v18;
  *a7 = v19;
  v24 = v21;
  if ( v20 > 0xFFFF )
    return 5120LL;
  itrp_UpdateGlobalGS(v17, v12, v13, v15, v16, a5, a2, v20, v23, v18, v21, v19, *(_QWORD *)a1);
  itrp_UpdateGlobalGS(
    a3 + a4[25],
    a3 + a4[24],
    a3 + a4[21],
    a3 + a4[22],
    a3 + (unsigned int)a4[23],
    a5,
    a2,
    v20,
    v23,
    *a6,
    v24,
    *a7,
    *(_QWORD *)a1);
  return 0LL;
}
