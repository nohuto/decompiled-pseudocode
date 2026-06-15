/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007C50
 * Callers:
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180007B10 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BC00 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000C3B0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000C930 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000C9B0 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000CE00 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D700 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18000DC6C (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18000E410 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18008B3FC (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        const unsigned __int16 **a2,
        int a3,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a4,
        struct IStreamGroupProxy **a5)
{
  int (*v7)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // r14
  int DeviceGraphStoreForEndpoint; // eax
  int v9; // edi
  void (__fastcall *v10)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rdi
  struct IStreamGroupProxy **v11; // r12
  __int64 (__fastcall *v12)(CDeviceGraphObjectsStore *__hidden, const struct StreamGroupParams *, struct IStreamGroupProxy **); // rdi
  int StreamGroup; // eax
  struct IStreamGroupProxy *v14; // rbx
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  unsigned int i; // edx
  int v23; // eax
  __int64 (__fastcall *v24)(CDeviceGraphObjectsStore *__hidden, struct Microsoft::WRL::WeakRef *); // rsi
  int v25; // eax
  const unsigned __int16 **v26; // rsi
  void (__fastcall *v27)(const unsigned __int16 **); // r15
  struct IStreamGroupProxy *v28; // rax
  CDeviceGraphObjectsStore *v29; // rbx
  void (__fastcall *v30)(CDeviceGraphObjectsStore *); // rsi
  struct IStreamGroupProxy *v32; // [rsp+20h] [rbp-20h] BYREF
  char *v33; // [rsp+28h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  CDeviceGraphObjectsStore *v35; // [rsp+80h] [rbp+40h] BYREF
  const unsigned __int16 **v36; // [rsp+88h] [rbp+48h] BYREF
  int v37; // [rsp+90h] [rbp+50h] BYREF

  v37 = a3;
  v36 = a2;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v35 = 0LL;
  v7 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v7 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, *a2, &v35);
  else
    DeviceGraphStoreForEndpoint = ((__int64 (__fastcall *)(CDeviceGraphStore *, const unsigned __int16 *, CDeviceGraphObjectsStore **))v7)(
                                    g_DeviceGraphStore,
                                    *a2,
                                    &v35);
  v9 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
    goto LABEL_40;
  v10 = *(void (__fastcall **)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v35 + 64LL);
  if ( (char *)v10 == (char *)CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock(v35, lpCriticalSection);
  else
    v10(v35, lpCriticalSection);
  v11 = a5;
  if ( *((_BYTE *)a2 + 48)
    || *((_BYTE *)a2 + 50)
    || ((v12 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)v35 + 24LL),
         v12 != CDeviceGraphObjectsStore::FindStreamGroup)
      ? (StreamGroup = v12(v35, (const struct StreamGroupParams *)a2, a5))
      : (StreamGroup = CDeviceGraphObjectsStore::FindStreamGroup(v35, (const struct StreamGroupParams *)a2, a5)),
        v9 = StreamGroup,
        StreamGroup == -2147023728) )
  {
    v14 = 0LL;
    v32 = 0LL;
    if ( a4 )
      v15 = *((_DWORD *)a4 + 13);
    else
      v15 = 0;
    v16 = 16 * (v15 + 5LL);
    if ( v16 > 0x7FFFFFFF )
    {
      v18 = 0LL;
      v33 = 0LL;
    }
    else
    {
      v17 = (char *)CoTaskMemAlloc((unsigned int)v16);
      v18 = v17;
      v33 = v17;
      if ( v17 )
      {
        *(_DWORD *)v17 = *((_DWORD *)a2 + 2);
        *(_QWORD *)(v17 + 4) = *((unsigned __int8 *)a2 + 48);
        if ( a4 )
          v19 = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
        else
          v19 = 0;
        *((_DWORD *)v17 + 3) = v19;
        if ( a4 )
          v20 = *((_QWORD *)a4 + 2);
        else
          v20 = 0LL;
        *((_QWORD *)v18 + 2) = v20;
        *((_QWORD *)v18 + 3) = *a2;
        *((_DWORD *)v18 + 9) = a2[2][8] + 18;
        *((_QWORD *)v18 + 5) = a2[2];
        *((_QWORD *)v18 + 6) = a2[3];
        if ( a4 )
          v21 = *((_DWORD *)a4 + 8);
        else
          v21 = 0;
        *((_DWORD *)v18 + 14) = v21;
        *(_OWORD *)(v18 + 60) = *((_OWORD *)a2 + 2);
        *((_DWORD *)v18 + 19) = v15;
        *((_DWORD *)v18 + 8) = *((unsigned __int8 *)a2 + 50);
        for ( i = 0; i < *((_DWORD *)v18 + 19); ++i )
          *(_OWORD *)&v18[16 * i + 80] = *(_OWORD *)((char *)a4 + 16 * i + 56);
        if ( *((_BYTE *)a2 + 48) )
        {
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v32);
          v23 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v32,
                  &v36,
                  &v33,
                  &v37);
        }
        else
        {
          v23 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v32,
                  &v36,
                  &v33,
                  &v37);
        }
        v9 = v23;
        if ( v23 < 0 )
        {
          v14 = v32;
        }
        else
        {
          v36 = 0LL;
          v14 = v32;
          v9 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v32, &v36);
          if ( v9 >= 0 )
          {
            v24 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v35 + 32LL);
            if ( v24 == CDeviceGraphObjectsStore::AddStreamGroup )
              v25 = CDeviceGraphObjectsStore::AddStreamGroup(v35, (struct Microsoft::WRL::WeakRef *)&v36);
            else
              v25 = v24(v35, (struct Microsoft::WRL::WeakRef *)&v36);
            v9 = v25;
          }
          v26 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            v27 = (void (__fastcall *)(const unsigned __int16 **))*((_QWORD *)*v26 + 2);
            if ( (char *)v27 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v26);
            else
              v27(v26);
          }
          if ( v9 >= 0 )
          {
            v28 = v14;
            v14 = 0LL;
            *v11 = v28;
          }
        }
        goto LABEL_35;
      }
    }
    v9 = -2147024882;
LABEL_35:
    if ( v14 )
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v14 + 16LL))(v14);
    CoTaskMemFree(v18);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
LABEL_40:
  v29 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    v30 = *(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v29 + 16LL);
    if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v29);
    else
      v30(v29);
  }
  return (unsigned int)v9;
}
