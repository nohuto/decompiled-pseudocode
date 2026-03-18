/*
 * XREFs of ?GetCommonBrushParameters@CColorBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@@Z @ 0x1800BD290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorBrush::GetCommonBrushParameters(
        CColorBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CCommonBrushParameters *a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-18h]

  *(_QWORD *)&v6 = 0LL;
  *((struct D2D_SIZE_F *)&v6 + 1) = *a2;
  *(_OWORD *)a4 = v6;
  v4 = *((_OWORD *)this + 3);
  *((_QWORD *)a4 + 4) = 0LL;
  *((_BYTE *)a4 + 70) = 0;
  result = 0LL;
  *((_OWORD *)a4 + 1) = v4;
  return result;
}
