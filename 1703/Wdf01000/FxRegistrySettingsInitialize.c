/*
 * XREFs of FxRegistrySettingsInitialize @ 0x1C0019FF0
 * Callers:
 *     FxInitialize @ 0x1C0019B00 (FxInitialize.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017610 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x1C006536C (-SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C00800C8 (FxDriverGlobalsInitializeDebugExtension.c)
 */

void __fastcall FxRegistrySettingsInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _UNICODE_STRING *RegistryPath,
        unsigned __int8 WindowsVerifierOn)
{
  unsigned __int8 v3; // si
  unsigned int v6; // edx
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  int (__fastcall *SystemRoutineAddress)(unsigned int, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *); // rax
  bool v10; // zf
  void *m_Key; // rdi
  NTSTATUS v12; // eax
  void *v13; // rdi
  NTSTATUS v14; // eax
  void *v15; // rdi
  NTSTATUS v16; // eax
  _WDF_BIND_INFO *v17; // rcx
  unsigned int v18; // eax
  NTSTATUS v19; // eax
  _FX_DRIVER_GLOBALS *v20; // rcx
  unsigned int timeoutValue; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int zero; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int verifierOnValue; // [rsp+38h] [rbp-C8h] BYREF
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int defaultTrue; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int verboseValue; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int allocateFailValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int verifyDownlevelValue; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int forceLogsInMiniDump; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int trackDriverForMiniDumpLog; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int requestParentOptimizationOn; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int dsfValue; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int removeLockOptionFlags; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  unsigned int max; // [rsp+80h] [rbp-80h] BYREF
  FxAutoRegKey hDriver; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING timeoutName; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING FunctionName; // [rsp+B0h] [rbp-50h] BYREF
  _RTL_QUERY_REGISTRY_TABLE paramTable[10]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v42; // [rsp+2F4h] [rbp+1F4h]
  unsigned int v43; // [rsp+2FCh] [rbp+1FCh]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+308h] [rbp+208h] BYREF
  __int64 v45; // [rsp+338h] [rbp+238h]
  wchar_t v46; // [rsp+340h] [rbp+240h]
  wchar_t parametersPath_buffer[20]; // [rsp+348h] [rbp+248h] BYREF
  wchar_t timeoutName_buffer[40]; // [rsp+370h] [rbp+270h] BYREF

  v3 = 1;
  parametersPath.Buffer = parametersPath_buffer;
  zero = 0;
  max = -1;
  defaultTrue = 1;
  hDriver.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  *(_DWORD *)&parametersPath.Length = 1966108;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  if ( RegistryPath )
  {
    ObjectAttributes.ObjectName = RegistryPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&hDriver.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ObjectAttributes.RootDirectory = hDriver.m_Key;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &parametersPath;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) < 0 )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v6, 9u) )
        {
          _FX_DRIVER_GLOBALS::SetVerifierState(FxDriverGlobals, WindowsVerifierOn);
          if ( FxDriverGlobals->FxVerifierOn )
            FxDriverGlobalsInitializeDebugExtension(v20, 0LL);
        }
      }
      else
      {
        memset(paramTable, 0, sizeof(paramTable));
        WdfBindInfo = FxDriverGlobals->WdfBindInfo;
        paramTable[0].Name = L"VerboseOn";
        paramTable[0].EntryContext = &verboseValue;
        paramTable[0].DefaultData = &zero;
        paramTable[1].Name = L"VerifierAllocateFailCount";
        paramTable[1].EntryContext = &allocateFailValue;
        paramTable[1].DefaultData = &max;
        verboseValue = 0;
        paramTable[0].Flags = 288;
        paramTable[0].DefaultType = 0x4000000;
        paramTable[0].DefaultLength = 4;
        allocateFailValue = -1;
        paramTable[1].Flags = 288;
        paramTable[1].DefaultType = 0x4000000;
        paramTable[1].DefaultLength = 4;
        verifierOnValue = 0;
        Major = WdfBindInfo->Version.Major;
        if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 9 )
          verifierOnValue = WindowsVerifierOn;
        paramTable[2].Flags = 288;
        paramTable[2].Name = L"VerifierOn";
        paramTable[2].DefaultType = 0x4000000;
        paramTable[2].EntryContext = &verifierOnValue;
        paramTable[2].DefaultLength = 4;
        paramTable[2].DefaultData = &verifierOnValue;
        paramTable[3].Name = L"VerifyDownLevel";
        paramTable[3].EntryContext = &verifyDownlevelValue;
        paramTable[3].DefaultData = &zero;
        paramTable[4].Name = L"ForceLogsInMiniDump";
        paramTable[4].EntryContext = &forceLogsInMiniDump;
        paramTable[4].DefaultData = &zero;
        paramTable[5].Name = L"TrackDriverForMiniDumpLog";
        paramTable[5].EntryContext = &trackDriverForMiniDumpLog;
        paramTable[5].DefaultData = &defaultTrue;
        paramTable[6].Name = L"RequestParentOptimizationOn";
        paramTable[6].EntryContext = &requestParentOptimizationOn;
        paramTable[6].DefaultData = &defaultTrue;
        paramTable[7].Name = L"DsfOn";
        paramTable[7].EntryContext = &dsfValue;
        paramTable[7].DefaultData = &zero;
        paramTable[8].Name = L"RemoveLockOptionFlags";
        paramTable[8].EntryContext = &removeLockOptionFlags;
        paramTable[8].DefaultData = &zero;
        verifyDownlevelValue = 0;
        paramTable[3].Flags = 288;
        paramTable[3].DefaultType = 0x4000000;
        paramTable[3].DefaultLength = 4;
        forceLogsInMiniDump = 0;
        paramTable[4].Flags = 288;
        paramTable[4].DefaultType = 0x4000000;
        paramTable[4].DefaultLength = 4;
        trackDriverForMiniDumpLog = 1;
        paramTable[5].Flags = 288;
        paramTable[5].DefaultType = 0x4000000;
        paramTable[5].DefaultLength = 4;
        requestParentOptimizationOn = 1;
        paramTable[6].Flags = 288;
        paramTable[6].DefaultType = 0x4000000;
        paramTable[6].DefaultLength = 4;
        dsfValue = 0;
        paramTable[7].Flags = 288;
        paramTable[7].DefaultType = 0x4000000;
        paramTable[7].DefaultLength = 4;
        removeLockOptionFlags = 0;
        paramTable[8].Flags = 288;
        paramTable[8].DefaultType = 0x4000000;
        paramTable[8].DefaultLength = 4;
        RtlInitUnicodeString(&FunctionName, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = (int (__fastcall *)(unsigned int, const wchar_t *, _RTL_QUERY_REGISTRY_TABLE *, void *, void *))MmGetSystemRoutineAddress(&FunctionName);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlxQueryRegistryValues;
        if ( SystemRoutineAddress(3221225472u, (const wchar_t *)hWdf.m_Key, paramTable, 0LL, 0LL) >= 0 )
        {
          if ( verboseValue )
            FxDriverGlobals->FxVerboseOn = 1;
          else
            FxDriverGlobals->FxVerboseOn = 0;
          if ( allocateFailValue == -1 )
            FxDriverGlobals->WdfVerifierAllocateFailCount = -1;
          else
            FxDriverGlobals->WdfVerifierAllocateFailCount = allocateFailValue;
          v10 = verifierOnValue == 0;
          FxDriverGlobals->FxVerifierDbgBreakOnDeviceStateError = 0;
          FxDriverGlobals->FxVerifierOn = !v10;
          FxDriverGlobals->FxVerifierHandle = !v10;
          FxDriverGlobals->FxVerifierIO = !v10;
          FxDriverGlobals->FxVerifierLock = !v10;
          FxDriverGlobals->FxPoolTrackingOn = !v10;
          FxDriverGlobals->FxVerifyOn = !v10;
          FxDriverGlobals->FxVerifierDbgBreakOnError = !v10;
          if ( !v10 )
          {
            FxDriverGlobals->Public.DriverFlags |= 0xCu;
            FxDriverGlobalsInitializeDebugExtension(FxDriverGlobals, hWdf.m_Key);
          }
          if ( verifyDownlevelValue )
            FxDriverGlobals->FxVerifyDownlevel = 1;
          else
            FxDriverGlobals->FxVerifyDownlevel = 0;
          m_Key = hWdf.m_Key;
          RtlInitUnicodeString(&DestinationString, L"VerifyOn");
          timeoutValue = 16;
          v12 = ZwQueryValueKey(
                  m_Key,
                  &DestinationString,
                  KeyValuePartialInformation,
                  KeyValueInformation,
                  0x10u,
                  &timeoutValue);
          if ( ((int)(v12 + 0x80000000) >= 0 && v12 != -2147483643 || v42 == 4) && v12 >= 0 )
            FxDriverGlobals->FxVerifyOn = v43 != 0;
          if ( FxDriverGlobals->FxVerifyOn )
            FxDriverGlobals->Public.DriverFlags |= 4u;
          v13 = hWdf.m_Key;
          RtlInitUnicodeString(&DestinationString, L"DbgBreakOnError");
          timeoutValue = 16;
          v14 = ZwQueryValueKey(
                  v13,
                  &DestinationString,
                  KeyValuePartialInformation,
                  KeyValueInformation,
                  0x10u,
                  &timeoutValue);
          if ( (((v14 + 0x80000000) & 0x80000000) == 0 && v14 != -2147483643 || v42 == 4) && v14 >= 0 )
            FxDriverGlobals->FxVerifierDbgBreakOnError = v43 != 0;
          v15 = hWdf.m_Key;
          RtlInitUnicodeString(&DestinationString, L"DbgBreakOnDeviceStateError");
          timeoutValue = 16;
          v16 = ZwQueryValueKey(
                  v15,
                  &DestinationString,
                  KeyValuePartialInformation,
                  KeyValueInformation,
                  0x10u,
                  &timeoutValue);
          if ( (((v16 + 0x80000000) & 0x80000000) == 0 && v16 != -2147483643 || v42 == 4) && v16 >= 0 )
            FxDriverGlobals->FxVerifierDbgBreakOnDeviceStateError = v43 != 0;
          if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
          {
            ObjectAttributes = *(_OBJECT_ATTRIBUTES *)L"DbgWaitForSignalTimeoutInSec";
            v46 = aDbgwaitforsign[28];
            timeoutValue = 0;
            *(_DWORD *)&DestinationString.Length = 3801144;
            DestinationString.Buffer = (wchar_t *)&ObjectAttributes;
            v45 = *(_QWORD *)L"nSec";
            if ( (int)FxRegKey::_QueryULong(hWdf.m_Key, &DestinationString, &timeoutValue) >= 0 )
              FxDriverGlobals->FxVerifierDbgWaitForSignalTimeoutInSec = timeoutValue;
          }
          v17 = FxDriverGlobals->WdfBindInfo;
          wcscpy(timeoutName_buffer, L"DbgWaitForWakeInterruptIsrTimeoutInSec");
          *(_DWORD *)&timeoutName.Length = 5111884;
          timeoutName.Buffer = timeoutName_buffer;
          v18 = v17->Version.Major;
          if ( v18 > 1 || v18 == 1 && v17->Version.Minor >= 0xD )
          {
            if ( (timeoutValue = 16,
                  v19 = ZwQueryValueKey(
                          hWdf.m_Key,
                          &timeoutName,
                          KeyValuePartialInformation,
                          KeyValueInformation,
                          0x10u,
                          &timeoutValue),
                  ((v19 + 0x80000000) & 0x80000000) == 0)
              && v19 != -2147483643
              || v42 == 4 )
            {
              if ( v19 >= 0 )
                FxDriverGlobals->DbgWaitForWakeInterruptIsrTimeoutInSec = v43;
            }
          }
          FxDriverGlobals->FxForceLogsInMiniDump = forceLogsInMiniDump != 0;
          FxDriverGlobals->FxTrackDriverForMiniDumpLog = trackDriverForMiniDumpLog != 0;
          FxDriverGlobals->FxRequestParentOptimizationOn = requestParentOptimizationOn != 0;
          if ( !dsfValue )
            v3 = 0;
          FxDriverGlobals->RemoveLockOptionFlags = removeLockOptionFlags;
          FxDriverGlobals->FxDsfOn = v3;
        }
      }
    }
    if ( hWdf.m_Key )
      ZwClose(hWdf.m_Key);
    if ( hDriver.m_Key )
      ZwClose(hDriver.m_Key);
  }
}
