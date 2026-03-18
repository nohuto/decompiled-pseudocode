/*
 * XREFs of Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C004F01C
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_TelemetryUpdateSubmitReportSuccess(_QWORD *a1, int a2)
{
  __int64 result; // rax
  int v5; // ebx
  unsigned __int16 v6; // r9
  int *v7; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+78h] [rbp+28h] BYREF

  v9 = 0LL;
  if ( (a2 & 0xFFFFEFC0) != 0 )
    WPP_RECORDER_SF_d(a1[8], 2u, 3u, 0xDDu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, a2);
  result = a1[33] | (1LL << (a2 & 0x3F));
  a1[33] = result;
  v5 = a2 - 4111;
  if ( v5 )
  {
    if ( v5 != 3 )
      goto LABEL_14;
    LODWORD(result) = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                        *a1,
                        1LL,
                        131078LL,
                        0LL,
                        &v9);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
      v7 = &v10;
      v10 = 1;
      result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1928))(
                 WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                 v9,
                 &DestinationString);
      if ( (int)result >= 0 )
        goto LABEL_14;
      v6 = 225;
    }
    else
    {
      v6 = 224;
    }
  }
  else
  {
    LODWORD(result) = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                        *a1,
                        1LL,
                        131078LL,
                        0LL,
                        &v9);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
      result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, struct _UNICODE_STRING *, __int64, int, _QWORD *))(WdfFunctions_01015 + 1928))(
                 WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                 v9,
                 &DestinationString,
                 3LL,
                 8,
                 a1 + 28);
      if ( (int)result >= 0 )
        goto LABEL_14;
      v6 = 223;
    }
    else
    {
      v6 = 222;
    }
  }
  LODWORD(v7) = result;
  result = WPP_RECORDER_SF_d(a1[8], 3u, 3u, v6, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v7);
LABEL_14:
  if ( v9 )
    return (*(__int64 (__fastcall **)(_LIST_ENTRY *))(WdfFunctions_01015 + 1848))(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  return result;
}
