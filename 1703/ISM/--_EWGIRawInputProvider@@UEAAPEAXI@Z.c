/*
 * XREFs of ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x180060768
 * Callers:
 *     ??_EWGIRawInputProvider@@WBA@EAAPEAXI@Z @ 0x180061D00 (--_EWGIRawInputProvider@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800607AC (--1WGIRawInputProvider@@UEAA@XZ.c)
 */

WGIRawInputProvider *__fastcall WGIRawInputProvider::`vector deleting destructor'(WGIRawInputProvider *this, char a2)
{
  WGIRawInputProvider::~WGIRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
