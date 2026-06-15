/*
 * XREFs of ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140003378
 * Callers:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x1400036BC (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003DB0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     GetStreamingResourceManager @ 0x1400054D0 (GetStreamingResourceManager.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005B60 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x14000C110 (-OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromSaDevice(struct CPipeInstance **this, struct ISaDeviceInternal *a2)
{
  int (*v4)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rdi
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 48LL);
  if ( v4 == CSystemAudioDeviceSharedBase::RemovePipe )
    v5 = CSystemAudioDeviceSharedBase::RemovePipe(a2, *this);
  else
    v5 = ((__int64 (__fastcall *)(struct ISaDeviceInternal *, struct CPipeInstance *))v4)(a2, *this);
  v6 = v5;
  *((_BYTE *)this + 17) = v5 < 0;
  CPipeInstance::OnDisconnectedFromPump(*this);
  v9 = 0LL;
  GetStreamingResourceManager(a2, &v9);
  v7 = v9;
  if ( v9 && this[6] )
  {
    (*(void (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v9 + 32LL))(v9, this[6]);
    this[6] = 0LL;
    v7 = v9;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
