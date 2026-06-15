/*
 * XREFs of ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180004010
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180018868 (--1TSSession@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowsPolicyManager::Shutdown(CWindowsPolicyManager *this)
{
  void *v2; // rcx
  _QWORD *v3; // rax
  TSSession *v4; // rbx
  CApplicationManager *v5; // rbx
  HANDLE v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  CApplicationManager *v10; // rbx
  struct CAudioThreadPool *v11; // rbx
  struct _TP_CLEANUP_GROUP *v12; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  while ( 1 )
  {
    v2 = qword_180031D68;
    if ( !qword_180031D68 )
      break;
    v3 = *(_QWORD **)qword_180031D68;
    v4 = (TSSession *)*((_QWORD *)qword_180031D68 + 2);
    qword_180031D68 = v3;
    if ( v3 )
      v3[1] = 0LL;
    else
      qword_180031D70 = 0LL;
    operator delete(v2, 0x18uLL);
    --dword_180031D78;
    if ( v4 )
    {
      TSSession::~TSSession(v4);
      operator delete(v4, 0x178uLL);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v5 = g_ApplicationManager;
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  *((_DWORD *)v5 + 4) = 1;
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  v6 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v6 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v6, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
  }
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
    }
    *((_QWORD *)this + 5) = 0LL;
  }
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 6);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 32LL))(v9);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
    }
    *((_QWORD *)this + 6) = 0LL;
  }
  v10 = g_ApplicationManager;
  if ( g_ApplicationManager )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(CApplicationManager *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL);
    }
    g_ApplicationManager = 0LL;
  }
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  v11 = ThreadPool;
  if ( ThreadPool )
  {
    v12 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)ThreadPool + 10);
    if ( v12 )
    {
      CloseThreadpoolCleanupGroupMembers(v12, 0, 0LL);
      CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)v11 + 10));
      *((_QWORD *)v11 + 10) = 0LL;
      v11 = ThreadPool;
    }
    if ( v11 )
      (**(void (__fastcall ***)(struct CAudioThreadPool *, __int64))v11)(v11, 1LL);
  }
  ThreadPool = 0LL;
  if ( g_DeviceEnumerator )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)g_DeviceEnumerator + 16LL))(g_DeviceEnumerator);
    g_DeviceEnumerator = 0LL;
  }
}
