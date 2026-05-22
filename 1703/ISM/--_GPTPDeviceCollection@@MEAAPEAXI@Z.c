/*
 * XREFs of ??_GPTPDeviceCollection@@MEAAPEAXI@Z @ 0x180073540
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1PTPDeviceCollection@@MEAA@XZ @ 0x180073584 (--1PTPDeviceCollection@@MEAA@XZ.c)
 */

PTPDeviceCollection *__fastcall PTPDeviceCollection::`scalar deleting destructor'(PTPDeviceCollection *this, char a2)
{
  PTPDeviceCollection::~PTPDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
