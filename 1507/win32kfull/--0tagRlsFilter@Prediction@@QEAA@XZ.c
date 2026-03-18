/*
 * XREFs of ??0tagRlsFilter@Prediction@@QEAA@XZ @ 0x1C01C4088
 * Callers:
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C3FB8 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C400C (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

Prediction::tagRlsFilter *__fastcall Prediction::tagRlsFilter::tagRlsFilter(Prediction::tagRlsFilter *this)
{
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>((char *)this);
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>((char *)this + 24);
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>((char *)this + 48);
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>((char *)this + 72);
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>((char *)this + 96);
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>((char *)this + 120);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>((char *)this + 144);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>((char *)this + 216);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>((char *)this + 288);
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  return this;
}
