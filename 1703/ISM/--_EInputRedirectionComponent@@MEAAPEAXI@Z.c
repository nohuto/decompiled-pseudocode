/*
 * XREFs of ??_EInputRedirectionComponent@@MEAAPEAXI@Z @ 0x180082568
 * Callers:
 *     ??_EInputRedirectionComponent@@OBI@EAAPEAXI@Z @ 0x180083310 (--_EInputRedirectionComponent@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1InputRedirectionComponent@@MEAA@XZ @ 0x1800825AC (--1InputRedirectionComponent@@MEAA@XZ.c)
 */

InputRedirectionComponent *__fastcall InputRedirectionComponent::`vector deleting destructor'(
        InputRedirectionComponent *this,
        char a2)
{
  InputRedirectionComponent::~InputRedirectionComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
