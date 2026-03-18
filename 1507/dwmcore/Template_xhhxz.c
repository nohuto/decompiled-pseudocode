/*
 * XREFs of Template_xhhxz @ 0x1800E605C
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x1800E49AC (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800E5BF4 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xhhxz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int16 a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v7; // rax
  int v8; // ecx
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  __int16 *v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  char *v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  char *v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  const wchar_t *v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  __int16 v22; // [rsp+A8h] [rbp+28h] BYREF

  v22 = a4;
  v21 = a3;
  *(_QWORD *)&UserData.Size = 8LL;
  UserData.Ptr = (ULONGLONG)&v21;
  v12 = &v22;
  v13 = 2LL;
  v14 = &a5;
  v16 = &a6;
  v15 = 2LL;
  v17 = 8LL;
  if ( a7 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a7[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v19 = v8;
  v9 = L"NULL";
  if ( a7 )
    v9 = a7;
  v20 = 0;
  v18 = v9;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 5u, &UserData);
}
