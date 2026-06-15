/*
 * XREFs of ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140005E20
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005C10 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x1400197C0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x1400197D0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140005EB0 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140026738 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::Release(int *Block)
{
  unsigned int v2; // edi
  __int64 (__fastcall *v3)(void *); // rax

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v3 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)Block + 168LL);
      if ( v3 == ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor' )
        ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(Block);
      else
        ((void (__fastcall *)(int *, _QWORD))v3)(Block, v2 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
