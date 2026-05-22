/*
 * XREFs of ??_EPointerProcessor@@MEAAPEAXI@Z @ 0x18005D844
 * Callers:
 *     ??_EPointerProcessor@@O7EAAPEAXI@Z @ 0x18005E8C0 (--_EPointerProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1PointerProcessor@@MEAA@XZ @ 0x18005D888 (--1PointerProcessor@@MEAA@XZ.c)
 */

PointerProcessor *__fastcall PointerProcessor::`vector deleting destructor'(PointerProcessor *this, char a2)
{
  PointerProcessor::~PointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
