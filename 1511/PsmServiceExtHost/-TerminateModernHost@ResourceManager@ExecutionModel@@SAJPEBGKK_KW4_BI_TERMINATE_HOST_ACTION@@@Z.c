/*
 * XREFs of ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x18003E2B8
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800434E0 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??$replace@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@YAPEAPEAXAEAV?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@0@@Z @ 0x18003B0D4 (--$replace@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@YAPEAPEAXAEAV-$auto_xxx@PEAXP6AHPEAX@Z$.c)
 */

__int64 ExecutionModel::ResourceManager::TerminateModernHost(const WCHAR *a1, unsigned int a2, unsigned int a3, ...)
{
  void **v6; // rax
  signed int LastError; // eax
  const struct _TlgProvider_t *v8; // rcx
  int v9; // ebx
  BOOL v10; // edi
  int v11; // r10d
  int v12; // r10d
  TraceLoggingHProvider v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  _BYTE v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE hToken; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  int *v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  va_list v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  int *v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  int *v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+ECh] [rbp-14h]
  va_list va; // [rsp+158h] [rbp+58h] BYREF

  va_start(va, a3);
  hToken = 0LL;
  v17[0] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, a1);
  v6 = tlx::replace<void *,int (*)(void *),&int CloseHandle(void *),0>(&hToken);
  if ( (unsigned int)QueryUserToken(a2, v6) )
  {
    v10 = ImpersonateLoggedOnUser(hToken);
    v22 = BiTerminateApplicationHost(&DestinationString, a3, 1LL, v17);
    if ( v22 < 0 )
      v9 = v22 | 0x10000000;
    else
      v9 = 0;
    if ( v10 )
      RevertToSelf();
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v9 < 0 && (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v8, 1uLL) )
  {
    v28 = 0;
    v26 = &v22;
    v27 = v11;
    TlgCreateWsz(&pDesc, a1);
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v30 = (int *)&v20;
    v33 = (int *)&v23;
    va_copy(v36, va);
    v39 = &v18;
    v19 = v17[0];
    v42 = &v19;
    v20 = a2;
    v31 = v12;
    v23 = a3;
    v34 = v12;
    v37 = 8;
    v18 = 1;
    v40 = v12;
    v43 = v12;
    TlgWrite(v13, &unk_180061FA9, v14, v15, 9u, &pData);
  }
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&hToken);
  return (unsigned int)v9;
}
