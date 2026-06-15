/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180021E80
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180023EC0 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023310 (-IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023320 (-IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?GetType@CBaseStreamGroupProxy@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x180023360 (-GetType@CBaseStreamGroupProxy@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     ?GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x180023380 (-GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?GetProcessingMode@CBaseStreamGroupProxy@@UEAA?BU_GUID@@XZ @ 0x180023390 (-GetProcessingMode@CBaseStreamGroupProxy@@UEAA-BU_GUID@@XZ.c)
 *     ?GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA?B_JXZ @ 0x1800233B0 (-GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA-B_JXZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024A50 (-Release@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024AF0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspe.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180024D90 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024E60 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180038F04 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rbx
  __int64 (__fastcall *v8)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // rax
  int v9; // eax
  struct IInspectable *v10; // rcx
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rax
  int v12; // eax
  CBaseStreamGroupProxy *v13; // rsi
  __int64 (__fastcall *v14)(CBaseStreamGroupProxy *__hidden); // rax
  __int64 InterruptPeriodicity; // rax
  struct _GUID *(__fastcall *v16)(CBaseStreamGroupProxy *__hidden, struct _GUID *__return_ptr __struct_ptr); // rax
  struct _GUID *ProcessingMode; // rax
  struct _GUID *v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(CBaseStreamGroupProxy *); // rax
  int Type; // eax
  const struct tWAVEFORMATEX *(__fastcall *v22)(CBaseStreamGroupProxy *__hidden); // rax
  const struct tWAVEFORMATEX *OutputFormat; // rax
  const struct tWAVEFORMATEX *(__fastcall *v24)(CBaseStreamGroupProxy *__hidden); // rax
  const struct tWAVEFORMATEX *v25; // rax
  bool (__fastcall *v26)(CBaseStreamGroupProxy *__hidden); // rax
  char IsKeywordDetectorStreamGroup; // al
  bool (__fastcall *v28)(CBaseStreamGroupProxy *__hidden); // rax
  char IsOffload; // al
  struct IInspectable *v30; // rcx
  ULONG (__stdcall *Release)(IInspectable *); // rax
  void (__fastcall *v32)(Microsoft::WRL::Details::WeakReferenceImpl *); // rax
  unsigned int v33; // ebx
  Microsoft::WRL::Details::WeakReferenceImpl *v35; // rcx
  __int64 (__fastcall *v36)(Microsoft::WRL::Details::WeakReferenceImpl *); // rax
  CBaseStreamGroupProxy *v37; // rcx
  struct IInspectable *v38; // rcx
  CBaseStreamGroupProxy *v39; // rcx
  __int64 v40; // rax
  struct IInspectable *v41; // rcx
  struct IInspectable *v42; // [rsp+20h] [rbp-30h] BYREF
  CBaseStreamGroupProxy *v43; // [rsp+28h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v45; // [rsp+38h] [rbp-18h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&lpCriticalSection);
  for ( i = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 7);
        i != *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 8);
        ++i )
  {
    v7 = *i;
    if ( *i )
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 8LL))(*i);
    v42 = 0LL;
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v7 + 24LL);
      if ( v8 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
        v9 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v42);
      else
        v9 = v8(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v42);
      v10 = v42;
      if ( v9 < 0 )
      {
        if ( !v42 )
          goto LABEL_47;
      }
      else
      {
        if ( !v42 )
          goto LABEL_47;
        v43 = 0LL;
        QueryInterface = v42->lpVtbl->QueryInterface;
        if ( (char *)QueryInterface == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface )
          v12 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v42,
                  &GUID_a4c3fa39_46b5_49d9_90a8_bb7bc3257baf,
                  &v43);
        else
          v12 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, CBaseStreamGroupProxy **))QueryInterface)(
                  v42,
                  &GUID_a4c3fa39_46b5_49d9_90a8_bb7bc3257baf,
                  &v43);
        if ( v12 < 0 )
        {
          v37 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v37 + 16LL))(v37);
          }
          v38 = v42;
          if ( v42 )
          {
            v42 = 0LL;
            ((void (__fastcall *)(struct IInspectable *))v38->lpVtbl->Release)(v38);
          }
          v35 = v7;
          v36 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL);
          if ( (char *)v36 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          {
LABEL_48:
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v35);
            continue;
          }
          goto LABEL_50;
        }
        v13 = v43;
        v14 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v43 + 24LL);
        if ( v14 == CBaseStreamGroupProxy::GetInterruptPeriodicity )
        {
          InterruptPeriodicity = CBaseStreamGroupProxy::GetInterruptPeriodicity(v43);
        }
        else
        {
          InterruptPeriodicity = v14(v43);
          v13 = v43;
        }
        if ( *((_QWORD *)a2 + 3) != InterruptPeriodicity )
        {
          if ( v13 )
            goto LABEL_62;
          goto LABEL_64;
        }
        v16 = *(struct _GUID *(__fastcall **)(CBaseStreamGroupProxy *__hidden, struct _GUID *__return_ptr __struct_ptr))(*(_QWORD *)v13 + 32LL);
        if ( v16 == CBaseStreamGroupProxy::GetProcessingMode )
        {
          ProcessingMode = CBaseStreamGroupProxy::GetProcessingMode(v13, &v45);
        }
        else
        {
          ProcessingMode = v16(v13, &v45);
          v13 = v43;
        }
        v18 = ProcessingMode;
        v19 = *((_QWORD *)a2 + 4) - *(_QWORD *)&ProcessingMode->Data1;
        if ( !v19 )
          v19 = *((_QWORD *)a2 + 5) - *(_QWORD *)v18->Data4;
        if ( v19 )
        {
          if ( v13 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v13 + 16LL))(v13);
          }
          v10 = v42;
          if ( !v42 )
            goto LABEL_47;
        }
        else
        {
          v20 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v13 + 80LL);
          if ( (char *)v20 == (char *)CBaseStreamGroupProxy::GetType )
          {
            Type = CBaseStreamGroupProxy::GetType(v13);
          }
          else
          {
            Type = v20(v13);
            v13 = v43;
          }
          if ( *((_DWORD *)a2 + 2) == Type )
          {
            v22 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v13 + 40LL);
            if ( v22 == CBaseStreamGroupProxy::GetOutputFormat )
            {
              OutputFormat = CBaseStreamGroupProxy::GetOutputFormat(v13);
            }
            else
            {
              OutputFormat = v22(v13);
              v13 = v43;
            }
            if ( *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18LL == OutputFormat->cbSize + 18LL )
            {
              v24 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v13 + 40LL);
              if ( v24 == CBaseStreamGroupProxy::GetOutputFormat )
              {
                v25 = CBaseStreamGroupProxy::GetOutputFormat(v13);
              }
              else
              {
                v25 = v24(v13);
                v13 = v43;
              }
              if ( !memcmp_0(*((const void **)a2 + 2), v25, *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18LL) )
              {
                v26 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v13 + 56LL);
                if ( v26 == CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup )
                {
                  IsKeywordDetectorStreamGroup = CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup(v13);
                }
                else
                {
                  IsKeywordDetectorStreamGroup = v26(v13);
                  v13 = v43;
                }
                if ( *((_BYTE *)a2 + 49) == IsKeywordDetectorStreamGroup )
                {
                  if ( *((_BYTE *)a2 + 48) == (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v13 + 72LL))(v13) )
                  {
                    v13 = v43;
                    v28 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v43 + 232LL);
                    if ( v28 == CBaseStreamGroupProxy::IsOffload )
                    {
                      IsOffload = CBaseStreamGroupProxy::IsOffload(v43);
                    }
                    else
                    {
                      IsOffload = v28(v43);
                      v13 = v43;
                    }
                    if ( *((_BYTE *)a2 + 50) == IsOffload )
                    {
                      v30 = v42;
                      v43 = 0LL;
                      *a3 = v13;
                      if ( v30 )
                      {
                        v42 = 0LL;
                        Release = v30->lpVtbl->Release;
                        if ( (char *)Release == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release )
                          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
                            v30,
                            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release);
                        else
                          ((void (__fastcall *)(struct IInspectable *, __int64 (__fastcall *)(_QWORD, _QWORD)))Release)(
                            v30,
                            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release);
                      }
                      v32 = *(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL);
                      if ( (char *)v32 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
                      else
                        v32(v7);
                      break;
                    }
                    if ( v13 )
                    {
LABEL_62:
                      v43 = 0LL;
                      v39 = v13;
                      v40 = *(_QWORD *)v13;
                      goto LABEL_63;
                    }
                  }
                  else
                  {
                    v39 = v43;
                    if ( v43 )
                    {
                      v43 = 0LL;
                      v40 = *(_QWORD *)v39;
LABEL_63:
                      (*(void (__fastcall **)(CBaseStreamGroupProxy *))(v40 + 16))(v39);
                    }
                  }
LABEL_64:
                  v41 = v42;
                  if ( v42 )
                  {
                    v42 = 0LL;
                    ((void (__fastcall *)(struct IInspectable *))v41->lpVtbl->Release)(v41);
                  }
LABEL_47:
                  v35 = v7;
                  v36 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL);
                  if ( (char *)v36 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                    goto LABEL_48;
LABEL_50:
                  v36(v35);
                  continue;
                }
                if ( v13 )
                {
                  v43 = 0LL;
                  (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v13 + 16LL))(v13);
                }
                v10 = v42;
                if ( !v42 )
                  goto LABEL_47;
              }
              else
              {
                if ( v13 )
                {
                  v43 = 0LL;
                  (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v13 + 16LL))(v13);
                }
                v10 = v42;
                if ( !v42 )
                  goto LABEL_47;
              }
            }
            else
            {
              if ( v13 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v13 + 16LL))(v13);
              }
              v10 = v42;
              if ( !v42 )
                goto LABEL_47;
            }
          }
          else
          {
            if ( v13 )
            {
              v43 = 0LL;
              (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v13 + 16LL))(v13);
            }
            v10 = v42;
            if ( !v42 )
              goto LABEL_47;
          }
        }
      }
      v42 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v10->lpVtbl->Release)(v10);
      goto LABEL_47;
    }
  }
  v33 = -2147023728;
  if ( *a3 )
    v33 = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v33;
}
