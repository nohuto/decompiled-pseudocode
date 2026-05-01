/*
 * XREFs of ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x180004A78
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostCallbacks @ 0x180003CE0 (RmCoreRpcSrvRegisterActivityHostCallbacks.c)
 * Callees:
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180003D7C (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004FF4 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationSubscribe(struct _RM_ACTIVATOR *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  int v9; // edx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v13; // [rsp+30h] [rbp-89h] BYREF
  struct _RM_ACTIVITY_HOST *v14; // [rsp+38h] [rbp-81h] BYREF
  int v15; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-59h] BYREF
  int *v19; // [rsp+80h] [rbp-39h]
  int v20; // [rsp+88h] [rbp-31h]
  int v21; // [rsp+8Ch] [rbp-2Dh]
  int *v22; // [rsp+90h] [rbp-29h]
  int v23; // [rsp+98h] [rbp-21h]
  int v24; // [rsp+9Ch] [rbp-1Dh]
  unsigned __int64 *v25; // [rsp+A0h] [rbp-19h]
  int v26; // [rsp+A8h] [rbp-11h]
  int v27; // [rsp+ACh] [rbp-Dh]
  unsigned __int64 *v28; // [rsp+B0h] [rbp-9h]
  int v29; // [rsp+B8h] [rbp-1h]
  int v30; // [rsp+BCh] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp+17h] BYREF

  v17 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_1800409DE, v6, v7, 2u, &pData);
  v14 = 0LL;
  v16 = -1LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v13 = RmpActivityHostFindByHostId(*(struct _RM_SERVICE_GLOBALS **)a1, v17, &v14);
  if ( v13 >= 0 )
  {
    v13 = RmpActivatorSubscribeForNotifications(a1, v14, &v16);
    if ( v13 >= 0 )
    {
      v13 = 0;
      *a3 = v16;
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v19 = &v13;
    v15 = *((_DWORD *)a1 + 14);
    v22 = &v15;
    v25 = &v17;
    v28 = &v16;
    v20 = 4;
    v23 = 4;
    v26 = v9 - 1;
    v29 = v9 - 1;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v9 - 1), &unk_18004026C, v10, v11, 6u, &v18);
  }
  if ( v14 )
    RmpObjectRelease(v14);
  return (unsigned int)v13;
}
