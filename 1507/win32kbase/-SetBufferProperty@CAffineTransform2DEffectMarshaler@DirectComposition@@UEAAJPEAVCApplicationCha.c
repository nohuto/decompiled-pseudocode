/*
 * XREFs of ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00DD620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetBufferProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  *a6 = 0;
  if ( a3 != 2 )
    return DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  if ( a5 == 24 )
    return DirectComposition::CAffineTransform2DEffectMarshaler::SetMatrixHelper(
             this,
             a2,
             (const struct D2D_MATRIX_3X2_F *)a4,
             a6);
  return 3221225485LL;
}
