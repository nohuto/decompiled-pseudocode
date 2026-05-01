/*
 * XREFs of RmpSystemTerminateModernHost @ 0x180038014
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     RmpSystemTerminateHost @ 0x180037FB8 (RmpSystemTerminateHost.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 RmpSystemTerminateModernHost(LPCWSTR pwsz, unsigned int a2, unsigned int a3, ...)
{
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r10
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  signed int LastError; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v15; // [rsp+38h] [rbp-89h] BYREF
  int v16; // [rsp+3Ch] [rbp-85h] BYREF
  HANDLE hToken; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  signed int *p_LastError; // [rsp+80h] [rbp-41h]
  __int64 v21; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-31h] BYREF
  int *v23; // [rsp+A0h] [rbp-21h]
  __int64 v24; // [rsp+A8h] [rbp-19h]
  int *v25; // [rsp+B0h] [rbp-11h]
  __int64 v26; // [rsp+B8h] [rbp-9h]
  va_list v27; // [rsp+C0h] [rbp-1h]
  TraceLoggingHProvider v28; // [rsp+C8h] [rbp+7h]
  int *v29; // [rsp+D0h] [rbp+Fh]
  __int64 v30; // [rsp+D8h] [rbp+17h]
  va_list va; // [rsp+138h] [rbp+77h] BYREF

  va_start(va, a3);
  hToken = 0LL;
  if ( (unsigned int)QueryUserToken(a2, &hToken) && ImpersonateLoggedOnUser(hToken) )
  {
    RtlInitUnicodeString(&DestinationString, pwsz);
    v6 = BiTerminateApplicationHost(&DestinationString, a3, 1LL);
    if ( v6 >= 0 )
      v6 = 0;
    LastError = v6;
    RevertToSelf();
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  v7 = (const struct _TlgProvider_t *)hToken;
  if ( hToken )
    CloseHandle(hToken);
  if ( LastError < 0 && (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 1uLL) )
  {
    v21 = v8;
    p_LastError = &LastError;
    TlgCreateWsz(&pDesc, pwsz);
    v14 = a2;
    v23 = (int *)&v14;
    v24 = v9;
    v25 = (int *)&v15;
    va_copy(v27, va);
    v29 = &v16;
    v15 = a3;
    v26 = v9;
    v28 = (TraceLoggingHProvider)(unsigned int)(v9 + 4);
    v16 = 1;
    v30 = v9;
    TlgWrite(v28, &unk_18004316F, v10, v11, v9 + 4, &pData);
  }
  return (unsigned int)LastError;
}
