/*
 * XREFs of ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x180019674
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x18001AA6C (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x180020A40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoLaunchBackgroundTask(
        struct CApplication *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  int v5; // r14d
  int v9; // eax
  int v10; // ebx
  RPC_STATUS v11; // eax
  HANDLE CurrentThread; // rax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // ebx
  struct TSSession *v15; // rdi
  _QWORD *v16; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  unsigned int v22; // [rsp+50h] [rbp-79h] BYREF
  void *TokenHandle; // [rsp+58h] [rbp-71h] BYREF
  ULONG ReturnLength; // [rsp+60h] [rbp-69h] BYREF
  struct TSSession *v25; // [rsp+68h] [rbp-61h] BYREF
  _QWORD TokenInformation[12]; // [rsp+70h] [rbp-59h] BYREF

  v22 = 0;
  v5 = 0;
  v25 = 0LL;
  TokenHandle = 0LL;
  ReturnLength = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v9 = TsSessionFromSessionId(*((_DWORD *)a1 + 43), 0, 0LL, &v25);
  if ( v9 )
  {
    v10 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v10 = v9;
  }
  else
  {
    v11 = RpcImpersonateClient(0LL);
    if ( !v11 || v11 == 1725 )
    {
      v5 = 1;
      CurrentThread = GetCurrentThread();
      v13 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
      if ( v13 >= 0 || (v10 = v13 | 0x10000000, v10 >= 0) )
      {
        v14 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        if ( v14 >= 0 || (v10 = v14 | 0x10000000, v10 >= 0) )
        {
          RpcRevertToSelf();
          v15 = v25;
          v5 = 0;
          v16 = (_QWORD *)((char *)v25 + 320);
          if ( *((_QWORD *)v25 + 40) || (v10 = CreateOnDemandBrokerClient(L"AudioSrv", (char *)v25 + 320), v10 >= 0) )
          {
            if ( !*((_QWORD *)v15 + 41) )
            {
              ProcessHeap = GetProcessHeap();
              v18 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
              if ( !v18 )
              {
                v10 = -2147024882;
                goto LABEL_25;
              }
              v18[1] = 0LL;
              *v18 = &CBackgroundSessionCallbacks::`vftable'{for `CUnknown'};
              v18[2] = &CBackgroundSessionCallbacks::`vftable'{for `IBackgroundSessionCallbacks'};
              *((_DWORD *)v18 + 2) = 1;
              v19 = v18 + 2;
              v20 = *((_QWORD *)v15 + 41);
              if ( v20 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
              *((_QWORD *)v15 + 41) = v19;
            }
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v16 + 24LL))(
                    *v16,
                    TokenInformation[0],
                    702LL,
                    *((_QWORD *)v15 + 41),
                    &v22);
            if ( v10 >= 0 )
              v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const unsigned __int16 *, const unsigned __int16 *, _QWORD, _QWORD, _DWORD, struct _GUID *))(*(_QWORD *)*v16 + 72LL))(
                      *v16,
                      TokenInformation[0],
                      v22,
                      a2,
                      a3,
                      0LL,
                      0LL,
                      0,
                      a4);
          }
        }
      }
    }
    else
    {
      v10 = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        v10 = v11;
    }
  }
LABEL_25:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 )
    RpcRevertToSelf();
  return (unsigned int)v10;
}
