/*
 * XREFs of ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810
 * Callers:
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001EC8 (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400040C0 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     GetStreamingResourceManager @ 0x1400050F0 (GetStreamingResourceManager.c)
 *     ?GetSaDeviceLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400051B0 (-GetSaDeviceLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400057C0 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x140007BD0 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140007E90 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002DE50 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::ConnectToSaDevice(
        CStreamInstance *this,
        struct ISaDeviceInternal *a2,
        const struct CPipeInstance *a3,
        __int64 a4)
{
  int StreamingResourceManager; // ebx
  void *v9; // rdx
  __int64 (*v10)(void); // rax
  int v11; // eax
  __int64 v12; // rax
  int (*v13)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rax
  struct CPipeInstance *v14; // rdx
  struct ISaDeviceInternal *v15; // rcx
  int v16; // eax
  char v17; // al
  __int64 (__fastcall *v18)(CSystemAudioDeviceSharedBase *__hidden); // rax
  __int64 SaDeviceLatency; // rax
  __int64 v21[5]; // [rsp+20h] [rbp-28h] BYREF
  GraphStreamingResourceManager *v22; // [rsp+50h] [rbp+8h] BYREF

  v21[1] = -2LL;
  v22 = 0LL;
  StreamingResourceManager = GetStreamingResourceManager(a2, &v22);
  if ( StreamingResourceManager < 0 )
    goto LABEL_21;
  StreamingResourceManager = 0;
  if ( !*((_QWORD *)this + 6) )
  {
    v9 = (void *)*((_QWORD *)this + 5);
    if ( v9 )
    {
      v10 = *(__int64 (**)(void))(*(_QWORD *)v22 + 24LL);
      if ( (char *)v10 == (char *)GraphStreamingResourceManager::RegisterProcess )
        v11 = GraphStreamingResourceManager::RegisterProcess(v22, v9, (struct ProcessRegistrationToken__ **)this + 6);
      else
        v11 = v10();
      StreamingResourceManager = v11;
    }
  }
  if ( StreamingResourceManager < 0 )
    goto LABEL_21;
  if ( a3 )
  {
    StreamingResourceManager = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
    if ( StreamingResourceManager < 0 )
      goto LABEL_21;
    v13 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 40LL);
    goto LABEL_27;
  }
  v12 = *(_QWORD *)a2;
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v13 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(v12 + 32);
LABEL_27:
    v14 = *(struct CPipeInstance **)this;
    v15 = a2;
    goto LABEL_28;
  }
  v13 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(v12 + 24);
  v14 = *(struct CPipeInstance **)this;
  v15 = a2;
  if ( v13 == CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection )
  {
    v16 = CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(a2, v14);
    goto LABEL_12;
  }
LABEL_28:
  v16 = ((__int64 (__fastcall *)(struct ISaDeviceInternal *, struct CPipeInstance *))v13)(v15, v14);
LABEL_12:
  StreamingResourceManager = v16;
  if ( v16 >= 0 )
  {
    v17 = 1;
    goto LABEL_14;
  }
LABEL_21:
  v17 = 0;
LABEL_14:
  *((_BYTE *)this + 17) = v17;
  if ( StreamingResourceManager >= 0 )
  {
    v21[0] = 0LL;
    CPipeInstance::GetLatency(*(CPipeInstance **)this, v21);
    v18 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden))(*(_QWORD *)a2 + 96LL);
    if ( v18 == CSystemAudioDeviceSharedBase::GetSaDeviceLatency )
      SaDeviceLatency = CSystemAudioDeviceSharedBase::GetSaDeviceLatency(a2);
    else
      SaDeviceLatency = v18(a2);
    CPipeInstance::OnConnectedToPump(*(CPipeInstance **)this, a4 + v21[0], SaDeviceLatency);
  }
  if ( v22 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)StreamingResourceManager;
}
