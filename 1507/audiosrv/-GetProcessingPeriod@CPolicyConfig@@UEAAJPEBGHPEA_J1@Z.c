/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001EF00
 * Callers:
 *     ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0 (-GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z @ 0x18002D4B8 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 *a4,
        __int64 *a5)
{
  int ProcessingPeriodInternal; // esi
  struct IMMDevice *v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  ProcessingPeriodInternal = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                               *(_QWORD *)&g_DeviceEnumerator,
                               a2,
                               &v9);
  if ( ProcessingPeriodInternal < 0
    || (ProcessingPeriodInternal = CPolicyConfig::GetProcessingPeriodInternal(v9, a3, a4, a5),
        ProcessingPeriodInternal < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        48LL,
        &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        (unsigned int)ProcessingPeriodInternal);
    }
  }
  if ( v9 )
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
  return (unsigned int)ProcessingPeriodInternal;
}
