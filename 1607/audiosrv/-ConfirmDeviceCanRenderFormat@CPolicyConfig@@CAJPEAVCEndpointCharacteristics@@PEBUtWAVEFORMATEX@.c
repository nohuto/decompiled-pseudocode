/*
 * XREFs of ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067B44
 * Callers:
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067C88 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z @ 0x18006F754 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@PEA_J@Z.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18008800C (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::ConfirmDeviceCanRenderFormat(
        struct CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        __int32 a4,
        int a5)
{
  int SharedModeEnginePeriodicity; // eax
  unsigned int v10; // edi
  struct IMMDevice *v11; // rbx
  struct _GUID v13; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF

  v13 = *a3;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  (__int64)this,
                                  a4,
                                  a2,
                                  &v13,
                                  0,
                                  &v14,
                                  0LL,
                                  0LL,
                                  0LL);
  v10 = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity >= 0 && a5 )
  {
    v14 = (unsigned int)(int)((double)(int)v14 * 10000000.0 / (double)(int)a2->nSamplesPerSec + 0.5);
    v11 = (struct IMMDevice *)*((_QWORD *)this + 2);
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
           this,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a4,
           &v13,
           a2) )
    {
      return (unsigned int)-2005139389;
    }
  }
  return v10;
}
