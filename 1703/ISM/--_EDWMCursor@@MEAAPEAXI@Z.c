/*
 * XREFs of ??_EDWMCursor@@MEAAPEAXI@Z @ 0x18001F134
 * Callers:
 *     ??_EDWMCursor@@OBA@EAAPEAXI@Z @ 0x18001FD30 (--_EDWMCursor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x18001F194 (--1DWMCursor@@MEAA@XZ.c)
 */

DWMCursor *__fastcall DWMCursor::`vector deleting destructor'(DWMCursor *this, char a2)
{
  DWMCursor::~DWMCursor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
