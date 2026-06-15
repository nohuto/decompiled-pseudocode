/*
 * XREFs of ??_E?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14002D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002CFD0 (--1-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffload *__fastcall ATL::CComObject<CSystemAudioDeviceOffload>::`vector deleting destructor'(
        CSystemAudioDeviceOffload *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceOffload>::~CComObject<CSystemAudioDeviceOffload>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
