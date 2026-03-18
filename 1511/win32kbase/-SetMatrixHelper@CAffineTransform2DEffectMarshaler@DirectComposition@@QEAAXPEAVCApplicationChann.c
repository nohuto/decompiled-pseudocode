/*
 * XREFs of ?SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C00038C4
 * Callers:
 *     ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C0003790 (-SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001B328 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetMatrixHelper(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        bool *a4)
{
  bool v5; // r11
  __int64 v6; // r10

  v5 = *a4;
  v6 = *((_QWORD *)this + 12) - *(_QWORD *)a3;
  if ( !v6 )
  {
    v6 = *((_QWORD *)this + 13) - *((_QWORD *)a3 + 1);
    if ( !v6 )
      v6 = *((_QWORD *)this + 14) - *((_QWORD *)a3 + 2);
  }
  if ( v6 )
  {
    v5 = 1;
    *((_OWORD *)this + 6) = *(_OWORD *)a3;
    *((_QWORD *)this + 14) = *((_QWORD *)a3 + 2);
  }
  if ( *((_QWORD *)this + 4) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v5 = 1;
  }
  *a4 = v5;
}
