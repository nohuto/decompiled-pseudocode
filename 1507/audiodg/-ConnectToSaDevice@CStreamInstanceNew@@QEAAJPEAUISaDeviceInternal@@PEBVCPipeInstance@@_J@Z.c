/*
 * XREFs of ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012BAC (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x1400044C0 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140004800 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x14000CC90 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     GetStreamingResourceManager @ 0x14000DCC0 (GetStreamingResourceManager.c)
 *     ?GetSaDeviceLatency@CSystemAudioDeviceSharedNew@@UEAA_JXZ @ 0x14000DF00 (-GetSaDeviceLatency@CSystemAudioDeviceSharedNew@@UEAA_JXZ.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000E530 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedNew@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002EE88 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstanceNew::ConnectToSaDevice(
        CStreamInstanceNew *this,
        __int64 (__fastcall ***a2)(void *a1, const struct _GUID *a2, void **a3),
        const struct CPipeInstance *a3,
        __int64 a4)
{
  int StreamingResourceManager; // edi
  __int64 (__fastcall *v9)(GraphStreamingResourceManager *, void *, struct ProcessRegistrationToken__ **); // rdi
  int v10; // eax
  __int64 (__fastcall **v11)(void *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v12)(CSystemAudioDeviceSharedNew *, struct CPipeInstance *); // rbx
  int v13; // eax
  char v14; // al
  __int64 (__fastcall *v15)(CSystemAudioDeviceSharedNew *); // rbx
  __int64 SaDeviceLatency; // rax
  __int64 (__fastcall *v18)(void *, const struct _GUID *, void **); // rdi
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
    v9 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, void *, struct ProcessRegistrationToken__ **))(*(_QWORD *)v20 + 24LL);
    if ( v9 == GraphStreamingResourceManager::RegisterProcess )
      v10 = GraphStreamingResourceManager::RegisterProcess(
              v20,
              *((void **)this + 5),
              (struct ProcessRegistrationToken__ **)this + 6);
    else
      v10 = v9(v20, *((void **)this + 5), (struct ProcessRegistrationToken__ **)this + 6);
    StreamingResourceManager = v10;
  }
  if ( StreamingResourceManager < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    StreamingResourceManager = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
    if ( StreamingResourceManager < 0 )
      goto LABEL_27;
    v18 = (*a2)[5];
    goto LABEL_26;
  }
  v11 = *a2;
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v18 = v11[4];
LABEL_26:
    v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(void *, const struct _GUID *, void **), _QWORD))v18)(
            a2,
            *(_QWORD *)this);
    goto LABEL_12;
  }
  v12 = (__int64 (__fastcall *)(CSystemAudioDeviceSharedNew *, struct CPipeInstance *))v11[3];
  if ( v12 == CSystemAudioDeviceSharedNew::AddPipeToMixSplitConnection )
    v13 = CSystemAudioDeviceSharedNew::AddPipeToMixSplitConnection(
            (CSystemAudioDeviceSharedNew *)a2,
            *(struct CPipeInstance **)this);
  else
    v13 = v12((CSystemAudioDeviceSharedNew *)a2, *(struct CPipeInstance **)this);
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
    v15 = (__int64 (__fastcall *)(CSystemAudioDeviceSharedNew *))(*a2)[12];
    if ( v15 == CSystemAudioDeviceSharedNew::GetSaDeviceLatency )
      SaDeviceLatency = CSystemAudioDeviceSharedNew::GetSaDeviceLatency((CSystemAudioDeviceSharedNew *)a2);
    else
      SaDeviceLatency = v15((CSystemAudioDeviceSharedNew *)a2);
    CPipeInstance::OnConnectedToPump(*(CPipeInstance **)this, a4 + v19[0], SaDeviceLatency);
  }
  if ( v20 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)StreamingResourceManager;
}
