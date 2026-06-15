/*
 * XREFs of ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005710
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140001764 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001E14 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140005F80 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006600 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::RemovePipe(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, CAudioDeviceGraph **); // rcx
  void (__fastcall *v4)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  int (*v5)(CAudioDeviceGraph *__hidden, struct CPipeInstance *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  CAudioDeviceGraph *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v9 = 0LL;
  if ( !v2 )
    return 2147500034LL;
  v4 = **v2;
  if ( (char *)v4 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
    ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v9);
  else
    v4(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v9);
  if ( !v9 )
    return 2147500034LL;
  v5 = *(int (**)(CAudioDeviceGraph *__hidden, struct CPipeInstance *))(*(_QWORD *)v9 + 48LL);
  if ( v5 == CAudioDeviceGraph::RemovePipe )
    v6 = CAudioDeviceGraph::RemovePipe(v9, a2);
  else
    v6 = ((__int64 (__fastcall *)(CAudioDeviceGraph *, struct CPipeInstance *))v5)(v9, a2);
  v7 = v6;
  if ( v9 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
