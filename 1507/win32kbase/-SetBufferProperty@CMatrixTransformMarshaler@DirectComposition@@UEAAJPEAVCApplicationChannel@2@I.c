/*
 * XREFs of ?SetBufferProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0029080
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C0028F84 (-SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::SetBufferProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const struct D2D_MATRIX_3X2_F *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // ebx

  if ( a3 == 6 && a5 == 24 )
  {
    v7 = DirectComposition::CMatrixTransformMarshaler::SetMatrixHelper(this, a2, a4, a6);
    if ( v7 >= 0 )
      Win32FreePool(a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
