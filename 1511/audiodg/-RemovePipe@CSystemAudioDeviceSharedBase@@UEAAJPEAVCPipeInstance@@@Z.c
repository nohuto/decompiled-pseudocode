/*
 * XREFs of ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005B60
 * Callers:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140003378 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x1400036BC (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140006560 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006F20 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::RemovePipe(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, CAudioDeviceGraph **); // rbx
  void (__fastcall *v4)(_QWORD, GUID *, CAudioDeviceGraph **); // rdi
  int (*v5)(CAudioDeviceGraph *__hidden, struct CPipeInstance *); // rdi
  int v6; // eax
  unsigned int v7; // esi
  CAudioDeviceGraph *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v9 = 0LL;
  if ( !v2 )
    return (unsigned int)-2147467262;
  v4 = **v2;
  if ( (char *)v4 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
    ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v9);
  else
    v4(v2, &GUID_0576b5aa_7951_4359_8e0c_367830add031, &v9);
  if ( v9 )
  {
    v5 = *(int (**)(CAudioDeviceGraph *__hidden, struct CPipeInstance *))(*(_QWORD *)v9 + 48LL);
    if ( v5 == CAudioDeviceGraph::RemovePipe )
      v6 = CAudioDeviceGraph::RemovePipe(v9, a2);
    else
      v6 = ((__int64 (__fastcall *)(CAudioDeviceGraph *, struct CPipeInstance *))v5)(v9, a2);
    v7 = v6;
    if ( v9 )
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v7;
}
