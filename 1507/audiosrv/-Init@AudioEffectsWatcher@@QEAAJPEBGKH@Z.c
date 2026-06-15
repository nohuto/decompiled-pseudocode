/*
 * XREFs of ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180076120
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180075F98 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800765D4 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800877DC (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::Init(AudioEffectsWatcher *this, unsigned __int16 *a2, int a3, int a4)
{
  const unsigned __int16 **v4; // r12
  unsigned __int64 v6; // r9
  int PropertyStoreProperty; // edi
  signed int LastError; // eax
  CEndpointCharacteristicsCache *v12; // rcx
  int v13; // edi
  const unsigned __int16 *v14; // rdx
  int AliasedEndpointCharacteristics; // eax
  struct CEndpointCharacteristics *v16; // rsi
  HANDLE EventW; // rax
  PTP_WAIT ThreadpoolWait; // rax
  signed int v19; // eax
  const unsigned __int16 *v20; // rcx
  LONG lVal; // eax
  int v23; // edi
  __int64 v24; // [rsp+20h] [rbp-60h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct CEndpointCharacteristics *v26; // [rsp+48h] [rbp-38h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+68h] [rbp-18h] BYREF

  v4 = (const unsigned __int16 **)((char *)this + 8);
  memset(&pvar, 0, sizeof(pvar));
  SecurityDescriptor = 0LL;
  v26 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  PropertyStoreProperty = _AllocStringWorker<CTCoAllocPolicy>(
                            (__int64)this,
                            (__int64)a2,
                            (__int16 *)a2,
                            v6,
                            v24,
                            (char **)this + 1);
  if ( PropertyStoreProperty < 0 )
    goto LABEL_24;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, char *))(**(_QWORD **)&g_DeviceEnumerator
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
    LastError = GetLastError();
    PropertyStoreProperty = LastError;
    if ( LastError > 0 )
      PropertyStoreProperty = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_24;
  }
  v13 = NtCreateWnfStateName(&v28, 3LL, 0LL);
  if ( v13 < 0 )
  {
    PropertyStoreProperty = v13 | 0x10000000;
    goto LABEL_24;
  }
  v14 = *v4;
  *(_QWORD *)((char *)this + 76) = v28;
  *((_BYTE *)this + 72) = 1;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v12, v14, &v26);
  v16 = v26;
  PropertyStoreProperty = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    if ( *((_DWORD *)v26 + 10) )
    {
      EventW = CreateEventW(0LL, 0, 0, 0LL);
      *((_QWORD *)this + 23) = EventW;
      if ( !EventW
        || (ThreadpoolWait = CreateThreadpoolWait(
                               (PTP_WAIT_CALLBACK)AudioEffectsWatcher::EffectsChangedWaitCallback,
                               this,
                               0LL),
            (*((_QWORD *)this + 24) = ThreadpoolWait) == 0LL) )
      {
        v19 = GetLastError();
        PropertyStoreProperty = v19;
        if ( v19 > 0 )
          PropertyStoreProperty = (unsigned __int16)v19 | 0x80070000;
        goto LABEL_22;
      }
      PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, AudioEffectsWatcher *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                       + 48LL))(
                                *(_QWORD *)&g_DeviceEnumerator,
                                this);
      if ( PropertyStoreProperty >= 0 )
      {
        v20 = *v4;
        *((_BYTE *)this + 48) = 1;
        PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(
                                  v20,
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
          goto LABEL_21;
        }
      }
    }
    else
    {
      v23 = RtlPublishWnfStateData(*(_QWORD *)((char *)this + 76), 0LL, &unk_1800C7CE8, 16LL, 0LL);
      if ( v23 >= 0 )
      {
LABEL_21:
        PropertyStoreProperty = 0;
        goto LABEL_22;
      }
      PropertyStoreProperty = v23 | 0x10000000;
    }
  }
LABEL_22:
  if ( v16 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_24:
  LocalFree(SecurityDescriptor);
  PropVariantClear((PROPVARIANT *)&pvar);
  return (unsigned int)PropertyStoreProperty;
}
