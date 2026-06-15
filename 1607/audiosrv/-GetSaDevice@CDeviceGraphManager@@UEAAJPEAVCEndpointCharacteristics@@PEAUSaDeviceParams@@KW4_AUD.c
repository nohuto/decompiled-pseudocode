/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180023AC0
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001EE2C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x1800218A0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021C60 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180021D10 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180024F6C (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18002523C (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x1800255F8 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18008A328 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct ISaDeviceProxy **a8)
{
  struct _RTL_CRITICAL_SECTION *v8; // r15
  unsigned int v12; // esi
  __int64 (__fastcall *v13)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  const unsigned __int16 *v14; // rdx
  int DeviceGraphStoreForEndpoint; // eax
  int v16; // ebx
  __int64 (__fastcall *v17)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, int, struct _RTL_CRITICAL_SECTION *); // rax
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(struct IAudioPolicyManager *, __int64, __int64, __int128 *, struct ISaDeviceProxy **, unsigned int, unsigned __int64 *); // rax
  __int64 v22; // r8
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  __int64 (__fastcall *v24)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *); // rax
  int v25; // eax
  __int128 *v26; // rcx
  void (*v28)(void); // rax
  struct ISaDeviceProxy **v29; // [rsp+20h] [rbp-C9h]
  struct _RTL_CRITICAL_SECTION_DEBUG *v30; // [rsp+40h] [rbp-A9h] BYREF
  __int128 *v31; // [rsp+48h] [rbp-A1h] BYREF
  CDeviceGraphObjectsStore *v32; // [rsp+50h] [rbp-99h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-91h] BYREF
  _QWORD v34[8]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-49h]
  __int64 v36; // [rsp+A8h] [rbp-41h]
  struct CEndpointCharacteristics *v37; // [rsp+B0h] [rbp-39h] BYREF
  struct SaDeviceParams *v38; // [rsp+B8h] [rbp-31h] BYREF
  LPCRITICAL_SECTION v39[2]; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-19h] BYREF
  int v41; // [rsp+148h] [rbp+5Fh] BYREF

  v41 = a4;
  v8 = (struct _RTL_CRITICAL_SECTION *)a8;
  v37 = a2;
  v38 = a3;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v34, 0, sizeof(v34));
    LOWORD(v34[0]) = 80;
    *(_OWORD *)&v34[3] = AEWMIGUID_PERFORMANCE;
    HIDWORD(v34[5]) = 0x20000;
    WORD2(v34[0]) = 1031;
    v34[6] = 0LL;
    LODWORD(v34[7]) = 0;
    v35 = 0LL;
    v36 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v34);
  }
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)v39);
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 240LL))(g_PolicyManager)
    || (v12 = 1, !CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2)) )
  {
    v12 = 0;
  }
  v32 = 0LL;
  v13 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  v14 = *(const unsigned __int16 **)a3;
  if ( v13 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v14, &v32);
  else
    DeviceGraphStoreForEndpoint = v13(g_DeviceGraphStore, v14, &v32);
  v16 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint >= 0 )
  {
    HIDWORD(v29) = HIDWORD(v8);
    v17 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, int, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)v32 + 48LL);
    v18 = v17 == CDeviceGraphObjectsStore::FindSaDevice
        ? CDeviceGraphObjectsStore::FindSaDevice(v32, a3, a5, v12, v8)
        : ((__int64 (__fastcall *)(CDeviceGraphObjectsStore *, struct SaDeviceParams *, _QWORD, _QWORD))v17)(
            v32,
            a3,
            (unsigned int)a5,
            v12);
    v16 = v18;
    if ( v18 == -2005139430 )
    {
      v19 = a7;
      v30 = 0LL;
      v20 = *(_QWORD *)a3;
      v21 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int128 *, struct ISaDeviceProxy **, unsigned int, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 128LL);
      LODWORD(v29) = *((_DWORD *)a3 + 2);
      v22 = *((unsigned int *)a2 + 93);
      v40 = *((_OWORD *)a3 + 3);
      v16 = v21(g_PolicyManager, v20, v22, &v40, v29, a7, &a6);
      v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 64LL);
      if ( v23 == CDeviceGraphObjectsStore::Lock )
        CDeviceGraphObjectsStore::Lock((__int64)v32, (__int64)&lpCriticalSection);
      else
        v23((__int64)v32, (__int64)&lpCriticalSection);
      if ( v16 >= 0 )
      {
        *(_QWORD *)&v40 = a6;
        v31 = &v40;
        *((_QWORD *)&v40 + 1) = v19;
        v16 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
                (unsigned int)&v30,
                (unsigned int)&v38,
                (unsigned int)&v37,
                (unsigned int)&a5,
                (__int64)&v41,
                (__int64)&v31);
        if ( v16 < 0 )
        {
          (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 144LL))(
            g_PolicyManager,
            &a6);
        }
        else
        {
          v31 = 0LL;
          v16 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v30, &v31);
          if ( v16 >= 0 )
          {
            v24 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v32 + 56LL);
            if ( v24 == CDeviceGraphObjectsStore::AddSaDevice )
              v25 = CDeviceGraphObjectsStore::AddSaDevice(v32, a3, (struct Microsoft::WRL::WeakRef *)&v31);
            else
              v25 = v24(v32, a3, (struct Microsoft::WRL::WeakRef *)&v31);
            v16 = v25;
          }
          v26 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            v28 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
            if ( (char *)v28 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v26);
            else
              v28();
          }
          if ( v16 >= 0 )
          {
            v8->DebugInfo = v30;
            v30 = 0LL;
          }
        }
      }
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v30);
    }
  }
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v34, 0, sizeof(v34));
    HIDWORD(v34[5]) = 0x20000;
    *(_OWORD *)&v34[3] = AEWMIGUID_PERFORMANCE;
    LOWORD(v34[0]) = 80;
    WORD2(v34[0]) = 1032;
    v34[6] = 0LL;
    LODWORD(v34[7]) = 0;
    v35 = 0LL;
    v36 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v34);
  }
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v32);
  if ( v39[0] )
    LeaveCriticalSection(v39[0]);
  return (unsigned int)v16;
}
