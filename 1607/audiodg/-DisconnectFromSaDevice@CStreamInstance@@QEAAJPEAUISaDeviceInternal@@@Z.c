/*
 * XREFs of ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140001764
 * Callers:
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001E14 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002530 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     GetStreamingResourceManager @ 0x1400050F0 (GetStreamingResourceManager.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005710 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x140007AD0 (-OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromSaDevice(struct CPipeInstance **this, struct ISaDeviceInternal *a2)
{
  int (*v4)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rax
  struct CPipeInstance *v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 48LL);
  v5 = *this;
  if ( v4 == CSystemAudioDeviceSharedBase::RemovePipe )
    v6 = CSystemAudioDeviceSharedBase::RemovePipe(a2, v5);
  else
    v6 = ((__int64 (__fastcall *)(struct ISaDeviceInternal *, struct CPipeInstance *))v4)(a2, v5);
  v7 = v6;
  *((_BYTE *)this + 17) = v6 < 0;
  CPipeInstance::OnDisconnectedFromPump(*this);
  v10 = 0LL;
  GetStreamingResourceManager(a2, &v10);
  v8 = v10;
  if ( v10 && this[6] )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
    this[6] = 0LL;
    v8 = v10;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
