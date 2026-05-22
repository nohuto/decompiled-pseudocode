/*
 * XREFs of ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x180019D3C
 * Callers:
 *     ??_EDWMInputTarget@@WCI@EAAPEAXI@Z @ 0x18001B030 (--_EDWMInputTarget@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x180019E4C (--1DWMInputTarget@@UEAA@XZ.c)
 */

DWMInputTarget *__fastcall DWMInputTarget::`scalar deleting destructor'(DWMInputTarget *this, char a2)
{
  DWMInputTarget::~DWMInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
