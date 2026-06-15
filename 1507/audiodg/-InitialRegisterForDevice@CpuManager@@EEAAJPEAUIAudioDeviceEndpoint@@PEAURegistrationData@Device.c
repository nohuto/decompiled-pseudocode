/*
 * XREFs of ?InitialRegisterForDevice@CpuManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x140027EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CpuManager::InitialRegisterForDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct CpuManager::DeviceRegistrations::RegistrationData *a3)
{
  int v6; // esi
  __int64 v7; // rdi
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_126cd5db_def4_4d61_b53a_1cfa1785931e,
         &v9);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(
           v9,
           *((unsigned __int16 *)this + 224),
           *((_QWORD *)this + 57));
    if ( v6 >= 0 )
    {
      *(_QWORD *)a3 = a2;
      ((void (__fastcall *)(struct IAudioDeviceEndpoint *))a2->lpVtbl->AddRef)(a2);
      v6 = 0;
    }
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
