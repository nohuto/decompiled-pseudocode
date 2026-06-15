/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14002C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140017570 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 */

CSystemAudioDeviceShared *__fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::`vector deleting destructor'(
        CSystemAudioDeviceShared *Block,
        char a2)
{
  CSystemAudioDeviceShared::~CSystemAudioDeviceShared(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
