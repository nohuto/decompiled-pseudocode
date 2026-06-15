/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800294F0
 * Callers:
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800293B0 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800275B0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180027630 (-Lock@CDeviceGraphObjectsStore@@UEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027C40 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180027CC0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180028050 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002A750 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18002AD04 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18008E88C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct StreamGroupParams *a2,
        int a3,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a4,
        struct IStreamGroupProxy **a5)
{
  __int64 (__fastcall *v7)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // r14
  int DeviceGraphStoreForEndpoint; // eax
  volatile int *v9; // rdx
  int v10; // edi
  __int64 (__fastcall *v11)(__int64, __int64); // rdi
  struct IStreamGroupProxy **v12; // r12
  __int64 (__fastcall *v13)(CDeviceGraphObjectsStore *, const struct StreamGroupParams *, struct IStreamGroupProxy **); // rdi
  int StreamGroup; // eax
  struct IStreamGroupProxy *v15; // rbx
  unsigned int v16; // edi
  unsigned __int64 v17; // rax
  char *v18; // rax
  char *v19; // r14
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  unsigned int i; // edx
  int v24; // eax
  __int64 (__fastcall *v25)(CDeviceGraphObjectsStore *, struct Microsoft::WRL::WeakRef *); // rsi
  int v26; // eax
  Microsoft::WRL::Details::WeakReferenceImpl *v27; // rsi
  __int64 (__fastcall *v28)(Microsoft::WRL::Details::WeakReferenceImpl *); // r15
  struct IStreamGroupProxy *v29; // rax
  CDeviceGraphObjectsStore *v30; // rbx
  __int64 (__fastcall *v31)(__int64, volatile int *); // rsi
  struct IStreamGroupProxy *v33; // [rsp+20h] [rbp-20h] BYREF
  char *v34; // [rsp+28h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  CDeviceGraphObjectsStore *v36; // [rsp+80h] [rbp+40h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v37; // [rsp+88h] [rbp+48h] BYREF
  int v38; // [rsp+90h] [rbp+50h] BYREF

  v38 = a3;
  v37 = a2;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v36 = 0LL;
  v7 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v7 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
                                    g_DeviceGraphStore,
                                    *(const unsigned __int16 **)a2,
                                    &v36);
  else
    DeviceGraphStoreForEndpoint = v7(g_DeviceGraphStore, *(const unsigned __int16 **)a2, &v36);
  v10 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
    goto LABEL_39;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 64LL);
  if ( v11 == CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock((__int64)v36, (__int64)lpCriticalSection);
  else
    v11((__int64)v36, (__int64)lpCriticalSection);
  v12 = a5;
  if ( *((_BYTE *)a2 + 56)
    || ((v13 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)v36 + 24LL),
         v13 != CDeviceGraphObjectsStore::FindStreamGroup)
      ? (StreamGroup = v13(v36, a2, a5))
      : (StreamGroup = CDeviceGraphObjectsStore::FindStreamGroup(v36, a2, a5)),
        v10 = StreamGroup,
        StreamGroup == -2147023728) )
  {
    v15 = 0LL;
    v33 = 0LL;
    if ( a4 )
      v16 = *((_DWORD *)a4 + 13);
    else
      v16 = 0;
    v17 = 16 * (v16 + 5LL);
    if ( v17 > 0x7FFFFFFF )
    {
      v19 = 0LL;
      v34 = 0LL;
    }
    else
    {
      v18 = (char *)CoTaskMemAlloc((unsigned int)v17);
      v19 = v18;
      v34 = v18;
      if ( v18 )
      {
        *(_DWORD *)v18 = *((_DWORD *)a2 + 4);
        *(_QWORD *)(v18 + 4) = *((unsigned __int8 *)a2 + 56);
        if ( a4 )
          v20 = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
        else
          v20 = 0;
        *((_DWORD *)v18 + 3) = v20;
        if ( a4 )
          v21 = *((_QWORD *)a4 + 2);
        else
          v21 = 0LL;
        *((_QWORD *)v19 + 2) = v21;
        *((_QWORD *)v19 + 3) = *(_QWORD *)a2;
        *((_DWORD *)v19 + 8) = *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 16LL) + 18;
        *((_QWORD *)v19 + 5) = *((_QWORD *)a2 + 3);
        *((_QWORD *)v19 + 6) = *((_QWORD *)a2 + 4);
        if ( a4 )
          v22 = *((_DWORD *)a4 + 8);
        else
          v22 = 0;
        *((_DWORD *)v19 + 14) = v22;
        *(_OWORD *)(v19 + 60) = *(_OWORD *)((char *)a2 + 40);
        *((_DWORD *)v19 + 19) = v16;
        for ( i = 0; i < *((_DWORD *)v19 + 19); ++i )
          *(_OWORD *)&v19[16 * i + 80] = *(_OWORD *)((char *)a4 + 16 * i + 56);
        if ( *((_BYTE *)a2 + 56) )
        {
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v33);
          v24 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v33,
                  &v37,
                  &v34,
                  &v38);
        }
        else
        {
          v24 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v33,
                  &v37,
                  &v34,
                  &v38);
        }
        v10 = v24;
        if ( v24 < 0 )
        {
          v15 = v33;
        }
        else
        {
          v37 = 0LL;
          v15 = v33;
          v10 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v33, &v37);
          if ( v10 >= 0 )
          {
            v25 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v36 + 32LL);
            if ( v25 == CDeviceGraphObjectsStore::AddStreamGroup )
              v26 = CDeviceGraphObjectsStore::AddStreamGroup(v36, (struct Microsoft::WRL::WeakRef *)&v37);
            else
              v26 = v25(v36, (struct Microsoft::WRL::WeakRef *)&v37);
            v10 = v26;
          }
          v27 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            v28 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v27 + 16LL);
            if ( v28 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v27);
            else
              v28(v27);
          }
          if ( v10 >= 0 )
          {
            v29 = v15;
            v15 = 0LL;
            *v12 = v29;
          }
        }
        goto LABEL_34;
      }
    }
    v10 = -2147024882;
LABEL_34:
    if ( v15 )
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v15 + 16LL))(v15);
    CoTaskMemFree(v19);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
LABEL_39:
  v30 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    v31 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v30 + 16LL);
    if ( v31 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v30,
        v9);
    else
      ((void (__fastcall *)(CDeviceGraphObjectsStore *))v31)(v30);
  }
  return (unsigned int)v10;
}
