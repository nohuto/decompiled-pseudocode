/*
 * XREFs of ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C0026230
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C0025898 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?lError@HFDBASIS32@@QEAAJXZ @ 0x1C0026584 (-lError@HFDBASIS32@@QEAAJXZ.c)
 *     ?lParentErrorDividedBy4@HFDBASIS32@@QEAAJXZ @ 0x1C00B4744 (-lParentErrorDividedBy4@HFDBASIS32@@QEAAJXZ.c)
 */

__int64 __fastcall BEZIER32::bNext(BEZIER32 *this, struct _POINTFIX *a2)
{
  __int64 result; // rax
  HFDBASIS32 *v4; // r10
  int v5; // eax
  HFDBASIS32 *v6; // r11
  HFDBASIS32 *v7; // r10
  HFDBASIS32 *v8; // rcx
  int v9; // r9d
  HFDBASIS32 *v10; // r10
  HFDBASIS32 *v11; // r11
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // eax

  a2->x = *((_DWORD *)this + 9) + ((*((_DWORD *)this + 1) + 4096) >> 13);
  a2->y = *((_DWORD *)this + 10) + ((*((_DWORD *)this + 5) + 4096) >> 13);
  if ( !*(_DWORD *)this )
    return 0LL;
  HFDBASIS32::lError((BEZIER32 *)((char *)this + 20));
  v5 = HFDBASIS32::lError(v4);
  v8 = v7;
  if ( v5 <= v9 )
    v8 = v6;
  if ( (int)HFDBASIS32::lError(v8) > 523776 )
  {
    v18 = *((_DWORD *)v10 + 3);
    v19 = *((_DWORD *)v10 + 1);
    v20 = (v18 + *((_DWORD *)v10 + 2)) >> 3;
    *((_DWORD *)v10 + 2) = v20;
    *((_DWORD *)v10 + 1) = (v19 - v20) >> 1;
    *((_DWORD *)v10 + 3) = v18 >> 2;
    v21 = *((_DWORD *)v11 + 3);
    v22 = (v21 + *((_DWORD *)v11 + 2)) >> 3;
    *((_DWORD *)v11 + 1) = (*((_DWORD *)v11 + 1) - v22) >> 1;
    *((_DWORD *)v11 + 2) = v22;
    *((_DWORD *)v11 + 3) = v21 >> 2;
    *(_DWORD *)this *= 2;
  }
  while ( (*(_DWORD *)this & 1) == 0
       && (int)HFDBASIS32::lParentErrorDividedBy4(v10) <= 130944
       && (int)HFDBASIS32::lParentErrorDividedBy4(v11) <= 130944 )
  {
    v23 = *((_DWORD *)v10 + 2);
    *((_DWORD *)v10 + 3) *= 4;
    *((_DWORD *)v10 + 1) = v23 + 2 * *((_DWORD *)v10 + 1);
    *((_DWORD *)v10 + 2) = 8 * v23 - *((_DWORD *)v10 + 3);
    v24 = *((_DWORD *)v11 + 2);
    v25 = *((_DWORD *)v11 + 1);
    *((_DWORD *)v11 + 3) *= 4;
    *((_DWORD *)v11 + 1) = v24 + 2 * v25;
    *((_DWORD *)v11 + 2) = 8 * v24 - *((_DWORD *)v11 + 3);
    *(int *)this >>= 1;
  }
  --*(_DWORD *)this;
  v12 = *((_DWORD *)v10 + 2);
  v13 = *((_DWORD *)v10 + 1);
  *(_DWORD *)v10 += v13;
  *((_DWORD *)v10 + 1) = v12 + v13;
  v14 = v12 - *((_DWORD *)v10 + 3);
  *((_DWORD *)v10 + 3) = v12;
  *((_DWORD *)v10 + 2) = v12 + v14;
  result = 1LL;
  v15 = *((_DWORD *)v11 + 2);
  v16 = *((_DWORD *)v11 + 1);
  *(_DWORD *)v11 += v16;
  *((_DWORD *)v11 + 1) = v15 + v16;
  v17 = v15 - *((_DWORD *)v11 + 3);
  *((_DWORD *)v11 + 3) = v15;
  *((_DWORD *)v11 + 2) = v15 + v17;
  return result;
}
