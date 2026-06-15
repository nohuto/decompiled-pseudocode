/*
 * XREFs of ??_G?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z @ 0x140013B30
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ @ 0x140013B90 (-Release@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ @ 0x140013C50 (--1-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CSystemAudioDeviceSharedNew *__fastcall ATL::CComObject<CSystemAudioDeviceSharedNew>::`scalar deleting destructor'(
        CSystemAudioDeviceSharedNew *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceSharedNew>::~CComObject<CSystemAudioDeviceSharedNew>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
