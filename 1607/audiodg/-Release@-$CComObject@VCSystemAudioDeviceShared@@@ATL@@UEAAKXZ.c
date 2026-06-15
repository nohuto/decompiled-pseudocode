/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x1400113C0
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140019A80 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140019A90 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ @ 0x140019AA0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ @ 0x140019AB0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140011240 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140026738 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

unsigned int __fastcall ATL::CComObject<CSystemAudioDeviceShared>::Release(int *Block)
{
  unsigned int result; // eax
  unsigned int v3; // edi
  CSystemAudioDeviceShared *(__fastcall *v4)(CSystemAudioDeviceShared *, char); // rax

  result = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 86);
  v3 = result;
  if ( !result )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(CSystemAudioDeviceShared *(__fastcall **)(CSystemAudioDeviceShared *, char))(*(_QWORD *)Block + 168LL);
      if ( v4 == ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor' )
        ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'(
          (CSystemAudioDeviceShared *)Block,
          v3 + 1);
      else
        v4((CSystemAudioDeviceShared *)Block, v3 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
    return v3;
  }
  return result;
}
