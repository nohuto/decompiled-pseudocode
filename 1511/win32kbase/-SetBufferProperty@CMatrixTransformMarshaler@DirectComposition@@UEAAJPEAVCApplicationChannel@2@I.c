/*
 * XREFs of ?SetBufferProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0015CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C0015BB0 (-SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEB.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::SetBufferProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const struct D2D_MATRIX_3X2_F *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v7; // ebx

  if ( a3 == 6 && a5 == 24 )
  {
    v7 = 0;
    DirectComposition::CMatrixTransformMarshaler::SetMatrixHelper(this, a2, a4, a6);
    Win32FreePool(a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
