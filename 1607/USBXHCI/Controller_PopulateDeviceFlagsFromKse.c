/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C00076D0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0009270 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_PopulateDeviceFlags @ 0x1C004B06C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     RtlStringCchPrintfW @ 0x1C0007C50 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x1C00086E4 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dxS @ 0x1C0020824 (WPP_RECORDER_SF_dxS.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, int a3)
{
  char v3; // r14
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  char *v7; // r12
  __int64 v8; // r15
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 result; // rax
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-90h] BYREF
  wchar_t pszDest[64]; // [rsp+88h] [rbp-80h] BYREF

  v3 = 0;
  v26[0] = L"USBXHCI";
  v26[1] = L"USBXHCI2";
  if ( !WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 64), 3, a3, 159, v18, (__int64)pszDest);
  v5 = 0;
  v6 = (_QWORD *)(a1 + 232);
  v7 = (char *)v26 - a1;
  do
  {
    if ( *(_DWORD *)(a1 + 148) == 1 )
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 152));
    else
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 200);
    v8 = *(_QWORD *)((char *)v6 + (_QWORD)v7 - 232);
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v20) >= 0 )
    {
      WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v9, v10, 152, v18, v5, v20, (__int64)pszDest);
      v3 = 1;
      *v6 |= v20;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v19 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 152));
    }
    else
    {
      v19 = a1 + 205;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 200);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v21) >= 0 )
    {
      WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v11, v12, 153, v19, v5, v21, (__int64)pszDest);
      v3 = 1;
      *v6 |= v21;
    }
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v18 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X", *(unsigned __int16 *)(a1 + 152));
    }
    else
    {
      v18 = a1 + 205;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 200);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v22) >= 0 )
    {
      WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v13, a3, 154, v18, v5, v22, (__int64)pszDest);
      v3 = 1;
      *v6 |= v22;
    }
    if ( *(_QWORD *)(a1 + 224) != -1LL )
    {
      if ( *(_DWORD *)(a1 + 148) == 1 )
      {
        v18 = *(unsigned __int16 *)(a1 + 156);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
          *(unsigned __int16 *)(a1 + 152));
      }
      else
      {
        v18 = a1 + 205;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 200);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v23) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v14, a3, 155, v18, v5, v23, (__int64)pszDest);
        v3 = 1;
        *v6 |= v23;
      }
    }
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v18 = *(unsigned __int16 *)(a1 + 156);
      RtlStringCchPrintfW(
        pszDest,
        0x3CuLL,
        L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
        *(unsigned __int16 *)(a1 + 152));
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v24) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v15, a3, 156, v18, v5, v24, (__int64)pszDest);
        v3 = 1;
        *v6 |= v24;
      }
      if ( *(_DWORD *)(a1 + 148) == 1 )
      {
        v18 = *(unsigned __int16 *)(a1 + 156);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 152));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v25) >= 0 )
        {
          WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 64), v16, a3, 157, v18, v5, v25, (__int64)pszDest);
          v3 = 1;
          *v6 |= v25;
        }
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  result = *(_QWORD *)(a1 + 232);
  if ( (result & 0x10) != 0 )
  {
    result = Controller_ReportFatalError(a1, 4, 4108, 0, 0LL, 0LL);
  }
  else if ( (result & 0x1000000) != 0 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0x9Eu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      1,
      (__int64)"Controller Firmware has known issues, and newer firmware is available",
      0LL,
      0LL);
    result = Controller_ReportFatalError(a1, 0, 4111, 0, 0LL, 0LL);
  }
  if ( !v3 )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 64), 3, a3, 159, v18, (__int64)pszDest);
  return result;
}
