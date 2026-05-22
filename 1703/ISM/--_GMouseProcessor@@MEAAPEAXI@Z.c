/*
 * XREFs of ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x18005876C
 * Callers:
 *     ??_EMouseProcessor@@O7EAAPEAXI@Z @ 0x180059DF0 (--_EMouseProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180058810 (--1MouseProcessor@@MEAA@XZ.c)
 */

MouseProcessor *__fastcall MouseProcessor::`scalar deleting destructor'(MouseProcessor *this, char a2)
{
  MouseProcessor::~MouseProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
