/*
 * XREFs of ??1?$CComPtr@UIAudioSystemEffects@@@ATL@@QEAA@XZ @ 0x140017124
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z @ 0x14000F8A0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x14001B470 (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$0 @ 0x14001B6F0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComPtr<IAudioSystemEffects>::~CComPtr<IAudioSystemEffects>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
