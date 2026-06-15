/*
 * XREFs of ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800310D8
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180030888 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x180030BAC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800320A8 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::Init(AudioEffectsWatcher *this, const unsigned __int16 *a2, int a3, int a4)
{
  int PropertyStoreProperty; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int16 *v11; // rax
  int v12; // ebx
  const unsigned __int16 *v13; // rdx
  RTL_SRWLOCK *v14; // rcx
  int AliasedEndpointCharacteristics; // eax
  struct CEndpointCharacteristics *v16; // rsi
  HANDLE EventW; // rax
  PTP_WAIT ThreadpoolWait; // rax
  const unsigned __int16 *v19; // rcx
  LONG lVal; // eax
  __int64 (__fastcall *v21)(volatile signed __int32 *); // rdi
  signed int v23; // eax
  signed int LastError; // eax
  int v25; // ebx
  unsigned __int16 **v26; // [rsp+20h] [rbp-60h]
  unsigned __int64 *v27; // [rsp+28h] [rbp-58h]
  unsigned int v28; // [rsp+30h] [rbp-50h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct CEndpointCharacteristics *v30; // [rsp+48h] [rbp-38h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-30h] BYREF
  __int64 v32; // [rsp+68h] [rbp-18h] BYREF

  PropertyStoreProperty = 0;
  SecurityDescriptor = 0LL;
  v5 = -1LL;
  v30 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  do
    ++v5;
  while ( a2[v5] );
  v10 = v5 + 1;
  *((_QWORD *)this + 1) = 0LL;
  if ( v5 + 1 < v5 )
  {
    PropertyStoreProperty = -2147024362;
    goto LABEL_24;
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( is_mul_ok(v10, 2uLL) )
  {
    v11 = (unsigned __int16 *)CoTaskMemAlloc(2 * v10);
    *((_QWORD *)this + 1) = v11;
    if ( !v11 )
    {
      PropertyStoreProperty = -2147024882;
      goto LABEL_24;
    }
    StringCchCopyNExW(v11, v5 + 1, a2, v5, v26, v27, v28);
  }
  else
  {
    PropertyStoreProperty = -2147024362;
  }
  if ( PropertyStoreProperty >= 0 )
  {
    *((_DWORD *)this + 4) = a3;
    *((_DWORD *)this + 5) = a4;
    PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, char *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                                + 40LL))(
                              *(_QWORD *)&g_DeviceEnumerator,
                              a2,
                              (char *)this + 40);
    if ( PropertyStoreProperty >= 0 )
    {
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:P(A;;GA;;;WD)(A;;GR;;;AC)",
             1u,
             &SecurityDescriptor,
             0LL) )
      {
        v12 = NtCreateWnfStateName(&v32, 3LL, 0LL, 0LL, 0LL, 1600, SecurityDescriptor);
        if ( v12 < 0 )
        {
          PropertyStoreProperty = v12 | 0x10000000;
          goto LABEL_24;
        }
        v13 = (const unsigned __int16 *)*((_QWORD *)this + 1);
        v14 = (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache;
        *(_QWORD *)((char *)this + 76) = v32;
        *((_BYTE *)this + 72) = 1;
        AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                           v14,
                                           v13,
                                           &v30);
        v16 = v30;
        PropertyStoreProperty = AliasedEndpointCharacteristics;
        if ( AliasedEndpointCharacteristics < 0 )
          goto LABEL_21;
        if ( *((_DWORD *)v30 + 10) )
        {
          EventW = CreateEventW(0LL, 0, 0, 0LL);
          *((_QWORD *)this + 23) = EventW;
          if ( !EventW
            || (ThreadpoolWait = CreateThreadpoolWait(AudioEffectsWatcher::EffectsChangedWaitCallback, this, 0LL),
                (*((_QWORD *)this + 24) = ThreadpoolWait) == 0LL) )
          {
            LastError = GetLastError();
            PropertyStoreProperty = LastError;
            if ( LastError > 0 )
              PropertyStoreProperty = (unsigned __int16)LastError | 0x80070000;
            goto LABEL_21;
          }
          PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                           + 48LL))(
                                    *(_QWORD *)&g_DeviceEnumerator,
                                    this);
          if ( PropertyStoreProperty >= 0 )
          {
            v19 = (const unsigned __int16 *)*((_QWORD *)this + 1);
            *((_BYTE *)this + 48) = 1;
            PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(
                                      v19,
                                      1,
                                      &PKEY_AudioEndpoint_Disable_SysFx,
                                      &pvar);
            if ( PropertyStoreProperty >= 0 )
            {
              lVal = 0;
              if ( pvar.vt == 19 )
                lVal = pvar.lVal;
              *((_DWORD *)this + 13) = lVal;
              AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(this);
              SetThreadpoolWait(*((PTP_WAIT *)this + 24), *((HANDLE *)this + 23), 0LL);
              goto LABEL_20;
            }
          }
        }
        else
        {
          v25 = RtlPublishWnfStateData(*(_QWORD *)((char *)this + 76), 0LL, &unk_1800C6150, 16LL, 0LL);
          if ( v25 >= 0 )
          {
LABEL_20:
            PropertyStoreProperty = 0;
            goto LABEL_21;
          }
          PropertyStoreProperty = v25 | 0x10000000;
        }
LABEL_21:
        if ( v16 )
        {
          v21 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL);
          if ( v21 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v16);
          else
            v21((volatile signed __int32 *)v16);
        }
        goto LABEL_24;
      }
      v23 = GetLastError();
      PropertyStoreProperty = v23;
      if ( v23 > 0 )
        PropertyStoreProperty = (unsigned __int16)v23 | 0x80070000;
    }
  }
LABEL_24:
  LocalFree(SecurityDescriptor);
  PropVariantClear((PROPVARIANT *)&pvar);
  return (unsigned int)PropertyStoreProperty;
}
