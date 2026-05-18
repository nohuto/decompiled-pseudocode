/*
 * XREFs of ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000159C
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002790 (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000290C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpNotifyUserLogon @ 0x1800030E0 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x1800032F0 (DwmpNotifyUserLogoff.c)
 *     DwmpTerminateSessionProcess @ 0x180003350 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall TraceLoggingWriteEtw(int a1, int a2, const GUID *a3)
{
  TLG_STATUS result; // eax
  int v4; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  GUID *v6; // [rsp+60h] [rbp-29h]
  __int64 v7; // [rsp+68h] [rbp-21h]
  int *v8; // [rsp+70h] [rbp-19h]
  __int64 v9; // [rsp+78h] [rbp-11h]
  int *v10; // [rsp+80h] [rbp-9h]
  __int64 v11; // [rsp+88h] [rbp-1h]
  int *v12; // [rsp+90h] [rbp+7h]
  __int64 v13; // [rsp+98h] [rbp+Fh]
  GUID *v14; // [rsp+A0h] [rbp+17h]
  __int64 v15; // [rsp+A8h] [rbp+1Fh]
  unsigned __int16 *v16; // [rsp+B0h] [rbp+27h]
  __int64 v17; // [rsp+B8h] [rbp+2Fh]
  unsigned __int16 *v18; // [rsp+C0h] [rbp+37h]
  __int64 v19; // [rsp+C8h] [rbp+3Fh]
  int v20; // [rsp+F8h] [rbp+6Fh] BYREF
  int v21; // [rsp+100h] [rbp+77h] BYREF

  v21 = (int)a3;
  v20 = a2;
  if ( hProvider > 4u )
  {
    v7 = 16LL;
    v6 = &gDwmInitTelemetryActivityId;
    v8 = &v4;
    v10 = &v20;
    v12 = &v21;
    v14 = &gDwmInitTargetAppSessionGuid;
    v16 = &gBootId;
    v18 = &gSessionId;
    v4 = a1;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 4LL;
    v15 = 16LL;
    v17 = 2LL;
    v19 = 2LL;
    return TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800097F8, a3, (LPCGUID)4, 9u, &pData);
  }
  return result;
}
