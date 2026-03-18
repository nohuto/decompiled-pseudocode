/*
 * XREFs of ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C0074EF0
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0019C94 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C0067ABC (RtlStringCchPrintfW.c)
 *     LibraryLogEvent @ 0x1C00752EC (LibraryLogEvent.c)
 *     _TlgWrite @ 0x1C0075574 (_TlgWrite.c)
 */

void __fastcall ReportDdiFunctionCountMismatch(
        const _UNICODE_STRING *ServiceName,
        unsigned int ActualFunctionCount,
        unsigned int a3,
        unsigned __int8 a4)
{
  const _TlgProvider_t *v6; // rcx
  const _GUID *v7; // r8
  const _GUID *v8; // r9
  void *RawDataBuf; // [rsp+20h] [rbp-E0h]
  unsigned __int16 RawDataLen[4]; // [rsp+28h] [rbp-D8h]
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[6]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t insertString[320]; // [rsp+B0h] [rbp-50h] BYREF

  memset(insertString, 0, 0x272uLL);
  DbgPrintEx(
    0x65u,
    0,
    "\n"
    "\n"
    "************************* \n"
    "* DDI function table mismatch detected in KMDF driver. The \n"
    "* driver will not load until it is re-compiled using a \n"
    "* newer version of the Windows Driver Kit (WDK). \n");
  DbgPrintEx(
    0x65u,
    0,
    "* Service name                 : %wZ\n"
    "* Actual function table count  : %d \n"
    "* Expected function table count: %d \n"
    "*************************** \n"
    "\n",
    ServiceName,
    ActualFunctionCount,
    448);
  *(_DWORD *)RawDataLen = 448;
  LODWORD(RawDataBuf) = ActualFunctionCount;
  if ( (int)RtlStringCchPrintfW(
              insertString,
              0x139uLL,
              (wchar_t *)L"Service:%wZ Count:Actual %d Expected %d",
              ServiceName,
              RawDataBuf,
              *(_QWORD *)RawDataLen) >= 0 )
    LibraryLogEvent(FxLibraryGlobals.DriverObject, -2147024894, -1073741811, insertString, 0LL, 0);
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5
    && (Tlgg_TelemetryProviderProv.KeywordAny & 0x200000000000LL) != 0
    && (Tlgg_TelemetryProviderProv.KeywordAll & 0x200000000000LL) == Tlgg_TelemetryProviderProv.KeywordAll )
  {
    *(_QWORD *)&_TlgData[2].Size = 2LL;
    _TlgData[2].Ptr = (unsigned __int64)&_TlgData[3].Size;
    _TlgData[3].Ptr = (unsigned __int64)ServiceName->Buffer;
    _TlgData[3].Size = ServiceName->Length;
    _TlgData[4].Ptr = (unsigned __int64)&v11;
    _TlgData[5].Ptr = (unsigned __int64)&v12;
    _TlgData[3].Reserved = 0;
    v11 = ActualFunctionCount;
    *(_QWORD *)&_TlgData[4].Size = 4LL;
    v12 = 448;
    *(_QWORD *)&_TlgData[5].Size = 4LL;
    TlgWrite(v6, &TlgEvent._TlgChannel, v7, v8, 6u, _TlgData);
  }
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    DbgBreakPoint();
}
