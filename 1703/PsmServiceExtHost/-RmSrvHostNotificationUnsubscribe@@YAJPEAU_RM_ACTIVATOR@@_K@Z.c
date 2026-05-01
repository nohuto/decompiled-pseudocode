/*
 * XREFs of ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180002DD4
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHostCallbacks @ 0x1800022E0 (RmCoreRpcSrvUnregisterActivityHostCallbacks.c)
 * Callees:
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x180003CE8 (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationUnsubscribe(struct _RM_ACTIVATOR *a1, unsigned __int64 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v12; // [rsp+38h] [rbp-49h] BYREF
  int v13; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-39h] BYREF
  unsigned int *v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  int *v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  unsigned __int64 *v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp+27h] BYREF
  unsigned __int64 v22; // [rsp+F0h] [rbp+6Fh] BYREF

  v22 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v3, &unk_1800409A8, v4, v5, 2u, &pData);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = RmpActivatorUnsubscribeFromNotifications(a1, v22);
  if ( v6 >= 0 )
    v6 = 0;
  v12 = v6;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v7, 9uLL) )
  {
    v16 = 4LL;
    v15 = &v12;
    v13 = *((_DWORD *)a1 + 14);
    v17 = &v13;
    v19 = &v22;
    v18 = 4LL;
    v20 = 8LL;
    TlgWrite(v8, &unk_180040B53, v9, v10, 5u, &v14);
  }
  return v12;
}
