/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140013DA0
 * Callers:
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x1400044C0 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140005C20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140009820 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A7F0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A800 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A810 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140013E60 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140027358 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(int *a1)
{
  unsigned int result; // eax
  unsigned int v3; // ebp
  __int64 (__fastcall *v4)(void *); // rbx

  result = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 116);
  v3 = result;
  if ( !result )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
    {
      v4 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)a1 + 64LL);
      if ( v4 == ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor' )
        ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(a1);
      else
        ((void (__fastcall *)(int *, __int64))v4)(a1, 1LL);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
    return v3;
  }
  return result;
}
