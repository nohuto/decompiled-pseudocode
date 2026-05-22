/*
 * XREFs of ??_GMobileCursor@@MEAAPEAXI@Z @ 0x180026B60
 * Callers:
 *     ??_EMobileCursor@@O7EAAPEAXI@Z @ 0x180027100 (--_EMobileCursor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1MobileCursor@@MEAA@XZ @ 0x180026BA4 (--1MobileCursor@@MEAA@XZ.c)
 */

MobileCursor *__fastcall MobileCursor::`scalar deleting destructor'(MobileCursor *this, char a2)
{
  MobileCursor::~MobileCursor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
