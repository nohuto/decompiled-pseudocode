/*
 * XREFs of ??_E?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAPEAXI@Z @ 0x1400013A0
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x140001400 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ @ 0x1400014BC (--1-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
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
