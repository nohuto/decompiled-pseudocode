/*
 * XREFs of ??_G?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z @ 0x140029BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140029A04 (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CSystemAudioDeviceExclusive>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CSystemAudioDeviceExclusive>::~CComAggObject<CSystemAudioDeviceExclusive>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
