/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x1800290B0
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180024F60 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800275B0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180027630 (-Lock@CDeviceGraphObjectsStore@@UEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027A80 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUISaDeviceProxy@@@Z @ 0x180027B30 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@PEAPEAUIS.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180028050 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18002A868 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18002AC34 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        const unsigned __int16 **a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct ISaDeviceProxy **a8)
{
  struct ISaDeviceProxy **v8; // r13
  __int64 (__fastcall *v12)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rsi
  int DeviceGraphStoreForEndpoint; // eax
  volatile int *v14; // rdx
  int v15; // esi
  __int64 (__fastcall *v16)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, struct ISaDeviceProxy **); // rdi
  int v17; // eax
  __int128 v18; // xmm0
  unsigned int v19; // esi
  struct ISaDeviceProxy *v20; // rbx
  const unsigned __int16 *v21; // r14
  __int64 (__fastcall *v22)(__int64, __int64); // r14
  __int64 (__fastcall *v23)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *); // rsi
  int v24; // eax
  Microsoft::WRL::Details::WeakReferenceImpl *v25; // rdi
  __int64 (__fastcall *v26)(Microsoft::WRL::Details::WeakReferenceImpl *); // r14
  struct ISaDeviceProxy *v27; // rax
  CDeviceGraphObjectsStore *v28; // rbx
  __int64 (__fastcall *v29)(__int64, volatile int *); // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v31; // [rsp+40h] [rbp-B1h] BYREF
  CDeviceGraphObjectsStore *v32; // [rsp+48h] [rbp-A9h] BYREF
  struct ISaDeviceProxy *v33; // [rsp+50h] [rbp-A1h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-99h] BYREF
  struct CEndpointCharacteristics *v35; // [rsp+60h] [rbp-91h] BYREF
  LPCRITICAL_SECTION v36; // [rsp+68h] [rbp-89h] BYREF
  _WORD v37[2]; // [rsp+70h] [rbp-81h] BYREF
  char v38; // [rsp+74h] [rbp-7Dh]
  __int128 v39; // [rsp+88h] [rbp-69h]
  int v40; // [rsp+9Ch] [rbp-55h]
  __int64 v41; // [rsp+A0h] [rbp-51h]
  int v42; // [rsp+A8h] [rbp-49h]
  __int64 v43; // [rsp+B0h] [rbp-41h]
  __int64 v44; // [rsp+B8h] [rbp-39h]
  const unsigned __int16 **v45; // [rsp+C0h] [rbp-31h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-21h] BYREF
  int v47; // [rsp+158h] [rbp+67h] BYREF

  v47 = a4;
  v8 = a8;
  v35 = a2;
  v45 = a3;
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v37, 0, 0x40uLL);
    v37[0] = 80;
    v39 = AEWMIGUID_PERFORMANCE;
    v40 = 0x20000;
    v38 = 7;
    v41 = 0LL;
    v42 = 0;
    v43 = 0LL;
    v44 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v37);
  }
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&v36);
  v32 = 0LL;
  v12 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v12 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, *a3, &v32);
  else
    DeviceGraphStoreForEndpoint = v12(g_DeviceGraphStore, *a3, &v32);
  v15 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint >= 0 )
  {
    v16 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, struct ISaDeviceProxy **))(*(_QWORD *)v32 + 48LL);
    v17 = v16 == CDeviceGraphObjectsStore::FindSaDevice
        ? CDeviceGraphObjectsStore::FindSaDevice(v32, (const struct SaDeviceParams *)a3, a5, v8)
        : v16(v32, (const struct SaDeviceParams *)a3, a5, v8);
    v15 = v17;
    if ( v17 == -2005139430 )
    {
      v18 = *((_OWORD *)a3 + 3);
      v19 = *((_DWORD *)a2 + 93);
      v20 = 0LL;
      v21 = *a3;
      v33 = 0LL;
      v46 = v18;
      v15 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, const unsigned __int16 *, _QWORD, __int128 *, _DWORD, unsigned int, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 136LL))(
              g_PolicyManager,
              v21,
              v19,
              &v46,
              *((_DWORD *)a3 + 2),
              a7,
              &a6);
      v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 64LL);
      if ( v22 == CDeviceGraphObjectsStore::Lock )
        CDeviceGraphObjectsStore::Lock((__int64)v32, (__int64)&lpCriticalSection);
      else
        v22((__int64)v32, (__int64)&lpCriticalSection);
      if ( v15 >= 0 )
      {
        *(_QWORD *)&v46 = a6;
        *((_QWORD *)&v46 + 1) = a7;
        v31 = (Microsoft::WRL::Details::WeakReferenceImpl *)&v46;
        v15 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
                (unsigned int)&v33,
                (unsigned int)&v45,
                (unsigned int)&v35,
                (unsigned int)&a5,
                (__int64)&v47,
                (__int64)&v31);
        if ( v15 < 0 )
          (*(void (__fastcall **)(CWindowsPolicyManager *, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 152LL))(
            g_PolicyManager,
            &a6);
        v20 = v33;
        if ( v15 == -2005139389 )
        {
          v15 = -2005139368;
        }
        else if ( v15 >= 0 )
        {
          v31 = 0LL;
          v15 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v33, &v31);
          if ( v15 >= 0 )
          {
            v23 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v32 + 56LL);
            if ( v23 == CDeviceGraphObjectsStore::AddSaDevice )
              v24 = CDeviceGraphObjectsStore::AddSaDevice(
                      v32,
                      (const struct SaDeviceParams *)a3,
                      (struct Microsoft::WRL::WeakRef *)&v31);
            else
              v24 = v23(v32, (const struct SaDeviceParams *)a3, (struct Microsoft::WRL::WeakRef *)&v31);
            v15 = v24;
          }
          v25 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            v26 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v25 + 16LL);
            if ( v26 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v25);
            else
              v26(v25);
          }
          if ( v15 >= 0 )
          {
            v27 = v20;
            v20 = 0LL;
            *v8 = v27;
          }
        }
      }
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( v20 )
        (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v37, 0, 0x40uLL);
    v40 = 0x20000;
    v39 = AEWMIGUID_PERFORMANCE;
    v37[0] = 80;
    v38 = 8;
    v41 = 0LL;
    v42 = 0;
    v43 = 0LL;
    v44 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v37);
  }
  v28 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    v29 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v28 + 16LL);
    if ( v29 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v28,
        v14);
    else
      ((void (__fastcall *)(CDeviceGraphObjectsStore *))v29)(v28);
  }
  if ( v36 )
    LeaveCriticalSection(v36);
  return (unsigned int)v15;
}
