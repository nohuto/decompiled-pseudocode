/*
 * XREFs of ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180096FFC
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180060E4C (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180061814 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1800639D8 (_TlgCreateWsz.c)
 *     TraceLoggingRegisterEx @ 0x180096DE8 (TraceLoggingRegisterEx.c)
 *     McGenEventRegister @ 0x1800971A8 (McGenEventRegister.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

void RegisterDwmGuidWithEtw(void)
{
  TLG_PENABLECALLBACK v0; // rdx
  PVOID v1; // r8
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  DWORD CurrentProcessId; // eax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  DWORD pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pSessionId; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  GUID *v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  WCHAR Value; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v17[78]; // [rsp+92h] [rbp-6Eh] BYREF
  WCHAR pwsz; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v19[78]; // [rsp+E2h] [rbp-1Eh] BYREF

  McGenEventRegister();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&pRelatedActivityId, v0, v1);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v2, v3);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180190A30, v4, v5);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    Value = 0;
    memset_0(v17, 0, 0x42uLL);
    pdwType = pSessionId;
    if ( (int)StringCchPrintfW(&Value, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      pwsz = 0;
      memset_0(v19, 0, 0x48uLL);
      pcbData[0] = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", &Value, 2u, 0LL, &pwsz, pcbData)
        && dword_180190A30 > 5u
        && (qword_180190A40 & 0x400000000000LL) != 0
        && (qword_180190A48 & 0x400000000000LL) == qword_180190A48 )
      {
        v13 = &gDwmCoreTelemetryActivityId;
        v14 = 16LL;
        TlgCreateWsz(&pDesc, &pwsz);
        TlgWrite((TraceLoggingHProvider)&dword_180190A30, &unk_18016EDCE, v7, v8, 4u, &pData);
      }
    }
  }
}
