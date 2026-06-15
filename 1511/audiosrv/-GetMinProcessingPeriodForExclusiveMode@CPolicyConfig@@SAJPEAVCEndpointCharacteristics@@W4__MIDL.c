/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000EBE0
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x18000E7F0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     AudioServerGetDevicePeriod @ 0x180089970 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800129D0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180013340 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006448C (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  bool v5; // zf
  char *v6; // rax
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r9
  struct _GUID *DefaultConnectorProcessingMode; // rax
  struct _GUID v11; // xmm6
  __int64 v12; // rbx
  int DeviceFormatInternal; // ebp
  int *v14; // rbx
  double v15; // xmm1_8
  __int64 v16; // rcx
  LPVOID pv[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-68h] BYREF
  struct _GUID v20; // [rsp+60h] [rbp-58h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[0] = 0LL;
  v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v5 = (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(a1) == 0;
  v6 = (char *)a1 + 128;
  if ( !v5 )
    v6 = (char *)a1 + 64;
  v7 = 0;
  v8 = *((_DWORD *)v6 + 2);
  if ( v8 <= 0 )
    goto LABEL_11;
  v9 = *(_QWORD *)v6;
  while ( *(_QWORD *)(v9 + 16LL * v7) != *(_QWORD *)&v19.Data1
       || *(_QWORD *)(v9 + 16LL * v7 + 8) != *(_QWORD *)v19.Data4 )
  {
    if ( ++v7 >= v8 )
      goto LABEL_11;
  }
  if ( v7 == -1 )
  {
LABEL_11:
    DefaultConnectorProcessingMode = CEndpointCharacteristics::GetDefaultConnectorProcessingMode(
                                       a1,
                                       &v20,
                                       eHostProcessConnector);
  }
  else
  {
    v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    DefaultConnectorProcessingMode = &v19;
  }
  v11 = *DefaultConnectorProcessingMode;
  *a3 = 0LL;
  v19 = v11;
  if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
              a1,
              eHostProcessConnector,
              &v19,
              (struct tWAVEFORMATEX **)pv) >= 0 )
    goto LABEL_17;
  v12 = *((_QWORD *)a1 + 2);
  *(_QWORD *)&v19.Data1 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                           a1,
                           0,
                           0,
                           eHostProcessConnector,
                           (struct tWAVEFORMATEX **)pv);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( DeviceFormatInternal >= 0 )
  {
LABEL_17:
    *a3 = 30000LL;
    v20 = v11;
    v14 = (int *)pv[0];
    if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                a1,
                eHostProcessConnector,
                (const struct tWAVEFORMATEX *)pv[0],
                &v20,
                0LL,
                0LL,
                &v19.Data1,
                0LL) >= 0 )
    {
      v15 = (double)(int)v19.Data1 * 10000000.0 / (double)v14[1] + 0.5;
      v16 = *a3;
      if ( (unsigned int)(int)v15 < *a3 )
        v16 = (unsigned int)(int)v15;
      *a3 = v16;
    }
    DeviceFormatInternal = 0;
  }
  else
  {
    v14 = (int *)pv[0];
  }
  CoTaskMemFree(v14);
  return (unsigned int)DeviceFormatInternal;
}
