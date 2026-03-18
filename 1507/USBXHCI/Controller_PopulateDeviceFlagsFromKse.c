/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C0006030
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00051E0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_PopulateDeviceFlags @ 0x1C004A6B4 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     RtlStringCchPrintfW @ 0x1C00062A0 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_xS @ 0x1C0006318 (WPP_RECORDER_SF_xS.c)
 *     WPP_RECORDER_SF_S @ 0x1C0006D10 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, int a3)
{
  char v3; // di
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 result; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // [rsp+20h] [rbp-89h]
  int v15; // [rsp+20h] [rbp-89h]
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h] BYREF
  __int64 v18; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h] BYREF
  wchar_t pszDest[64]; // [rsp+70h] [rbp-39h] BYREF

  v3 = 0;
  if ( !WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 64), 3, a3, 156, v14, (__int64)pszDest);
  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    v15 = *(unsigned __int16 *)(a1 + 156);
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 152));
  }
  else
  {
    v15 = a1 + 205;
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 200);
  }
  if ( ((int (__fastcall *)(wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
         pszDest,
         L"USBXHCI",
         &v20) >= 0 )
  {
    WPP_RECORDER_SF_xS(*(_QWORD *)(a1 + 64), v5, v6, 150, v15, v20, (__int64)pszDest);
    v3 = 1;
    *(_QWORD *)(a1 + 232) |= v20;
  }
  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    v14 = *(unsigned __int16 *)(a1 + 156);
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X", *(unsigned __int16 *)(a1 + 152));
  }
  else
  {
    v14 = a1 + 205;
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 200);
  }
  if ( ((int (__fastcall *)(wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
         pszDest,
         L"USBXHCI",
         &v18) >= 0 )
  {
    WPP_RECORDER_SF_xS(*(_QWORD *)(a1 + 64), v7, a3, 151, v14, v18, (__int64)pszDest);
    v3 = 1;
    *(_QWORD *)(a1 + 232) |= v18;
  }
  if ( *(_QWORD *)(a1 + 224) != -1LL )
  {
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v14 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(
        pszDest,
        0x3CuLL,
        L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
        *(unsigned __int16 *)(a1 + 152));
    }
    else
    {
      v14 = a1 + 205;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 200);
    }
    if ( ((int (__fastcall *)(wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
           pszDest,
           L"USBXHCI",
           &v16) >= 0 )
    {
      WPP_RECORDER_SF_xS(*(_QWORD *)(a1 + 64), v11, a3, 152, v14, v16, (__int64)pszDest);
      v3 = 1;
      *(_QWORD *)(a1 + 232) |= v16;
    }
  }
  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    v14 = *(unsigned __int16 *)(a1 + 156);
    RtlStringCchPrintfW(
      pszDest,
      0x3CuLL,
      L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
      *(unsigned __int16 *)(a1 + 152));
    if ( ((int (__fastcall *)(wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
           pszDest,
           L"USBXHCI",
           &v17) >= 0 )
    {
      WPP_RECORDER_SF_xS(*(_QWORD *)(a1 + 64), v8, a3, 153, v14, v17, (__int64)pszDest);
      v3 = 1;
      *(_QWORD *)(a1 + 232) |= v17;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v14 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(
        pszDest,
        0x3CuLL,
        L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
        *(unsigned __int16 *)(a1 + 152));
      if ( ((int (__fastcall *)(wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)(
             pszDest,
             L"USBXHCI",
             &v19) >= 0 )
      {
        WPP_RECORDER_SF_xS(*(_QWORD *)(a1 + 64), v9, a3, 154, v14, v19, (__int64)pszDest);
        v3 = 1;
        *(_QWORD *)(a1 + 232) |= v19;
      }
    }
  }
  result = *(_QWORD *)(a1 + 232);
  if ( (result & 0x10) != 0 )
  {
    v12 = 4108;
    v13 = 4;
  }
  else
  {
    if ( (result & 0x1000000) == 0 )
      goto LABEL_19;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0x9Bu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      1,
      (__int64)"Controller Firmware has known issues, and newer firmware is available",
      0LL,
      0LL);
    v13 = 0;
    v12 = 4111;
  }
  result = Controller_ReportFatalError(a1, v13, v12, 0, 0LL, 0LL);
LABEL_19:
  if ( !v3 )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 64), 3, a3, 156, v14, (__int64)pszDest);
  return result;
}
