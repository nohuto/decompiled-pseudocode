/*
 * XREFs of ??_EInputEdgyNotifier@@UEAAPEAXI@Z @ 0x180024B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1InputEdgyNotifier@@UEAA@XZ @ 0x180024B74 (--1InputEdgyNotifier@@UEAA@XZ.c)
 */

InputEdgyNotifier *__fastcall InputEdgyNotifier::`vector deleting destructor'(InputEdgyNotifier *this, char a2)
{
  InputEdgyNotifier::~InputEdgyNotifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
