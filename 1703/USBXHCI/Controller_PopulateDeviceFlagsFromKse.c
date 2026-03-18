/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C0008FA0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0008660 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_PopulateDeviceFlags @ 0x1C004E590 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0008E40 (WPP_RECORDER_SF_S.c)
 *     RtlStringCchPrintfW @ 0x1C00092F0 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_dxS @ 0x1C0009370 (WPP_RECORDER_SF_dxS.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r15
  _QWORD *v5; // rsi
  unsigned int v6; // r14d
  char *v7; // r12
  __int64 v8; // rdi
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 result; // rax
  int v17; // edx
  int v18; // edx
  int v19; // r8d
  int v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-90h] BYREF
  wchar_t pszDest[64]; // [rsp+88h] [rbp-80h] BYREF

  v3 = 0;
  v28[0] = L"USBXHCI";
  v28[1] = L"USBXHCI2";
  if ( !WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 64), 3u, a3, 0x9Fu, v20, pszDest);
  v5 = (_QWORD *)(a1 + 232);
  v6 = 0;
  v7 = (char *)v28 - a1;
  do
  {
    if ( *(_DWORD *)(a1 + 148) == 1 )
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 152));
    else
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 200);
    v8 = *(_QWORD *)((char *)v5 + (_QWORD)v7 - 232);
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v22) >= 0 )
    {
      WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v9, v10, 152, v20, v6, v22, (__int64)pszDest);
      v3 = 1;
      *v5 |= v22;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v21 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 152));
    }
    else
    {
      v21 = a1 + 205;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 200);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v23) >= 0 )
    {
      WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v11, v12, 153, v21, v6, v23, (__int64)pszDest);
      v3 = 1;
      *v5 |= v23;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v20 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X", *(unsigned __int16 *)(a1 + 152));
    }
    else
    {
      v20 = a1 + 205;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 200);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v24) >= 0 )
    {
      WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v13, a3, 154, v20, v6, v24, (__int64)pszDest);
      v3 = 1;
      *v5 |= v24;
    }
    if ( *(_QWORD *)(a1 + 224) != -1LL )
    {
      if ( *(_DWORD *)(a1 + 148) == 1 )
      {
        v20 = *(unsigned __int16 *)(a1 + 156);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
          *(unsigned __int16 *)(a1 + 152));
      }
      else
      {
        v20 = a1 + 205;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 200);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v25) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v17, a3, 155, v20, v6, v25, (__int64)pszDest);
        v3 = 1;
        *v5 |= v25;
      }
    }
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v20 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(
        pszDest,
        0x3CuLL,
        L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
        *(unsigned __int16 *)(a1 + 152));
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v26) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v14, a3, 156, v20, v6, v26, (__int64)pszDest);
        v3 = 1;
        *v5 |= v26;
      }
      if ( *(_DWORD *)(a1 + 148) == 1 )
      {
        v20 = *(unsigned __int16 *)(a1 + 156);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 152));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v27) >= 0 )
        {
          WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v15, a3, 157, v20, v6, v27, (__int64)pszDest);
          v3 = 1;
          *v5 |= v27;
        }
      }
    }
    ++v6;
    ++v5;
  }
  while ( v6 < 2 );
  result = *(_QWORD *)(a1 + 232);
  if ( (result & 0x10) != 0 )
  {
    v18 = 4;
    v19 = 4108;
  }
  else
  {
    if ( (result & 0x1000000) == 0 )
      goto LABEL_25;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0x9Eu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      1,
      (__int64)"Controller Firmware has known issues, and newer firmware is available",
      0LL,
      0LL);
    v18 = 0;
    v19 = 4111;
  }
  result = Controller_ReportFatalError(a1, v18, v19, 0, 0LL, 0LL);
LABEL_25:
  if ( !v3 )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 64), 3u, a3, 0x9Fu, v20, pszDest);
  return result;
}
