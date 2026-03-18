/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C00707D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C002FC9C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CSystemChannel *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        DirectComposition::CSystemChannel *this,
        char a2)
{
  DirectComposition::CApplicationChannel::~CApplicationChannel(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
