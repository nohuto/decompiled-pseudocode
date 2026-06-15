/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14000C6D0
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F970 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x14000C5B0 (-InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegi.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x14000D250 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000D290 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x14000D2E0 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct IAudioDeviceEndpoint *v3; // r12
  GraphStreamingResourceManager *v4; // r13
  __int64 v5; // rdi
  __int64 Node; // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *); // r14
  int v9; // eax
  unsigned int v10; // esi
  ATL::CAtlException *v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-A0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-98h] BYREF
  char v16; // [rsp+48h] [rbp-90h]
  __int64 v17; // [rsp+50h] [rbp-88h] BYREF
  char v18; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+60h] [rbp-78h] BYREF
  __int64 v20; // [rsp+68h] [rbp-70h]
  int v21; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+78h] [rbp-60h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  _BYTE v24[8]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v25; // [rsp+90h] [rbp-48h]
  ATL::CAtlException *v26; // [rsp+98h] [rbp-40h] BYREF
  int v30; // [rsp+F8h] [rbp+20h] BYREF

  v25 = -2LL;
  v3 = a2;
  v4 = this;
  v14 = 0LL;
  v20 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v16 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ((void (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))v3->lpVtbl->QueryInterface)(
    v3,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v13);
  v5 = v13;
  v20 = v13;
  v19 = v13;
  Node = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
           (int)v4 + 200,
           (unsigned int)&v19,
           (unsigned int)&v18,
           (unsigned int)&v30,
           (__int64)v24);
  v7 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    v5 = v13;
LABEL_6:
    *a3 = (struct DeviceRegistrationToken__ *)v7;
    v10 = 0;
    goto LABEL_7;
  }
  v22 = 0LL;
  v23 = 0LL;
  v21 = 1;
  try
  {
    v17 = v5;
    v7 = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
           (char *)v4 + 200,
           &v17,
           &v21);
    v14 = v7;
  }
  catch ( ATL::CAtlException *v26 )
  {
    v12 = v26;
    if ( *(_DWORD *)v26 == -1073741571 )
      _resetstkoflw();
    v30 = *(_DWORD *)v12;
    v10 = v30;
    v4 = this;
    v7 = v14;
    v5 = v13;
    if ( v30 < 0 )
      goto LABEL_15;
    v3 = a2;
  }
  v8 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *))(*((_QWORD *)v4 - 1) + 64LL);
  if ( v8 == GraphStreamingResourceManager::InitialRegisterForDevice )
    v9 = GraphStreamingResourceManager::InitialRegisterForDevice(
           (GraphStreamingResourceManager *)((char *)v4 - 8),
           v3,
           (struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *)(v7 + 16));
  else
    v9 = v8(
           (GraphStreamingResourceManager *)((char *)v4 - 8),
           v3,
           (struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *)(v7 + 16));
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_6;
LABEL_15:
  if ( v7 )
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)v4 + 200,
      v7);
LABEL_7:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v10;
}
