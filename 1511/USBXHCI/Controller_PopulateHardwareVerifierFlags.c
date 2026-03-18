/*
 * XREFs of Controller_PopulateHardwareVerifierFlags @ 0x1C004AC74
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0009BC0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0007FF0 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_x @ 0x1C0008F9C (WPP_RECORDER_SF_x.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_PopulateHardwareVerifierFlags(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned __int8 v3; // al
  void *v4; // rsi
  int v5; // ebx
  __int64 result; // rax
  int v7; // eax
  NTSTATUS v8; // eax
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+28h] [rbp-59h]
  __int64 v15; // [rsp+30h] [rbp-51h]
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  char v21; // [rsp+78h] [rbp-9h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  v19 = 0LL;
  v2 = *(_BYTE *)(a1 + 216);
  DestinationString.Buffer = (unsigned __int16 *)&v21;
  v18 = 0LL;
  v3 = *(_BYTE *)(a1 + 217);
  v17 = 0LL;
  v16 = 0LL;
  if ( v2 )
  {
    if ( v2 != 1 || v3 )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 64),
        3u,
        3u,
        0xC6u,
        (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
        v2,
        v3);
    v4 = &g_HwVerifierxHCI10;
  }
  else
  {
    v4 = &g_HwVerifierxHCI96;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_HwVerifierKeyName,
         131097LL,
         0LL,
         &v18);
  if ( v5 < 0 )
  {
    v18 = 0LL;
    goto LABEL_7;
  }
  v7 = *(_DWORD *)(a1 + 148);
  if ( v7 == 1 )
  {
    LODWORD(v14) = *(unsigned __int8 *)(a1 + 160);
    v8 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%02X",
           *(unsigned __int16 *)(a1 + 152),
           *(unsigned __int16 *)(a1 + 156),
           v14);
  }
  else
  {
    if ( v7 != 2 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xC7u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
      goto LABEL_7;
    }
    v8 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 200, a1 + 205, a1 + 210);
  }
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 200;
LABEL_25:
    LODWORD(v15) = v5;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 64), 2u, 3u, v9, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v15);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v18,
         &DestinationString,
         131097LL,
         0LL,
         &v17);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v17,
           v4,
           131097LL,
           0LL,
           &v16);
    if ( v5 < 0 )
    {
      v10 = 0LL;
      v16 = 0LL;
      goto LABEL_32;
    }
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v16,
           &g_HwVerifierControllerName,
           8LL,
           &v19,
           0LL,
           0LL);
    if ( v5 >= 0 )
      goto LABEL_60;
  }
  else
  {
    v17 = 0LL;
  }
  v10 = v16;
LABEL_32:
  if ( v5 != -1073741772 )
    goto LABEL_7;
  if ( v10 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
    v16 = 0LL;
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
    v17 = 0LL;
  }
  v11 = *(_DWORD *)(a1 + 148);
  if ( v11 == 1 )
  {
    v12 = RtlUnicodeStringPrintf(
            &DestinationString,
            L"%04X%04X",
            *(unsigned __int16 *)(a1 + 152),
            *(unsigned __int16 *)(a1 + 156));
    goto LABEL_41;
  }
  if ( v11 == 2 )
  {
    v12 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a1 + 200, a1 + 205);
LABEL_41:
    v5 = v12;
    if ( v12 < 0 )
    {
      v9 = 202;
      goto LABEL_25;
    }
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v18,
           &DestinationString,
           131097LL,
           0LL,
           &v17);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
             WdfDriverGlobals,
             v17,
             v4,
             131097LL,
             0LL,
             &v16);
      if ( v5 < 0 )
      {
        v13 = 0LL;
        v16 = 0LL;
        goto LABEL_48;
      }
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v16,
             &g_HwVerifierControllerName,
             8LL,
             &v19,
             0LL,
             0LL);
      if ( v5 >= 0 )
        goto LABEL_60;
    }
    else
    {
      v17 = 0LL;
    }
    v13 = v16;
LABEL_48:
    if ( v5 == -1073741772 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
        v16 = 0LL;
      }
      if ( v17 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
        v17 = 0LL;
      }
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
             WdfDriverGlobals,
             v18,
             &g_HwVerifierGlobalName,
             131097LL,
             0LL,
             &v17);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
               WdfDriverGlobals,
               v17,
               v4,
               131097LL,
               0LL,
               &v16);
        if ( v5 >= 0 )
          v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                 WdfDriverGlobals,
                 v16,
                 &g_HwVerifierControllerName,
                 8LL,
                 &v19,
                 0LL,
                 0LL);
        else
          v16 = 0LL;
      }
      else
      {
        v17 = 0LL;
      }
    }
LABEL_7:
    if ( v5 < 0 )
      goto LABEL_8;
LABEL_60:
    *(_QWORD *)(a1 + 328) = v19;
    goto LABEL_10;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xC9u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
LABEL_8:
  *(_QWORD *)(a1 + 328) = 0LL;
  if ( v5 != -1073741772 )
  {
    LODWORD(v15) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      2u,
      3u,
      0xCBu,
      (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      v15);
  }
LABEL_10:
  result = WPP_RECORDER_SF_x(
             *(_QWORD *)(a1 + 64),
             4u,
             3u,
             0xCCu,
             (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
             *(_QWORD *)(a1 + 328));
  if ( v16 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v17 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v18 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
