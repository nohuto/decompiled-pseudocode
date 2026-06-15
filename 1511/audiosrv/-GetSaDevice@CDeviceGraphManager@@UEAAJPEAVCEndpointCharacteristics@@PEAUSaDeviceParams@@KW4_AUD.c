/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007810
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x1800080BC (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x180005B70 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BC00 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000C3B0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000C750 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000C800 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUIS.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000CE00 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D700 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18000E1F0 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct ISaDeviceProxy **a8)
{
  struct ISaDeviceProxy **v8; // r13
  int (*v12)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rsi
  int DeviceGraphStoreForEndpoint; // eax
  int v14; // esi
  __int64 (__fastcall *v15)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, struct ISaDeviceProxy **); // rdi
  int v16; // eax
  __int128 v17; // xmm0
  unsigned int v18; // esi
  struct ISaDeviceProxy *v19; // rbx
  __int64 v20; // r14
  void (__fastcall *v21)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // r14
  __int64 (__fastcall *v22)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *); // rsi
  int v23; // eax
  struct SaDeviceResourceParams *v24; // rdi
  void (__fastcall *v25)(struct SaDeviceResourceParams *); // r14
  struct ISaDeviceProxy *v26; // rax
  CDeviceGraphObjectsStore *v27; // rbx
  void (__fastcall *v28)(CDeviceGraphObjectsStore *); // rdi
  struct SaDeviceResourceParams *v30; // [rsp+40h] [rbp-B1h] BYREF
  CDeviceGraphObjectsStore *v31; // [rsp+48h] [rbp-A9h] BYREF
  struct ISaDeviceProxy *v32; // [rsp+50h] [rbp-A1h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-99h] BYREF
  struct CEndpointCharacteristics *v34; // [rsp+60h] [rbp-91h] BYREF
  LPCRITICAL_SECTION v35; // [rsp+68h] [rbp-89h] BYREF
  _WORD v36[2]; // [rsp+70h] [rbp-81h] BYREF
  char v37; // [rsp+74h] [rbp-7Dh]
  __int128 v38; // [rsp+88h] [rbp-69h]
  int v39; // [rsp+9Ch] [rbp-55h]
  __int64 v40; // [rsp+A0h] [rbp-51h]
  int v41; // [rsp+A8h] [rbp-49h]
  __int64 v42; // [rsp+B0h] [rbp-41h]
  __int64 v43; // [rsp+B8h] [rbp-39h]
  const struct SaDeviceParams *v44; // [rsp+C0h] [rbp-31h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-21h] BYREF
  unsigned int v46; // [rsp+158h] [rbp+67h] BYREF

  v46 = a4;
  v8 = a8;
  v34 = a2;
  v44 = a3;
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v36, 0, 0x40uLL);
    v36[0] = 80;
    v38 = AEWMIGUID_PERFORMANCE;
    v39 = 0x20000;
    v37 = 7;
    v40 = 0LL;
    v41 = 0;
    v42 = 0LL;
    v43 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v36);
  }
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 32, &v35);
  v31 = 0LL;
  v12 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v12 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
                                    g_DeviceGraphStore,
                                    *(const unsigned __int16 **)a3,
                                    &v31);
  else
    DeviceGraphStoreForEndpoint = ((__int64 (__fastcall *)(CDeviceGraphStore *, _QWORD, CDeviceGraphObjectsStore **))v12)(
                                    g_DeviceGraphStore,
                                    *(_QWORD *)a3,
                                    &v31);
  v14 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint >= 0 )
  {
    v15 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, struct ISaDeviceProxy **))(*(_QWORD *)v31 + 48LL);
    v16 = v15 == CDeviceGraphObjectsStore::FindSaDevice
        ? CDeviceGraphObjectsStore::FindSaDevice(v31, a3, a5, v8)
        : v15(v31, a3, a5, v8);
    v14 = v16;
    if ( v16 == -2005139430 )
    {
      v17 = *((_OWORD *)a3 + 3);
      v18 = *((_DWORD *)a2 + 93);
      v19 = 0LL;
      v20 = *(_QWORD *)a3;
      v32 = 0LL;
      v45 = v17;
      v14 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, __int64, _QWORD, __int128 *, _DWORD, unsigned int, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 136LL))(
              g_PolicyManager,
              v20,
              v18,
              &v45,
              *((_DWORD *)a3 + 2),
              a7,
              &a6);
      v21 = *(void (__fastcall **)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v31 + 64LL);
      if ( (char *)v21 == (char *)CDeviceGraphObjectsStore::Lock )
        CDeviceGraphObjectsStore::Lock(v31, &lpCriticalSection);
      else
        v21(v31, &lpCriticalSection);
      if ( v14 >= 0 )
      {
        *(_QWORD *)&v45 = a6;
        *((_QWORD *)&v45 + 1) = a7;
        v30 = (struct SaDeviceResourceParams *)&v45;
        v14 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
                &v32,
                &v44,
                &v34,
                &a5,
                &v46,
                &v30);
        if ( v14 < 0 )
          (*(void (__fastcall **)(CWindowsPolicyManager *, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 152LL))(
            g_PolicyManager,
            &a6);
        v19 = v32;
        if ( v14 == -2005139389 )
        {
          v14 = -2005139368;
        }
        else if ( v14 >= 0 )
        {
          v30 = 0LL;
          v14 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v32, &v30);
          if ( v14 >= 0 )
          {
            v22 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v31 + 56LL);
            if ( v22 == CDeviceGraphObjectsStore::AddSaDevice )
              v23 = CDeviceGraphObjectsStore::AddSaDevice(v31, a3, (struct Microsoft::WRL::WeakRef *)&v30);
            else
              v23 = v22(v31, a3, (struct Microsoft::WRL::WeakRef *)&v30);
            v14 = v23;
          }
          v24 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            v25 = *(void (__fastcall **)(struct SaDeviceResourceParams *))(*(_QWORD *)v24 + 16LL);
            if ( (char *)v25 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v24);
            else
              v25(v24);
          }
          if ( v14 >= 0 )
          {
            v26 = v19;
            v19 = 0LL;
            *v8 = v26;
          }
        }
      }
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( v19 )
        (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v36, 0, 0x40uLL);
    v39 = 0x20000;
    v38 = AEWMIGUID_PERFORMANCE;
    v36[0] = 80;
    v37 = 8;
    v40 = 0LL;
    v41 = 0;
    v42 = 0LL;
    v43 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v36);
  }
  v27 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    v28 = *(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v27 + 16LL);
    if ( (char *)v28 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v27);
    else
      v28(v27);
  }
  if ( v35 )
    LeaveCriticalSection(v35);
  return (unsigned int)v14;
}
