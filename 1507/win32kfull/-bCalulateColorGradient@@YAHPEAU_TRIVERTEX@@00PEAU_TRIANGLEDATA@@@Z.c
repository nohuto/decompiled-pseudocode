/*
 * XREFs of ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C010F388
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C010ED30 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C010F538 (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 */

__int64 __fastcall bCalulateColorGradient(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG x; // r10d
  int v7; // r11d
  LONG v9; // edi
  int v11; // ebx
  LONG v12; // r8d
  int v13; // edi
  int v14; // r10d
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  __int64 *v18; // r8
  __int64 *v19; // rcx
  int Red; // eax
  int v21; // r10d
  int v22; // r9d
  _DWORD v24[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]

  x = a2->x;
  v7 = a2->y - a1->y;
  v9 = a3->x;
  v11 = a3->y - a1->y;
  v12 = a1->x;
  v13 = v9 - a1->x;
  v24[3] = v11;
  v14 = x - v12;
  v24[1] = v13;
  v24[0] = v14;
  v24[2] = v7;
  v15 = v14 * v11 - v7 * v13;
  v16 = 0;
  v24[5] = v15;
  if ( v14 < 0 )
    v16 = v14;
  v17 = 0;
  if ( v7 < 0 )
    v17 = v7;
  if ( v16 < v13 )
    v13 = v16;
  if ( v17 < v11 )
    v11 = v17;
  v24[4] = v11 + v13;
  if ( v15 < 0 )
    v15 = -v15;
  *((_DWORD *)a4 + 34) = v12;
  v18 = (__int64 *)((char *)a4 + 80);
  v25 = 0x1000000000000LL / v15;
  v19 = (__int64 *)((char *)a4 + 16);
  *((_DWORD *)a4 + 35) = a1->y;
  Red = a3->Red;
  v21 = a2->Red;
  v22 = a1->Red;
  v26 = 0x1000000000000LL % v15;
  bDoGradient(v19, (__int64 *)a4 + 6, v18, v22, v21, Red, (struct _GRADSTRUCT *)v24);
  bDoGradient(
    (__int64 *)a4 + 3,
    (__int64 *)a4 + 7,
    (__int64 *)a4 + 11,
    a1->Green,
    a2->Green,
    a3->Green,
    (struct _GRADSTRUCT *)v24);
  bDoGradient(
    (__int64 *)a4 + 4,
    (__int64 *)a4 + 8,
    (__int64 *)a4 + 12,
    a1->Blue,
    a2->Blue,
    a3->Blue,
    (struct _GRADSTRUCT *)v24);
  bDoGradient(
    (__int64 *)a4 + 5,
    (__int64 *)a4 + 9,
    (__int64 *)a4 + 13,
    a1->Alpha,
    a2->Alpha,
    a3->Alpha,
    (struct _GRADSTRUCT *)v24);
  return 1LL;
}
