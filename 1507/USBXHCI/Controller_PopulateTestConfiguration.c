/*
 * XREFs of Controller_PopulateTestConfiguration @ 0x1C004ADF8
 * Callers:
 *     Controller_Create @ 0x1C004A8A0 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0006C70 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_PopulateTestConfiguration(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  int v4; // eax
  NTSTATUS v5; // eax
  __int64 v6; // [rsp+28h] [rbp-29h]
  __int64 v7; // [rsp+30h] [rbp-21h]
  __int64 v8; // [rsp+48h] [rbp-9h] BYREF
  __int64 v9; // [rsp+50h] [rbp-1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  char v11; // [rsp+68h] [rbp+17h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  v8 = 0LL;
  DestinationString.Buffer = (unsigned __int16 *)&v11;
  v1 = a1 + 360;
  v9 = 0LL;
  *(_QWORD *)(a1 + 360) = -1LL;
  *(_QWORD *)(a1 + 368) = -1LL;
  result = WPP_MAIN_CB.Dpc.ProcessorHistory;
  if ( !*(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 28) )
    return result;
  result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                + 1832))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             0LL,
             &g_TestConfigKeyName,
             131097LL,
             0LL,
             &v9);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 148);
    if ( v4 == 1 )
    {
      LODWORD(v6) = *(unsigned __int8 *)(a1 + 160);
      v5 = RtlUnicodeStringPrintf(
             &DestinationString,
             L"%04X%04X%02X",
             *(unsigned __int16 *)(a1 + 152),
             *(unsigned __int16 *)(a1 + 156),
             v6);
    }
    else
    {
      if ( v4 != 2 )
      {
        result = WPP_RECORDER_SF_(
                   *(_QWORD *)(a1 + 64),
                   2u,
                   3u,
                   0x66u,
                   (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
        goto LABEL_3;
      }
      v5 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 200, a1 + 205, a1 + 210);
    }
    if ( v5 >= 0 )
    {
      if ( (*(int (__fastcall **)(_LIST_ENTRY *, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             v9,
             &DestinationString,
             131097LL,
             0LL,
             &v8) >= 0
        || (result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                       WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                       v9,
                       &g_TestConfigGlobalKeyName,
                       131097LL,
                       0LL,
                       &v8),
            (int)result >= 0) )
      {
        (*(void (__fastcall **)(_LIST_ENTRY *, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v8,
          L"46",
          4LL,
          v1,
          0LL,
          0LL);
        (*(void (__fastcall **)(_LIST_ENTRY *, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v8,
          L"$&",
          4LL,
          v1 + 4,
          0LL,
          0LL);
        (*(void (__fastcall **)(_LIST_ENTRY *, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v8,
          L"*,",
          4LL,
          v1 + 8,
          0LL,
          0LL);
        result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   v8,
                   L"(*",
                   4LL,
                   v1 + 12,
                   0LL,
                   0LL);
      }
    }
    else
    {
      LODWORD(v7) = v5;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 64),
                 2u,
                 3u,
                 0x67u,
                 (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
                 v7);
    }
  }
LABEL_3:
  if ( v8 )
    result = (*(__int64 (__fastcall **)(_LIST_ENTRY *))(WdfFunctions_01015 + 1848))(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  if ( v9 )
    return (*(__int64 (__fastcall **)(_LIST_ENTRY *))(WdfFunctions_01015 + 1848))(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  return result;
}
