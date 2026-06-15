/*
 * XREFs of ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14002B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140016AD0 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
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
