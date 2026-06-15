/*
 * XREFs of ??_G?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z @ 0x14002DBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemAudioDeviceSharedNew@@UEAA@XZ @ 0x14000E9B8 (--1CSystemAudioDeviceSharedNew@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CSystemAudioDeviceSharedNew *__fastcall ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::`scalar deleting destructor'(
        CSystemAudioDeviceSharedNew *Block,
        char a2)
{
  CSystemAudioDeviceSharedNew::~CSystemAudioDeviceSharedNew(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
