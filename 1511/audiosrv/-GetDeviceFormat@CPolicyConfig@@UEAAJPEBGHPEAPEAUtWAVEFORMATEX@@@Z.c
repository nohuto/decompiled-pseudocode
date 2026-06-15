/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A5C0
 * Callers:
 *     PolicyConfigGetDeviceFormat @ 0x180038250 (PolicyConfigGetDeviceFormat.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180042ABC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        struct tWAVEFORMATEX **a4)
{
  struct IUnknown *v4; // rdi
  struct IMMDevice **v5; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r15d
  int MMDeviceIdFromInterfaceId; // r14d
  CEndpointCharacteristicsCache *v11; // rcx
  __int64 v12; // rax
  struct IUnknown *v13; // rsi
  int v15; // [rsp+30h] [rbp-40h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-38h] BYREF
  struct IUnknown *v17; // [rsp+40h] [rbp-30h] BYREF
  struct CEndpointCharacteristics *v18; // [rsp+48h] [rbp-28h] BYREF
  GUID v19; // [rsp+50h] [rbp-20h] BYREF

  v15 = 0;
  v4 = 0LL;
  v17 = 0LL;
  v5 = 0LL;
  pv = 0LL;
  v6 = eHostProcessConnector;
  v18 = 0LL;
  v19 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a4 )
  {
    MMDeviceIdFromInterfaceId = -2147467261;
LABEL_16:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        (unsigned int)MMDeviceIdFromInterfaceId);
    }
    goto LABEL_20;
  }
  v11 = g_pEndpointCharacteristicsCache;
  *a4 = 0LL;
  if ( (int)CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v11, a2, &v18) < 0 )
  {
    MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &pv);
    if ( MMDeviceIdFromInterfaceId < 0
      || (MMDeviceIdFromInterfaceId = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                        g_pEndpointCharacteristicsCache,
                                        (const unsigned __int16 *)pv,
                                        &v18),
          MMDeviceIdFromInterfaceId < 0)
      || (MMDeviceIdFromInterfaceId = mmdDevGetInterfaceClassGuid(a2, &v19), MMDeviceIdFromInterfaceId < 0) )
    {
      v5 = (struct IMMDevice **)v18;
      goto LABEL_16;
    }
    v12 = *(_QWORD *)&v19.Data1 - DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
    if ( *(_QWORD *)&v19.Data1 == (_QWORD)DEVINTERFACE_AUDIO_KEYWORDDETECTOR )
      v12 = *(_QWORD *)v19.Data4 - *((_QWORD *)&DEVINTERFACE_AUDIO_KEYWORDDETECTOR + 1);
    if ( !v12 )
      v6 = eKeywordDetectorConnector;
  }
  v5 = (struct IMMDevice **)v18;
  v4 = (struct IUnknown *)*((_QWORD *)v18 + 2);
  ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->AddRef)(v4);
  v13 = v17;
  if ( v17 != v4 )
  {
    ATL::AtlComQIPtrAssign(&v17, v4, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    v13 = v17;
  }
  if ( v13 )
  {
    MMDeviceIdFromInterfaceId = ((__int64 (__fastcall *)(struct IUnknown *, int *))v13->lpVtbl[3].Release)(v13, &v15);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_16;
  }
  MMDeviceIdFromInterfaceId = CPolicyConfig::GetDeviceFormatInternal(v5, a3, v15, v6, a4);
  if ( MMDeviceIdFromInterfaceId < 0 )
    goto LABEL_16;
LABEL_20:
  if ( v5 )
    ((void (__fastcall *)(struct IMMDevice **))(*v5)[2].lpVtbl)(v5);
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return (unsigned int)MMDeviceIdFromInterfaceId;
}
