/*
 * XREFs of ?InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x14000C5B0
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14000C6D0 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall GraphStreamingResourceManager::InitialRegisterForDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *((_QWORD *)this + 35);
  if ( !v4
    || (result = (*(__int64 (__fastcall **)(_QWORD, struct IAudioDeviceEndpoint *, __int64 *))(*(_QWORD *)v4 + 64LL))(
                   *((_QWORD *)this + 35),
                   a2,
                   &v7),
        (int)result >= 0) )
  {
    *(_QWORD *)a3 = a2;
    ((void (__fastcall *)(struct IAudioDeviceEndpoint *))a2->lpVtbl->AddRef)(a2);
    *((_QWORD *)a3 + 1) = v7;
    return 0LL;
  }
  return result;
}
