/*
 * XREFs of ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z @ 0x18009F0C4
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z @ 0x1800A054C (-TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CreateInstance@CBackgroundSessionCallbacks@@SAJPEAPEAUIBackgroundSessionCallbacks@@@Z @ 0x1800A2C48 (-CreateInstance@CBackgroundSessionCallbacks@@SAJPEAPEAUIBackgroundSessionCallbacks@@@Z.c)
 */

__int64 __fastcall DoLaunchBackgroundTask(
        struct CApplication *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v6; // r15d
  int v7; // eax
  int v8; // ebx
  RPC_STATUS v9; // eax
  HANDLE CurrentThread; // rax
  NTSTATUS v11; // ebx
  NTSTATUS v12; // ebx
  struct IBackgroundSessionCallbacks *v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rsi
  struct IBackgroundSessionCallbacks *v17; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-71h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp-69h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-61h] BYREF
  _QWORD TokenInformation[12]; // [rsp+70h] [rbp-59h] BYREF
  GUID v22; // [rsp+D0h] [rbp+7h] BYREF

  v18 = 0;
  v17 = 0LL;
  TokenHandle = 0LL;
  v22 = GUID_00000000_0000_0000_0000_000000000000;
  v6 = 0;
  ReturnLength = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v7 = TsSessionFromSessionId(*((_DWORD *)a1 + 29), 0, 0LL, &v17);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
    goto LABEL_24;
  }
  v9 = RpcImpersonateClient(0LL);
  v8 = v9;
  if ( !v9 || v9 == 1725 )
  {
    v6 = 1;
  }
  else
  {
    if ( v9 > 0 )
      v8 = (unsigned __int16)v9 | 0x80070000;
    if ( v8 < 0 )
      goto LABEL_24;
  }
  CurrentThread = GetCurrentThread();
  v11 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( v11 >= 0 || (v8 = v11 | 0x10000000, v8 >= 0) )
  {
    v12 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    if ( v12 >= 0 || (v8 = v12 | 0x10000000, v8 >= 0) )
    {
      RpcRevertToSelf();
      v13 = v17;
      v6 = 0;
      v14 = (_QWORD *)((char *)v17 + 320);
      if ( *((_QWORD *)v17 + 40) || (v8 = CreateOnDemandBrokerClient(L"AudioSrv", (char *)v17 + 320), v8 >= 0) )
      {
        if ( !*((_QWORD *)v13 + 41) )
        {
          v17 = 0LL;
          v8 = CBackgroundSessionCallbacks::CreateInstance(&v17);
          if ( v8 < 0 )
            goto LABEL_24;
          v15 = *((_QWORD *)v13 + 41);
          if ( v15 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(*((_QWORD *)v13 + 41));
          *((_QWORD *)v13 + 41) = v17;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v14 + 24LL))(
               *v14,
               TokenInformation[0],
               702LL,
               *((_QWORD *)v13 + 41),
               &v18);
        if ( v8 >= 0 )
          v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const unsigned __int16 *, const unsigned __int16 *, _QWORD, _QWORD, _DWORD, GUID *))(*(_QWORD *)*v14 + 72LL))(
                 *v14,
                 TokenInformation[0],
                 v18,
                 a2,
                 a3,
                 0LL,
                 0LL,
                 0,
                 &v22);
      }
    }
  }
LABEL_24:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v6 )
    RpcRevertToSelf();
  return (unsigned int)v8;
}
