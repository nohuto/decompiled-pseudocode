/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140009000
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x14001A000 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x14001A010 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ @ 0x14001A020 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ @ 0x14001A030 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140008FA0 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // ebp
  CSystemAudioDeviceShared *(__fastcall *v4)(CSystemAudioDeviceShared *, char); // rbx
  __int64 (__fastcall *v5)(CAudioDGModule *); // rdi

  v2 = _InterlockedDecrement(Block + 86);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(CSystemAudioDeviceShared *(__fastcall **)(CSystemAudioDeviceShared *, char))(*(_QWORD *)Block + 168LL);
      if ( v4 == ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor' )
        ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'((CSystemAudioDeviceShared *)Block, 1);
      else
        v4((CSystemAudioDeviceShared *)Block, 1);
    }
    v5 = *(__int64 (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL);
    if ( v5 == CAudioDGModule::Unlock )
      CAudioDGModule::Unlock(ATL::_pAtlModule);
    else
      v5(ATL::_pAtlModule);
  }
  return v2;
}
