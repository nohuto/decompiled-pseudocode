/*
 * XREFs of ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400057C0
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001EC8 (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140005F80 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006760 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, CAudioDeviceGraph **); // rcx
  void (__fastcall *v4)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  __int64 (__fastcall *v5)(CAudioDeviceGraph *__hidden, struct CPipeInstance *); // rax
  unsigned int v6; // eax
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
  v5 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct CPipeInstance *))(*(_QWORD *)v9 + 24LL);
  if ( v5 == CAudioDeviceGraph::AddPipeToMixSplitConnection )
    v6 = CAudioDeviceGraph::AddPipeToMixSplitConnection(v9, a2);
  else
    v6 = v5(v9, a2);
  v7 = v6;
  if ( v9 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
