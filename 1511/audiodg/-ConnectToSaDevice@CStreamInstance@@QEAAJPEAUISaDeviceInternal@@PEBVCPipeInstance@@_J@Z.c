/*
 * XREFs of ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003430
 * Callers:
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140003760 (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     GetStreamingResourceManager @ 0x1400054D0 (GetStreamingResourceManager.c)
 *     ?GetSaDeviceLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400055C0 (-GetSaDeviceLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005C20 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140009E20 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x14000C240 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000C600 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002F704 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::ConnectToSaDevice(
        CStreamInstance *this,
        struct ISaDeviceInternal *a2,
        const struct CPipeInstance *a3,
        __int64 a4)
{
  int StreamingResourceManager; // esi
  int (*v9)(GraphStreamingResourceManager *__hidden, void *, struct ProcessRegistrationToken__ **); // rsi
  int v10; // eax
  __int64 v11; // rax
  int (*v12)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rbx
  int v13; // eax
  char v14; // al
  __int64 (__fastcall *v15)(CSystemAudioDeviceSharedBase *__hidden); // rbx
  __int64 SaDeviceLatency; // rax
  __int64 (__fastcall *v18)(struct ISaDeviceInternal *, _QWORD); // rdi
  __int64 v19[7]; // [rsp+20h] [rbp-38h] BYREF
  GraphStreamingResourceManager *v20; // [rsp+60h] [rbp+8h] BYREF

  v19[1] = -2LL;
  v20 = 0LL;
  StreamingResourceManager = GetStreamingResourceManager(a2, &v20);
  if ( StreamingResourceManager < 0 )
    goto LABEL_27;
  StreamingResourceManager = 0;
  if ( !*((_QWORD *)this + 6) && *((_QWORD *)this + 5) )
  {
    v9 = *(int (**)(GraphStreamingResourceManager *__hidden, void *, struct ProcessRegistrationToken__ **))(*(_QWORD *)v20 + 24LL);
    if ( v9 == GraphStreamingResourceManager::RegisterProcess )
      v10 = GraphStreamingResourceManager::RegisterProcess(
              v20,
              *((void **)this + 5),
              (struct ProcessRegistrationToken__ **)this + 6);
    else
      v10 = ((__int64 (__fastcall *)(GraphStreamingResourceManager *, _QWORD, char *))v9)(
              v20,
              *((_QWORD *)this + 5),
              (char *)this + 48);
    StreamingResourceManager = v10;
  }
  if ( StreamingResourceManager < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    StreamingResourceManager = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
    if ( StreamingResourceManager < 0 )
      goto LABEL_27;
    v18 = *(__int64 (__fastcall **)(struct ISaDeviceInternal *, _QWORD))(*(_QWORD *)a2 + 40LL);
    goto LABEL_26;
  }
  v11 = *(_QWORD *)a2;
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v18 = *(__int64 (__fastcall **)(struct ISaDeviceInternal *, _QWORD))(v11 + 32);
LABEL_26:
    v13 = v18(a2, *(_QWORD *)this);
    goto LABEL_12;
  }
  v12 = *(int (**)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(v11 + 24);
  if ( v12 == CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection )
    v13 = CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(a2, *(struct CPipeInstance **)this);
  else
    v13 = ((__int64 (__fastcall *)(struct ISaDeviceInternal *, _QWORD))v12)(a2, *(_QWORD *)this);
LABEL_12:
  StreamingResourceManager = v13;
  if ( v13 >= 0 )
  {
    v14 = 1;
    goto LABEL_14;
  }
LABEL_27:
  v14 = 0;
LABEL_14:
  *((_BYTE *)this + 17) = v14;
  if ( StreamingResourceManager >= 0 )
  {
    v19[0] = 0LL;
    CPipeInstance::GetLatency(*(CPipeInstance **)this, v19);
    v15 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden))(*(_QWORD *)a2 + 96LL);
    if ( v15 == CSystemAudioDeviceSharedBase::GetSaDeviceLatency )
      SaDeviceLatency = CSystemAudioDeviceSharedBase::GetSaDeviceLatency(a2);
    else
      SaDeviceLatency = v15(a2);
    CPipeInstance::OnConnectedToPump(*(CPipeInstance **)this, a4 + v19[0], SaDeviceLatency);
  }
  if ( v20 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)StreamingResourceManager;
}
