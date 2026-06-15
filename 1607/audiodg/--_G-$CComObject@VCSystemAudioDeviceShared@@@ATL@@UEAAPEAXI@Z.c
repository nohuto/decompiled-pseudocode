/*
 * XREFs of ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140011240
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x1400113C0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x140011324 (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CSystemAudioDeviceShared *__fastcall ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'(
        CSystemAudioDeviceShared *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceShared>::~CComObject<CSystemAudioDeviceShared>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
