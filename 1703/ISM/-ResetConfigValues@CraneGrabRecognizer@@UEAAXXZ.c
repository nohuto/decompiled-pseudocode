/*
 * XREFs of ?ResetConfigValues@CraneGrabRecognizer@@UEAAXXZ @ 0x180039D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CraneGrabRecognizer::ResetConfigValues(CraneGrabRecognizer *this)
{
  *((_WORD *)this + 26) = CraneGrabRecognizer::s_maximumFingerSeparation;
  *((_WORD *)this + 27) = CraneGrabRecognizer::s_maximumGrabSeparation;
  *((_WORD *)this + 28) = CraneGrabRecognizer::s_minimumPickUpAltitude;
}
