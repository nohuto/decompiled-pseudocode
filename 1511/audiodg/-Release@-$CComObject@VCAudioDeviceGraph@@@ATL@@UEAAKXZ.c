/*
 * XREFs of ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140006460
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140006230 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Release@CProtectedOutputController@@UEAAKXZ @ 0x140016B90 (-Release@CProtectedOutputController@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x140019D40 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x140019D50 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140006520 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140008530 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // ebp
  __int64 (__fastcall *v4)(void *); // rbx
  __int64 (__fastcall *v5)(CAudioDGModule *__hidden); // rdi

  v2 = _InterlockedDecrement(Block + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)Block + 168LL);
      if ( v4 == ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor' )
        ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'((void *)Block);
      else
        ((void (__fastcall *)(volatile signed __int32 *, __int64))v4)(Block, 1LL);
    }
    v5 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
    if ( v5 == CAudioDGModule::Unlock )
      CAudioDGModule::Unlock(ATL::_pAtlModule);
    else
      v5(ATL::_pAtlModule);
  }
  return v2;
}
