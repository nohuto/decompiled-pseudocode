/*
 * XREFs of ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x18001AD60
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DE90 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_dd @ 0x180005574 (WPP_SF_dd.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

void __fastcall TSSession::RegisterSessionDisplayNotificationCallback(TSSession *this)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  int v4; // edi
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // eax
  UINT32 cData[2]; // [rsp+20h] [rbp-39h]
  int v10; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-25h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  const char *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  int *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  unsigned int *v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+98h] [rbp+3Fh]
  int v22; // [rsp+9Ch] [rbp+43h]

  if ( g_bIsAoAcSystem )
  {
    v2 = *(unsigned int *)this;
    if ( (_DWORD)v2 )
    {
      v3 = (_QWORD *)((char *)this + 232);
      if ( !*v3 )
      {
        *(_QWORD *)cData = v3;
        v12[0] = TsSessionIdDisplayNotificationCallback;
        v12[1] = v2;
        v4 = PowerSettingRegisterNotificationEx(&GUID_SESSION_DISPLAY_STATUS, v2, 2LL, v12);
        if ( v4 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            v7 = (unsigned __int16)v4 | 0x80070000;
            if ( v4 <= 0 )
              v7 = v4;
            cData[0] = v7;
            WPP_SF_dd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0xAu,
              &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids,
              *(_DWORD *)this,
              *(_QWORD *)cData);
          }
          if ( (unsigned int)dword_180034030 > 2 )
          {
            v16 = 0;
            v19 = 0;
            v14 = "__FUNC__";
            v17 = &v10;
            v8 = (unsigned __int16)v4 | 0x80070000;
            v15 = 9;
            v10 = 362;
            v18 = 4;
            if ( v4 <= 0 )
              v8 = v4;
            v21 = 4;
            v22 = 0;
            v11 = v8;
            v20 = &v11;
            TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v5, v6, cData[0], &pData);
          }
        }
      }
    }
  }
}
