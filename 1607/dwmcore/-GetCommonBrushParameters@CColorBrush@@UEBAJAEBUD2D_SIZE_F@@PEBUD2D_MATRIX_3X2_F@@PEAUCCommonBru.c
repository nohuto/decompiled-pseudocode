/*
 * XREFs of ?GetCommonBrushParameters@CColorBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x180139400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorBrush::GetCommonBrushParameters(
        CColorBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CCommonBrushParameters *a4,
        struct CShape **a5)
{
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-18h]

  if ( a5 )
    *a5 = 0LL;
  *(_QWORD *)&v6 = 0LL;
  *((_OWORD *)a4 + 2) = _xmm;
  *((_QWORD *)a4 + 8) = 0LL;
  result = 0LL;
  *((_DWORD *)a4 + 29) = 0;
  *((_QWORD *)a4 + 22) = 0LL;
  *((_DWORD *)a4 + 57) = 0;
  *((_DWORD *)a4 + 72) = 0;
  *((struct D2D_SIZE_F *)&v6 + 1) = *a2;
  *(_OWORD *)a4 = v6;
  *((_OWORD *)a4 + 1) = v6;
  *((_OWORD *)a4 + 2) = *(_OWORD *)((char *)this + 120);
  return result;
}
