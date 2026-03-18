/*
 * XREFs of Controller_TelemetryOkToGenerateReport @ 0x1C004EDB8
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00024B0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Controller_TelemetryOkToGenerateReport(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // di
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r8d
  int v8; // eax
  unsigned __int16 v9; // r9
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  char v16; // [rsp+80h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  v15 = 0LL;
  v3 = 0;
  v5 = a1[33];
  if ( _bittest64(&v5, a3 & 0x3F) )
  {
    WPP_RECORDER_SF_L(a1[8], 4u, 3u, 0xCBu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, a3);
    goto LABEL_24;
  }
  v6 = a3 - 4109;
  if ( !v6 )
  {
    v11 = *(_DWORD *)(a2 + 84);
    if ( (v11 & 1) == 0 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 84) = v11 | 1;
      return v3;
    }
    v3 = 0;
    goto LABEL_24;
  }
  v7 = v6 - 2;
  if ( v7 )
  {
    if ( v7 != 3 )
      return 1;
    v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *a1,
           1LL,
           131078LL,
           0LL,
           &v15);
    if ( v8 < 0 )
    {
      v9 = 206;
LABEL_14:
      LODWORD(v13) = v8;
      goto LABEL_15;
    }
    RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
    v10 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, struct _UNICODE_STRING *, __int64, char *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v15,
            &DestinationString,
            4LL,
            &v16,
            0LL,
            0LL);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741772 )
    {
      v9 = 207;
      LODWORD(v13) = v10;
LABEL_15:
      WPP_RECORDER_SF_d(a1[8], 3u, 3u, v9, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v13);
      goto LABEL_24;
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *a1,
           1LL,
           131078LL,
           0LL,
           &v15);
    if ( v8 < 0 )
    {
      v9 = 204;
      goto LABEL_14;
    }
    RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
    v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, struct _UNICODE_STRING *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           v15,
           &DestinationString,
           8LL,
           &v17,
           0LL,
           0LL);
    if ( v8 >= 0 )
    {
      if ( a1[28] == v17 )
        goto LABEL_24;
    }
    else if ( v8 != -1073741772 )
    {
      v9 = 205;
      goto LABEL_14;
    }
  }
  v3 = 1;
LABEL_24:
  if ( v15 )
    (*(void (__fastcall **)(_LIST_ENTRY *))(WdfFunctions_01015 + 1848))(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  return v3;
}
