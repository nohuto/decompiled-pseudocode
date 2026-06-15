/*
 * XREFs of ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007F914
 * Callers:
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007FA60 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180082770 (-GetComputedDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x180085C40 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800A5624 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::ConfirmDeviceCanRenderFormat(
        struct IMMDevice **this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        unsigned __int32 a4,
        int a5)
{
  int SharedModeEnginePeriodicity; // eax
  unsigned int v10; // esi
  struct IMMDevice *v11; // rbx
  struct _GUID v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v13 = *a3;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  (CEndpointCharacteristics *)this,
                                  a4,
                                  a2,
                                  &v13,
                                  (unsigned int *)&v14,
                                  0LL,
                                  0LL,
                                  0LL);
  v10 = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity >= 0 && a5 )
  {
    v14 = (unsigned int)(int)((double)(int)v14 * 10000000.0 / (double)(int)a2->nSamplesPerSec + 0.5);
    v11 = this[2];
    *(_QWORD *)&v13.Data1 = v11;
    ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->AddRef)(v11);
    v10 = CPolicyConfig::SetProcessingPeriodInternal(v11, &v14);
    if ( v11 )
      ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
  }
  else if ( SharedModeEnginePeriodicity == -2004287480 )
  {
    v13 = *a3;
    if ( CEndpointCharacteristics::ConnectorProbablySupportsFormat(
           (CEndpointCharacteristics *)this,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a4,
           &v13,
           a2) )
    {
      return (unsigned int)-2005139389;
    }
  }
  return v10;
}
