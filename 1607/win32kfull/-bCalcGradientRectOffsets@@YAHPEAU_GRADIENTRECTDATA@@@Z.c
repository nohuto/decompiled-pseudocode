/*
 * XREFs of ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C0067FE0
 * Callers:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C006BA14 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCalcGradientRectOffsets(struct _GRADIENTRECTDATA *a1)
{
  int v1; // ebx
  int v3; // r11d
  int v4; // r8d
  int v5; // esi
  int v6; // r9d
  int v7; // edx
  int v8; // r10d
  int v9; // ecx
  bool v10; // cc
  __int64 result; // rax
  int v12; // r10d
  int v13; // esi
  int v14; // r9d
  int v15; // ebx

  v1 = *((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 5);
  v4 = v3;
  v5 = *((_DWORD *)a1 + 7);
  v6 = *(_DWORD *)a1;
  v7 = *((_DWORD *)a1 + 4);
  if ( v1 > v3 )
    v4 = *((_DWORD *)a1 + 1);
  v8 = *((_DWORD *)a1 + 6);
  if ( *((_DWORD *)a1 + 3) < v5 )
    v5 = *((_DWORD *)a1 + 3);
  v9 = *((_DWORD *)a1 + 4);
  *((_DWORD *)a1 + 9) = v4;
  if ( v6 > v7 )
    v9 = v6;
  v10 = *((_DWORD *)a1 + 2) < v8;
  *((_DWORD *)a1 + 8) = v9;
  if ( v10 )
    v8 = *((_DWORD *)a1 + 2);
  result = 0LL;
  v12 = v8 - v9;
  v13 = v5 - v4;
  v14 = v6 - v7;
  *((_DWORD *)a1 + 10) = v12;
  *((_DWORD *)a1 + 11) = v13;
  if ( v14 <= 0 )
    v14 = 0;
  v15 = v1 - v3;
  *((_DWORD *)a1 + 44) = v14;
  if ( v15 <= 0 )
    v15 = 0;
  *((_DWORD *)a1 + 45) = v15;
  if ( v12 > 0 && v13 > 0 )
    return 1LL;
  return result;
}
