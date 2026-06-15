/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ @ 0x140013B90
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ @ 0x14001A1D0 (-Release@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ @ 0x14001A1E0 (-Release@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ @ 0x14001A1F0 (-Release@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ @ 0x14001A200 (-Release@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z @ 0x140013B30 (--_G-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140027358 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

unsigned int __fastcall ATL::CComObject<CSystemAudioDeviceSharedNew>::Release(int *Block)
{
  unsigned int result; // eax
  unsigned int v3; // ebp
  CSystemAudioDeviceSharedNew *(__fastcall *v4)(CSystemAudioDeviceSharedNew *, char); // rbx

  result = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 72);
  v3 = result;
  if ( !result )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(CSystemAudioDeviceSharedNew *(__fastcall **)(CSystemAudioDeviceSharedNew *, char))(*(_QWORD *)Block + 144LL);
      if ( v4 == ATL::CComObject<CSystemAudioDeviceSharedNew>::`scalar deleting destructor' )
        ATL::CComObject<CSystemAudioDeviceSharedNew>::`scalar deleting destructor'(
          (CSystemAudioDeviceSharedNew *)Block,
          v3 + 1);
      else
        v4((CSystemAudioDeviceSharedNew *)Block, 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
    return v3;
  }
  return result;
}
