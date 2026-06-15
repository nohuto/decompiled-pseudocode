/*
 * XREFs of ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140005EB0
 * Callers:
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140005E20 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140005EE8 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CAudioDeviceGraph *__fastcall ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(
        CAudioDeviceGraph *Block,
        char a2)
{
  ATL::CComObject<CAudioDeviceGraph>::~CComObject<CAudioDeviceGraph>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
