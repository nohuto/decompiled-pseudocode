/*
 * XREFs of ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18007691C
 * Callers:
 *     ?TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXQEBG@Z @ 0x180076B10 (-TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXQEBG@Z.c)
 *     ?TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXQEBG@Z @ 0x180076D74 (-TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXQEBG@Z.c)
 * Callees:
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEAAKAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x180075DC4 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEAAKAEBU_DEVPR.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
RawInputProvidersTracing::SpatialInputTelemetryProperties *__fastcall RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
        BYTE *this,
        const WCHAR *a2)
{
  HSTRING *v3; // rdi
  HSTRING *v4; // rsi
  HSTRING *v5; // r14
  HSTRING *v6; // r15
  HSTRING *v7; // r12
  DEVPROPTYPE PropertyType; // [rsp+38h] [rbp-D0h] BYREF
  ULONG PropertyBufferSize; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  LPCWSTR pszDeviceInterface; // [rsp+48h] [rbp-C0h]
  DEVNODE pdnDevInst[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h]
  RawInputProvidersTracing::SpatialInputTelemetryProperties *v15; // [rsp+68h] [rbp-A0h]
  WCHAR PropertyBuffer[200]; // [rsp+78h] [rbp-90h] BYREF

  v14 = -2LL;
  v15 = (RawInputProvidersTracing::SpatialInputTelemetryProperties *)this;
  v3 = (HSTRING *)(this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v4 = (HSTRING *)(this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v5 = (HSTRING *)(this + 40);
  *((_QWORD *)this + 5) = 0LL;
  v6 = (HSTRING *)(this + 48);
  *((_QWORD *)this + 6) = 0LL;
  v7 = (HSTRING *)(this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = a2;
  LODWORD(v11) = 0;
  pszDeviceInterface = a2;
  pdnDevInst[0] = 0;
  PropertyBufferSize = 400;
  if ( !CM_Get_Device_Interface_PropertyW(
          a2,
          &DEVPKEY_Device_InstanceId,
          &PropertyType,
          (PBYTE)PropertyBuffer,
          &PropertyBufferSize,
          0)
    && PropertyType == 18
    && !CM_Locate_DevNodeW(pdnDevInst, PropertyBuffer, 0) )
  {
    LODWORD(v11) = 1;
    PropertyType = 16;
    CM_Get_Device_Interface_PropertyW(
      pszDeviceInterface,
      &DEVPKEY_DeviceInterface_ClassGuid,
      &PropertyBufferSize,
      this + 16,
      &PropertyType,
      0);
    WindowsDeleteString(*v3);
    *v3 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v11, &DEVPKEY_NAME, v3);
    WindowsDeleteString(*v4);
    *v4 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v11, &DEVPKEY_Device_Manufacturer, v4);
    WindowsDeleteString(*v5);
    *v5 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v11, &DEVPKEY_Device_Model, v5);
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
      &v11,
      &DEVPKEY_Device_FirmwareVersion,
      v6);
    WindowsDeleteString(*v7);
    *v7 = 0LL;
    DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(&v11, &DEVPKEY_Device_DriverVersion, v7);
  }
  return (RawInputProvidersTracing::SpatialInputTelemetryProperties *)this;
}
