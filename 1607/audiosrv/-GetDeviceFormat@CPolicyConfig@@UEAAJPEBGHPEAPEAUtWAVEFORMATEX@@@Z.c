/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800111E0
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     PolicyConfigGetDeviceFormat @ 0x18002D540 (PolicyConfigGetDeviceFormat.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18002F2CC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BC0C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        struct tWAVEFORMATEX **a4)
{
  struct IUnknown *v4; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v5; // esi
  __int64 (__fastcall *v9)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  struct IUnknown *v11; // rcx
  int MMDeviceIdFromInterfaceId; // edi
  void (*v13)(void); // rax
  __int64 v15; // rax
  CEndpointCharacteristics *v16; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v19; // [rsp+48h] [rbp-28h] BYREF
  GUID v20; // [rsp+50h] [rbp-20h] BYREF

  v17 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v5 = eHostProcessConnector;
  pv = 0LL;
  v16 = 0LL;
  v20 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a4 )
  {
    MMDeviceIdFromInterfaceId = -2147467261;
    goto LABEL_20;
  }
  *a4 = 0LL;
  v9 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v9 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       a2,
                                       &v16);
  else
    AliasedEndpointCharacteristics = v9((RTL_SRWLOCK *)g_pEndpointCharacteristicsCache, a2, &v16);
  if ( AliasedEndpointCharacteristics >= 0 )
    goto LABEL_5;
  MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &pv);
  if ( MMDeviceIdFromInterfaceId < 0
    || (MMDeviceIdFromInterfaceId = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, LPVOID, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                      g_pEndpointCharacteristicsCache,
                                      pv,
                                      &v16),
        MMDeviceIdFromInterfaceId < 0)
    || (MMDeviceIdFromInterfaceId = mmdDevGetInterfaceClassGuid(a2, &v20), MMDeviceIdFromInterfaceId < 0) )
  {
LABEL_20:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetDeviceFormat", 0x9FFu, MMDeviceIdFromInterfaceId);
    goto LABEL_10;
  }
  v15 = *(_QWORD *)&v20.Data1 - DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
  if ( *(_QWORD *)&v20.Data1 == (_QWORD)DEVINTERFACE_AUDIO_KEYWORDDETECTOR )
    v15 = *(_QWORD *)v20.Data4 - *((_QWORD *)&DEVINTERFACE_AUDIO_KEYWORDDETECTOR + 1);
  if ( !v15 )
    v5 = eKeywordDetectorConnector;
LABEL_5:
  v4 = (struct IUnknown *)*((_QWORD *)v16 + 2);
  ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->AddRef)(v4);
  v11 = v19;
  if ( v19 != v4 )
  {
    ATL::AtlComQIPtrAssign(&v19, v4, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990);
    v11 = v19;
  }
  if ( v11 )
  {
    MMDeviceIdFromInterfaceId = ((__int64 (__fastcall *)(struct IUnknown *, int *))v11->lpVtbl[3].Release)(v11, &v17);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_20;
  }
  MMDeviceIdFromInterfaceId = CEndpointCharacteristics::GetDeviceFormat(v16, a3 != 0, v17 != 0, v5, a4);
  if ( MMDeviceIdFromInterfaceId < 0 )
    goto LABEL_20;
LABEL_10:
  if ( v16 )
  {
    v13 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
    if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v16);
    else
      v13();
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v19 )
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return (unsigned int)MMDeviceIdFromInterfaceId;
}
