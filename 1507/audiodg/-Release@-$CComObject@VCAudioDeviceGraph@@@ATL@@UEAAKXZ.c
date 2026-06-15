/*
 * XREFs of ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14000EB10
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ @ 0x14000E8A0 (-Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x140019DB0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x140019DC0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x14000EBD0 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140027358 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::Release(int *Block)
{
  unsigned int v2; // ebp
  __int64 (__fastcall *v3)(void *); // rbx

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v3 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)Block + 144LL);
      if ( v3 == ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor' )
        ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(Block);
      else
        ((void (__fastcall *)(int *, __int64))v3)(Block, 1LL);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
