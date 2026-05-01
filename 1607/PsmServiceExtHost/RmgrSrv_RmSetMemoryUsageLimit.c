/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x180028A80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpQueryRpcClientInformation @ 0x18001A044 (RmpQueryRpcClientInformation.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     IsRmRpsHostEmptyNotificationPresent @ 0x1800205BC (IsRmRpsHostEmptyNotificationPresent.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(const struct _TlgProvider_t *ClientBinding, __int64 a2, _DWORD *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _RM_SERVICE_GLOBALS *v10; // rbx
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v15; // [rsp+30h] [rbp-29h] BYREF
  int v16; // [rsp+34h] [rbp-25h] BYREF
  __int64 v17; // [rsp+38h] [rbp-21h] BYREF
  __int64 v18; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  int *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]

  v16 = 0;
  v17 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(ClientBinding, 2uLL) )
  {
    v22 = 0;
    v20 = (int *)&v17;
    v21 = 8;
    TlgWrite(v5, &unk_18003EDB8, v6, v7, 3u, &pData);
  }
  if ( !a3 )
  {
    v8 = 2147942487LL;
LABEL_14:
    v15 = v8;
    goto LABEL_15;
  }
  if ( !IsRmRpsHostEmptyNotificationPresent() )
  {
    v8 = 2147942527LL;
    goto LABEL_14;
  }
  v10 = RmSvcGlobals;
  if ( (*((_BYTE *)RmSvcGlobals + 1936) & 1) == 0 )
  {
    v8 = 2147943656LL;
    goto LABEL_14;
  }
  v11 = RmpQueryRpcClientInformation(ClientBinding, 0LL, v9, 0LL, &v18);
  v8 = (unsigned int)v11;
  if ( v11 < 0 )
  {
    LODWORD(v8) = v11 | 0x10000000;
    goto LABEL_14;
  }
  v15 = RmRpsSetHostMemoryUsageLimit(*((_QWORD *)v10 + 241), v18, v17, &v16);
  v8 = (unsigned int)v15;
  if ( v15 >= 0 )
  {
    v8 = 0LL;
    *a3 = v16;
    goto LABEL_14;
  }
LABEL_15:
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v8, 2uLL) )
  {
    v22 = 0;
    v25 = 0;
    v20 = &v15;
    v23 = &v16;
    v21 = 4;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)v8, &unk_18003ED30, v12, v13, 4u, &pData);
    LODWORD(v8) = v15;
  }
  return (unsigned int)v8;
}
