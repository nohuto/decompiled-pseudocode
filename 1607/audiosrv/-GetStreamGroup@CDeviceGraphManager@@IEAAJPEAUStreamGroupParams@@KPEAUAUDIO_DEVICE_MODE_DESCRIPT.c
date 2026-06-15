/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180023EC0
 * Callers:
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023D90 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x1800218A0 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180021E00 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180021E80 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022AD0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x180024908 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002534C (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@012@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800746C8 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStream_ea_1800746C8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct StreamGroupParams *a2,
        int a3,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a4,
        struct IStreamGroupProxy **a5)
{
  const unsigned __int16 *v7; // rdx
  __int64 (__fastcall *v8)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  int v10; // ebx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 (__fastcall *v12)(CDeviceGraphObjectsStore *, const struct StreamGroupParams *, struct IStreamGroupProxy **); // rax
  struct IStreamGroupProxy **v13; // r14
  int StreamGroup; // eax
  CDeviceGraphObjectsStore *v15; // rcx
  __int64 (__fastcall *v16)(__int64); // rax
  CDeviceGraphManager *v18; // rcx
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  char *v21; // rax
  char *v22; // rsi
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  unsigned int i; // edx
  CDeviceGraphManager *v27; // rcx
  int v28; // eax
  __int64 (__fastcall *v29)(CDeviceGraphObjectsStore *, struct Microsoft::WRL::WeakRef *); // rax
  int v30; // eax
  struct StreamGroupParams *v31; // rcx
  CDeviceGraphManager *v32; // rax
  void (*v33)(void); // rax
  CDeviceGraphObjectsStore *v34; // [rsp+20h] [rbp-20h] BYREF
  char *v35; // [rsp+28h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-10h] BYREF
  CDeviceGraphManager *v37; // [rsp+80h] [rbp+40h] BYREF
  struct StreamGroupParams *v38; // [rsp+88h] [rbp+48h] BYREF
  int v39; // [rsp+90h] [rbp+50h] BYREF

  v39 = a3;
  v38 = a2;
  v37 = this;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v34 = 0LL;
  v7 = *(const unsigned __int16 **)a2;
  v8 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v8 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v7, &v34);
  else
    DeviceGraphStoreForEndpoint = v8(g_DeviceGraphStore, v7, &v34);
  v10 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
    goto LABEL_13;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 64LL);
  if ( v11 == CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock((__int64)v34, (__int64)lpCriticalSection);
  else
    v11((__int64)v34, (__int64)lpCriticalSection);
  if ( *((_BYTE *)a2 + 48) || *((_BYTE *)a2 + 50) )
  {
    v13 = a5;
    goto LABEL_17;
  }
  v12 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)v34 + 24LL);
  v13 = a5;
  if ( v12 == CDeviceGraphObjectsStore::FindStreamGroup )
    StreamGroup = CDeviceGraphObjectsStore::FindStreamGroup(v34, a2, a5);
  else
    StreamGroup = v12(v34, a2, a5);
  v10 = StreamGroup;
  if ( StreamGroup == -2147023728 )
  {
LABEL_17:
    v18 = 0LL;
    v37 = 0LL;
    if ( a4 )
      v19 = *((_DWORD *)a4 + 13);
    else
      v19 = 0;
    v20 = 16 * (v19 + 5LL);
    if ( v20 > 0x7FFFFFFF )
    {
      v22 = 0LL;
      v35 = 0LL;
    }
    else
    {
      v21 = (char *)CoTaskMemAlloc((unsigned int)v20);
      v22 = v21;
      v35 = v21;
      if ( v21 )
      {
        *(_DWORD *)v21 = *((_DWORD *)a2 + 2);
        *(_QWORD *)(v21 + 4) = *((unsigned __int8 *)a2 + 48);
        if ( a4 )
          v23 = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
        else
          v23 = 0;
        *((_DWORD *)v21 + 3) = v23;
        if ( a4 )
          v24 = *((_QWORD *)a4 + 2);
        else
          v24 = 0LL;
        *((_QWORD *)v22 + 2) = v24;
        *((_QWORD *)v22 + 3) = *(_QWORD *)a2;
        *((_DWORD *)v22 + 9) = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18;
        *((_QWORD *)v22 + 5) = *((_QWORD *)a2 + 2);
        *((_QWORD *)v22 + 6) = *((_QWORD *)a2 + 3);
        if ( a4 )
          v25 = *((_DWORD *)a4 + 8);
        else
          v25 = 0;
        *((_DWORD *)v22 + 14) = v25;
        *(_OWORD *)(v22 + 60) = *((_OWORD *)a2 + 2);
        *((_DWORD *)v22 + 19) = v19;
        *((_DWORD *)v22 + 8) = *((unsigned __int8 *)a2 + 50);
        for ( i = 0; i < *((_DWORD *)v22 + 19); ++i )
          *(_OWORD *)&v22[16 * i + 80] = *(_OWORD *)((char *)a4 + 16 * i + 56);
        if ( *((_BYTE *)a2 + 48) )
        {
          v28 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v37,
                  &v38,
                  &v35,
                  &v39);
        }
        else
        {
          v27 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v28 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v37,
                  &v38,
                  &v35,
                  &v39);
        }
        v10 = v28;
        if ( v28 < 0 )
          goto LABEL_51;
        v38 = 0LL;
        v10 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v37, &v38);
        if ( v10 >= 0 )
        {
          v29 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v34 + 32LL);
          if ( v29 == CDeviceGraphObjectsStore::AddStreamGroup )
            v30 = CDeviceGraphObjectsStore::AddStreamGroup(v34, (struct Microsoft::WRL::WeakRef *)&v38);
          else
            v30 = v29(v34, (struct Microsoft::WRL::WeakRef *)&v38);
          v10 = v30;
        }
        v31 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          v33 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
          if ( (char *)v33 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v31);
          else
            v33();
        }
        if ( v10 < 0 )
        {
LABEL_51:
          v18 = v37;
        }
        else
        {
          v32 = v37;
          v18 = 0LL;
          v37 = 0LL;
          *v13 = v32;
        }
        goto LABEL_41;
      }
      v18 = v37;
    }
    v10 = -2147024882;
LABEL_41:
    if ( v18 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    CoTaskMemFree(v22);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
LABEL_13:
  v15 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL);
    if ( v16 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v15);
    else
      ((void (__fastcall *)(CDeviceGraphObjectsStore *, __int64 (__fastcall *)(__int64)))v16)(
        v15,
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release);
  }
  return (unsigned int)v10;
}
