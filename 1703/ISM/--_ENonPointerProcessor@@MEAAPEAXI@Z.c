/*
 * XREFs of ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x18005A49C
 * Callers:
 *     ??_ENonPointerProcessor@@O7EAAPEAXI@Z @ 0x18005A800 (--_ENonPointerProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x18005A4E0 (--1NonPointerProcessor@@MEAA@XZ.c)
 */

NonPointerProcessor *__fastcall NonPointerProcessor::`vector deleting destructor'(NonPointerProcessor *this, char a2)
{
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
