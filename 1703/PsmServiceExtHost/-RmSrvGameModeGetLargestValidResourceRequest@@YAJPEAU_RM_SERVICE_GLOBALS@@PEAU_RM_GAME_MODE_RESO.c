/*
 * XREFs of ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18002CA18
 * Callers:
 *     RmGameModeSrvGetLargestValidResourceRequest @ 0x18002D6A0 (RmGameModeSrvGetLargestValidResourceRequest.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGameModeGetLargestValidResourceRequest@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030994 (-RmpGameModeGetLargestValidResourceRequest@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOUR.c)
 */

__int64 __fastcall RmSrvGameModeGetLargestValidResourceRequest(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rsi
  unsigned int v3; // ebx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  int v9; // edx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  char *v23; // [rsp+90h] [rbp-70h]
  TraceLoggingHProvider cData; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF

  v2 = RmSvcGlobals;
  v3 = 0;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_180041007, v6, v7, 2u, &pData);
  RmpGameModeGetLargestValidResourceRequest(v2, a2);
  v13 = 0;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v20 = 4LL;
    v19 = &v13;
    v14 = *((_DWORD *)a2 + 1);
    v21 = &v14;
    v23 = (char *)a2 + 8;
    v15 = *((_DWORD *)a2 + 4);
    v25 = &v15;
    v16 = *((_DWORD *)a2 + 5);
    v27 = &v16;
    v17 = *((_DWORD *)a2 + 6);
    v29 = &v17;
    v22 = 4LL;
    cData = (TraceLoggingHProvider)(unsigned int)(v9 - 1);
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    TlgWrite(cData, &unk_180040F20, v10, v11, (UINT32)cData, &v18);
    return v13;
  }
  return v3;
}
