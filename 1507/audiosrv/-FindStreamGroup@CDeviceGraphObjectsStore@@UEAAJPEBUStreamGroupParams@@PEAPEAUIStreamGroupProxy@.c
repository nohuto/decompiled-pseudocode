/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180027CC0
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800294F0 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?GetType@CBaseStreamGroupProxy@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x180026BA0 (-GetType@CBaseStreamGroupProxy@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     ?GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x180026BC0 (-GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?GetProcessingMode@CBaseStreamGroupProxy@@UEAA?BU_GUID@@XZ @ 0x180026BD0 (-GetProcessingMode@CBaseStreamGroupProxy@@UEAA-BU_GUID@@XZ.c)
 *     ?GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA?B_JXZ @ 0x180026BF0 (-GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA-B_JXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EA0 (-Release@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspe.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A200 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18002A2A0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     memcmp_0 @ 0x1800449EE (memcmp_0.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  const struct StreamGroupParams *v5; // r15
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rdi
  __int64 (__fastcall *v8)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // rbx
  int v9; // eax
  struct IInspectable *v10; // r14
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int v12; // eax
  struct _GUID *v13; // rbx
  __int64 (__fastcall *v14)(CBaseStreamGroupProxy *); // r14
  __int64 InterruptPeriodicity; // rax
  struct _GUID *(__fastcall *v16)(struct _GUID *, struct _GUID *__return_ptr); // r14
  struct _GUID *ProcessingMode; // rax
  struct _GUID *v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64); // r14
  int Type; // eax
  const struct tWAVEFORMATEX *(__fastcall *v22)(CBaseStreamGroupProxy *); // r14
  const struct tWAVEFORMATEX *OutputFormat; // rax
  const struct tWAVEFORMATEX *(__fastcall *v24)(CBaseStreamGroupProxy *); // r14
  const struct tWAVEFORMATEX *v25; // rax
  unsigned __int16 *v26; // r14
  __int64 v27; // rax
  int v28; // ecx
  int v29; // edx
  char v30; // al
  CBaseStreamGroupProxy *v31; // rax
  struct IInspectable *v32; // rbx
  ULONG (__stdcall *Release)(IInspectable *); // rsi
  __int64 (__fastcall *v34)(Microsoft::WRL::Details::WeakReferenceImpl *); // rbx
  unsigned int v35; // ebx
  Microsoft::WRL::Details::WeakReferenceImpl *v37; // rbx
  __int64 (__fastcall *v38)(Microsoft::WRL::Details::WeakReferenceImpl *); // r14
  CBaseStreamGroupProxy *v39; // [rsp+28h] [rbp-19h] BYREF
  struct IInspectable *v40; // [rsp+30h] [rbp-11h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v41; // [rsp+38h] [rbp-9h] BYREF
  const struct StreamGroupParams *v42; // [rsp+40h] [rbp-1h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+7h] BYREF
  struct _GUID v44; // [rsp+50h] [rbp+Fh] BYREF

  v5 = a2;
  v42 = a2;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  for ( i = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 7);
        i != *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 8);
        ++i )
  {
    v7 = *i;
    v41 = v7;
    if ( v7 )
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 8LL))(v7);
    v40 = 0LL;
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v7 + 24LL);
      if ( v8 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
        v9 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v40);
      else
        v9 = v8(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v40);
      v10 = v40;
      if ( v9 < 0 )
      {
        if ( v40 )
        {
          v40 = 0LL;
          ((void (__fastcall *)(struct IInspectable *))v10->lpVtbl->Release)(v10);
        }
LABEL_49:
        if ( v7 )
          (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL))(v7);
        continue;
      }
      if ( !v40 )
      {
        v37 = v7;
        v7 = 0LL;
        v41 = 0LL;
        v38 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v37 + 16LL);
        if ( v38 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v37);
        else
          v38(v37);
        v10 = v40;
        if ( !v40 )
          goto LABEL_49;
      }
      v39 = 0LL;
      QueryInterface = v10->lpVtbl->QueryInterface;
      if ( (char *)QueryInterface == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface )
        v12 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                v10,
                &GUID_861f19c1_d1ea_4682_8063_e84158dcabe7,
                &v39);
      else
        v12 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, CBaseStreamGroupProxy **))QueryInterface)(
                v10,
                &GUID_861f19c1_d1ea_4682_8063_e84158dcabe7,
                &v39);
      if ( v12 < 0 )
        goto LABEL_55;
      v13 = (struct _GUID *)v39;
      v14 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v39 + 24LL);
      if ( v14 == CBaseStreamGroupProxy::GetInterruptPeriodicity )
      {
        InterruptPeriodicity = CBaseStreamGroupProxy::GetInterruptPeriodicity(v39);
      }
      else
      {
        InterruptPeriodicity = v14(v39);
        v13 = (struct _GUID *)v39;
      }
      if ( *((_QWORD *)v5 + 4) != InterruptPeriodicity )
        goto LABEL_55;
      v16 = *(struct _GUID *(__fastcall **)(struct _GUID *, struct _GUID *__return_ptr))(*(_QWORD *)&v13->Data1 + 32LL);
      if ( v16 == CBaseStreamGroupProxy::GetProcessingMode )
      {
        ProcessingMode = CBaseStreamGroupProxy::GetProcessingMode(v13, &v44);
      }
      else
      {
        ProcessingMode = v16(v13, &v44);
        v13 = (struct _GUID *)v39;
      }
      v18 = ProcessingMode;
      v19 = *((_QWORD *)v5 + 5) - *(_QWORD *)&ProcessingMode->Data1;
      if ( !v19 )
        v19 = *((_QWORD *)v5 + 6) - *(_QWORD *)v18->Data4;
      if ( v19 )
        goto LABEL_55;
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)&v13->Data1 + 80LL);
      if ( v20 == CBaseStreamGroupProxy::GetType )
      {
        Type = CBaseStreamGroupProxy::GetType((__int64)v13);
      }
      else
      {
        Type = v20((__int64)v13);
        v13 = (struct _GUID *)v39;
      }
      if ( *((_DWORD *)v5 + 4) != Type )
        goto LABEL_55;
      v22 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)&v13->Data1 + 40LL);
      if ( v22 == CBaseStreamGroupProxy::GetOutputFormat )
      {
        OutputFormat = CBaseStreamGroupProxy::GetOutputFormat((CBaseStreamGroupProxy *)v13);
      }
      else
      {
        OutputFormat = v22((CBaseStreamGroupProxy *)v13);
        v13 = (struct _GUID *)v39;
      }
      if ( *(unsigned __int16 *)(*((_QWORD *)v5 + 3) + 16LL) + 18LL != OutputFormat->cbSize + 18LL )
        goto LABEL_55;
      v24 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)&v13->Data1 + 40LL);
      if ( v24 == CBaseStreamGroupProxy::GetOutputFormat )
      {
        v25 = CBaseStreamGroupProxy::GetOutputFormat((CBaseStreamGroupProxy *)v13);
      }
      else
      {
        v25 = v24((CBaseStreamGroupProxy *)v13);
        v13 = (struct _GUID *)v39;
      }
      if ( memcmp_0(*((const void **)v5 + 3), v25, *(unsigned __int16 *)(*((_QWORD *)v5 + 3) + 16LL) + 18LL) )
        goto LABEL_55;
      v26 = (unsigned __int16 *)*((_QWORD *)v5 + 1);
      v27 = (*(__int64 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v13->Data1 + 56LL))(v13) - (_QWORD)v26;
      do
      {
        v28 = *(unsigned __int16 *)((char *)v26 + v27);
        v29 = *v26 - v28;
        if ( v29 )
          break;
        ++v26;
      }
      while ( v28 );
      if ( !v29 )
      {
        v30 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v39 + 72LL))(v39);
        v5 = v42;
        if ( *((_BYTE *)v42 + 56) == v30 )
        {
          v31 = v39;
          v32 = v40;
          v39 = 0LL;
          *a3 = v31;
          if ( v32 )
          {
            v40 = 0LL;
            Release = v32->lpVtbl->Release;
            if ( (char *)Release == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v32);
            else
              ((void (__fastcall *)(struct IInspectable *))Release)(v32);
          }
          if ( v7 )
          {
            v34 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL);
            if ( v34 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
            else
              v34(v7);
          }
          break;
        }
LABEL_55:
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v39);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v40);
        Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v41);
        continue;
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v39);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v40);
      Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v41);
      v5 = v42;
    }
  }
  v35 = -2147023728;
  if ( *a3 )
    v35 = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v35;
}
