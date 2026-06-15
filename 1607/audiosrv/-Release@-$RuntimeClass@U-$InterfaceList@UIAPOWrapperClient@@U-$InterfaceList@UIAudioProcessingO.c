/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207C0
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800397E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAud_ea_1800397E0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800397F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAud_ea_1800397F0.c)
 * Callees:
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017180 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1800642BC (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        int *lpMem)
{
  unsigned int result; // eax
  unsigned int v3; // edi
  CAPOWrapperClient *(__fastcall *v4)(CAPOWrapperClient *, char); // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  HANDLE ProcessHeap; // rax

  result = ATL::SafeDecrementReferenceMultiThread(lpMem + 7);
  v3 = result;
  if ( !result )
  {
    if ( lpMem )
    {
      v4 = *(CAPOWrapperClient *(__fastcall **)(CAPOWrapperClient *, char))(*(_QWORD *)lpMem + 32LL);
      if ( v4 == CAPOWrapperClient::`scalar deleting destructor' )
      {
        *(_QWORD *)lpMem = &CAPOWrapperClient::`vftable';
        *((_QWORD *)lpMem + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
        *((_QWORD *)lpMem + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>,1,0>'};
        CAudioDGProcess::UnlockADGProcess((CAudioDGProcess *)CAPOWrapperClient::`scalar deleting destructor');
        v5 = *((_QWORD *)lpMem + 7);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        v6 = *((_QWORD *)lpMem + 6);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v7 = *((_QWORD *)lpMem + 5);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v8 = *((_QWORD *)lpMem + 4);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        lpMem[7] = -1073741823;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
      else
      {
        v4((CAPOWrapperClient *)lpMem, 1);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v3;
  }
  return result;
}
