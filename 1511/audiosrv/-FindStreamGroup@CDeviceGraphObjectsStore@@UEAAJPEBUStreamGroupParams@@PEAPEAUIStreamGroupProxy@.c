/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000C9B0
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007C50 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000C320 (-IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000C330 (-IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?GetType@CBaseStreamGroupProxy@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18000C350 (-GetType@CBaseStreamGroupProxy@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     ?GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x18000C370 (-GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?GetProcessingMode@CBaseStreamGroupProxy@@UEAA?BU_GUID@@XZ @ 0x18000C380 (-GetProcessingMode@CBaseStreamGroupProxy@@UEAA-BU_GUID@@XZ.c)
 *     ?GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA?B_JXZ @ 0x18000C3A0 (-GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA-B_JXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D700 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18000D770 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E0B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspe.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     memcmp_0 @ 0x180048C3E (memcmp_0.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  Microsoft::WRL::Details::WeakReferenceImpl **v6; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rdi
  __int64 (__fastcall *v8)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // rbx
  int v9; // eax
  struct IInspectable *v10; // r14
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rbx
  int v12; // eax
  void (__fastcall *v13)(Microsoft::WRL::Details::WeakReferenceImpl *); // rbx
  struct _GUID *v14; // rbx
  __int64 (__fastcall *v15)(CBaseStreamGroupProxy *); // r14
  __int64 InterruptPeriodicity; // rax
  struct _GUID *(__fastcall *v17)(struct _GUID *, struct _GUID *__return_ptr); // r14
  struct _GUID *ProcessingMode; // rax
  __int64 (__fastcall *v19)(__int64); // r14
  int Type; // eax
  const struct tWAVEFORMATEX *(__fastcall *v21)(CBaseStreamGroupProxy *); // r14
  const struct tWAVEFORMATEX *OutputFormat; // rax
  const struct tWAVEFORMATEX *(__fastcall *v23)(CBaseStreamGroupProxy *); // r14
  const struct tWAVEFORMATEX *v24; // rax
  bool (__fastcall *v25)(CBaseStreamGroupProxy *); // r14
  char IsKeywordDetectorStreamGroup; // al
  CBaseStreamGroupProxy *v27; // rbx
  bool (__fastcall *v28)(CBaseStreamGroupProxy *); // r14
  char IsOffload; // al
  struct IInspectable *v30; // rsi
  unsigned int v31; // ebx
  CBaseStreamGroupProxy *v33; // [rsp+20h] [rbp-58h] BYREF
  struct IInspectable *v34; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  struct _GUID v36; // [rsp+38h] [rbp-40h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  v6 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 7);
  while ( v6 != *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 8) )
  {
    v7 = *v6;
    if ( *v6 )
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 8LL))(*v6);
    v34 = 0LL;
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v7 + 24LL);
      if ( v8 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
        v9 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v34);
      else
        v9 = v8(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v34);
      v10 = v34;
      if ( v9 < 0 )
      {
        if ( v34 )
        {
          v34 = 0LL;
          ((void (__fastcall *)(struct IInspectable *))v10->lpVtbl->Release)(v10);
        }
      }
      else if ( v34 )
      {
        v33 = 0LL;
        QueryInterface = v34->lpVtbl->QueryInterface;
        if ( (char *)QueryInterface == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface )
          v12 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v34,
                  &GUID_ef40772f_c4e5_4c56_9bec_1496819370f5,
                  &v33);
        else
          v12 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, CBaseStreamGroupProxy **))QueryInterface)(
                  v34,
                  &GUID_ef40772f_c4e5_4c56_9bec_1496819370f5,
                  &v33);
        if ( v12 >= 0 )
        {
          v14 = (struct _GUID *)v33;
          v15 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v33 + 24LL);
          if ( v15 == CBaseStreamGroupProxy::GetInterruptPeriodicity )
          {
            InterruptPeriodicity = CBaseStreamGroupProxy::GetInterruptPeriodicity(v33);
          }
          else
          {
            InterruptPeriodicity = v15(v33);
            v14 = (struct _GUID *)v33;
          }
          if ( *((_QWORD *)a2 + 3) == InterruptPeriodicity )
          {
            v17 = *(struct _GUID *(__fastcall **)(struct _GUID *, struct _GUID *__return_ptr))(*(_QWORD *)&v14->Data1
                                                                                             + 32LL);
            if ( v17 == CBaseStreamGroupProxy::GetProcessingMode )
            {
              ProcessingMode = CBaseStreamGroupProxy::GetProcessingMode(v14, &v36);
            }
            else
            {
              ProcessingMode = v17(v14, &v36);
              v14 = (struct _GUID *)v33;
            }
            if ( *((_QWORD *)a2 + 4) == *(_QWORD *)&ProcessingMode->Data1
              && *((_QWORD *)a2 + 5) == *(_QWORD *)ProcessingMode->Data4 )
            {
              v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)&v14->Data1 + 80LL);
              if ( v19 == CBaseStreamGroupProxy::GetType )
              {
                Type = CBaseStreamGroupProxy::GetType((__int64)v14);
              }
              else
              {
                Type = v19((__int64)v14);
                v14 = (struct _GUID *)v33;
              }
              if ( *((_DWORD *)a2 + 2) == Type )
              {
                v21 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)&v14->Data1
                                                                                            + 40LL);
                if ( v21 == CBaseStreamGroupProxy::GetOutputFormat )
                {
                  OutputFormat = CBaseStreamGroupProxy::GetOutputFormat((CBaseStreamGroupProxy *)v14);
                }
                else
                {
                  OutputFormat = v21((CBaseStreamGroupProxy *)v14);
                  v14 = (struct _GUID *)v33;
                }
                if ( *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18LL == OutputFormat->cbSize + 18LL )
                {
                  v23 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)&v14->Data1
                                                                                              + 40LL);
                  if ( v23 == CBaseStreamGroupProxy::GetOutputFormat )
                  {
                    v24 = CBaseStreamGroupProxy::GetOutputFormat((CBaseStreamGroupProxy *)v14);
                  }
                  else
                  {
                    v24 = v23((CBaseStreamGroupProxy *)v14);
                    v14 = (struct _GUID *)v33;
                  }
                  if ( !memcmp_0(
                          *((const void **)a2 + 2),
                          v24,
                          *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18LL) )
                  {
                    v25 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)&v14->Data1 + 56LL);
                    if ( v25 == CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup )
                    {
                      IsKeywordDetectorStreamGroup = CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup((CBaseStreamGroupProxy *)v14);
                    }
                    else
                    {
                      IsKeywordDetectorStreamGroup = v25((CBaseStreamGroupProxy *)v14);
                      v14 = (struct _GUID *)v33;
                    }
                    if ( *((_BYTE *)a2 + 49) == IsKeywordDetectorStreamGroup
                      && *((_BYTE *)a2 + 48) == (*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v14->Data1
                                                                                                  + 72LL))(v14) )
                    {
                      v27 = v33;
                      v28 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v33 + 224LL);
                      if ( v28 == CBaseStreamGroupProxy::IsOffload )
                      {
                        IsOffload = CBaseStreamGroupProxy::IsOffload(v33);
                      }
                      else
                      {
                        IsOffload = v28(v33);
                        v27 = v33;
                      }
                      if ( *((_BYTE *)a2 + 50) == IsOffload )
                      {
                        v30 = v34;
                        v33 = 0LL;
                        *a3 = v27;
                        if ( v30 )
                        {
                          v34 = 0LL;
                          ((void (__fastcall *)(struct IInspectable *))v30->lpVtbl->Release)(v30);
                        }
                        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL))(v7);
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v34);
        v13 = *(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL);
LABEL_16:
        v13(v7);
        goto LABEL_17;
      }
      v13 = *(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL);
      if ( (char *)v13 != (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        goto LABEL_16;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
      ++v6;
    }
    else
    {
LABEL_17:
      ++v6;
    }
  }
  v31 = -2147023728;
  if ( *a3 )
    v31 = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v31;
}
