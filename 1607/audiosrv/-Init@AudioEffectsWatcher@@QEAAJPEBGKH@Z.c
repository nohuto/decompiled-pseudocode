/*
 * XREFs of ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180003518
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180003E94 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800031B4 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180004414 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002545C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025520 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioEffectsWatcher::Init(AudioEffectsWatcher *this, const unsigned __int16 *a2, __int64 a3, int a4)
{
  unsigned __int16 **v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  int PropertyStoreProperty; // ebx
  int v11; // ebx
  __int64 (__fastcall *v12)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  const unsigned __int16 *v13; // rdx
  int AliasedEndpointCharacteristics; // eax
  HANDLE EventW; // rax
  PTP_WAIT ThreadpoolWait; // rax
  const unsigned __int16 *v17; // rcx
  LONG lVal; // eax
  void (__fastcall *v19)(struct CEndpointCharacteristics *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64); // rax
  signed int LastError; // eax
  unsigned __int16 **v22; // [rsp+20h] [rbp-60h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-58h]
  unsigned int v24; // [rsp+30h] [rbp-50h]
  unsigned int v25; // [rsp+40h] [rbp-40h]
  struct CEndpointCharacteristics *v26; // [rsp+48h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-30h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h] BYREF

  v25 = a3;
  memset(&pvar, 0, sizeof(pvar));
  SecurityDescriptor = 0LL;
  v26 = 0LL;
  v7 = (unsigned __int16 **)((char *)this + 8);
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  v9 = v8 + 1;
  *v7 = 0LL;
  if ( v8 + 1 < v8 )
  {
    PropertyStoreProperty = -2147024362;
    goto LABEL_27;
  }
  *v7 = 0LL;
  if ( is_mul_ok(v9, 2uLL) )
  {
    PropertyStoreProperty = CTCoAllocPolicy::Alloc(0LL, (v9 * (unsigned __int128)2uLL) >> 64, 2 * v9, (void **)this + 1);
    if ( PropertyStoreProperty >= 0 )
      StringCchCopyNExW(*v7, v8 + 1, a2, v8, v22, v23, v24);
    a3 = v25;
  }
  else
  {
    PropertyStoreProperty = -2147024362;
  }
  if ( PropertyStoreProperty < 0 )
    goto LABEL_24;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, char *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                              + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a2,
                            (char *)this + 40);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_24;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:P(A;;GA;;;WD)(A;;GR;;;AC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
LABEL_29:
    LastError = GetLastError();
    PropertyStoreProperty = LastError;
    if ( LastError > 0 )
      PropertyStoreProperty = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_24;
  }
  v11 = NtCreateWnfStateName(&v29, 3LL, 0LL, 0LL, 0LL, 1600, SecurityDescriptor);
  if ( v11 < 0 )
  {
LABEL_31:
    PropertyStoreProperty = v11 | 0x10000000;
    goto LABEL_24;
  }
  *(_QWORD *)((char *)this + 76) = v29;
  *((_BYTE *)this + 72) = 1;
  v12 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  v13 = *v7;
  if ( v12 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       v13,
                                       &v26);
  else
    AliasedEndpointCharacteristics = v12(g_pEndpointCharacteristicsCache, v13, &v26);
  PropertyStoreProperty = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_24;
  if ( !*((_DWORD *)v26 + 10) )
  {
    v11 = RtlPublishWnfStateData(*(_QWORD *)((char *)this + 76), 0LL, &unk_1800A99C0, 16LL, 0LL);
    if ( v11 >= 0 )
    {
LABEL_23:
      PropertyStoreProperty = 0;
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 23) = EventW;
  if ( !EventW )
    goto LABEL_29;
  ThreadpoolWait = CreateThreadpoolWait(AudioEffectsWatcher::EffectsChangedWaitCallback, this, 0LL);
  *((_QWORD *)this + 24) = ThreadpoolWait;
  if ( !ThreadpoolWait )
    goto LABEL_29;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                   + 48LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            this);
  if ( PropertyStoreProperty >= 0 )
  {
    v17 = *v7;
    *((_BYTE *)this + 48) = 1;
    PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v17, 1, &PKEY_AudioEndpoint_Disable_SysFx, &pvar);
    if ( PropertyStoreProperty >= 0 )
    {
      lVal = 0;
      if ( pvar.vt == 19 )
        lVal = pvar.lVal;
      *((_DWORD *)this + 13) = lVal;
      AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(this);
      SetThreadpoolWait(*((PTP_WAIT *)this + 24), *((HANDLE *)this + 23), 0LL);
      goto LABEL_23;
    }
  }
LABEL_24:
  if ( v26 )
  {
    v19 = *(void (__fastcall **)(struct CEndpointCharacteristics *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64))(*(_QWORD *)v26 + 16LL);
    if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        v26,
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release,
        a3);
    else
      v19(
        v26,
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release,
        a3);
  }
LABEL_27:
  LocalFree(SecurityDescriptor);
  PropVariantClear((PROPVARIANT *)&pvar);
  return (unsigned int)PropertyStoreProperty;
}
