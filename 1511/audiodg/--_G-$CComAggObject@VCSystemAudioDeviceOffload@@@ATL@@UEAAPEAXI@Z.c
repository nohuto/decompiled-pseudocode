/*
 * XREFs of ??_G?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x14002D250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x14002CF44 (--1-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CSystemAudioDeviceOffload>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CSystemAudioDeviceOffload>::~CComAggObject<CSystemAudioDeviceOffload>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
