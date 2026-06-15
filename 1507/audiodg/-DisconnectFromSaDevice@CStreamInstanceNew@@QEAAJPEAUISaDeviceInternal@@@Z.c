/*
 * XREFs of ?DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140034354
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012AF8 (-DisconnectPipesFromDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     GetStreamingResourceManager @ 0x14000DCC0 (GetStreamingResourceManager.c)
 *     ?UnregisterResources@CStreamInstanceNew@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400268A8 (-UnregisterResources@CStreamInstanceNew@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x140030984 (-OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstanceNew::DisconnectFromSaDevice(
        CStreamInstanceNew *this,
        __int64 (__fastcall ***a2)(void *a1, const struct _GUID *a2, void **a3))
{
  int v4; // ebp
  struct IAudioStreamingResourceRegistration *v5; // rbx
  struct IAudioStreamingResourceRegistration *v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(void *, const struct _GUID *, void **), _QWORD))(*a2)[6])(
         a2,
         *(_QWORD *)this);
  *((_BYTE *)this + 17) = v4 < 0;
  CPipeInstance::OnDisconnectedFromPump(*(CPipeInstance **)this);
  v7 = 0LL;
  GetStreamingResourceManager(a2, &v7);
  v5 = v7;
  if ( v7 )
  {
    CStreamInstanceNew::UnregisterResources(this, v7);
    v5 = v7;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v4;
}
