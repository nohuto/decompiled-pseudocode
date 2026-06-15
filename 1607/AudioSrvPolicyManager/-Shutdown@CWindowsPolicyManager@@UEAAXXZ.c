/*
 * XREFs of ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180003DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18001A7C8 (--1TSSession@@QEAA@XZ.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowsPolicyManager::Shutdown(CWindowsPolicyManager *this)
{
  __int64 v2; // rcx
  void *v3; // rbx
  _QWORD *v4; // rax
  TSSession *v5; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v7; // rax
  CApplicationManager *v8; // rbx
  HANDLE v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  CApplicationManager *v13; // rbx
  struct CAudioThreadPool *v14; // rbx
  struct _TP_CLEANUP_GROUP *v15; // rcx
  LPCRITICAL_SECTION v16; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+10h] BYREF
  TSSession *v19; // [rsp+70h] [rbp+18h]

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  wil::critical_section::lock(v2, &lpCriticalSection);
  while ( 1 )
  {
    v3 = lpMem;
    if ( !lpMem )
      break;
    v4 = *(_QWORD **)lpMem;
    v5 = (TSSession *)*((_QWORD *)lpMem + 2);
    v19 = v5;
    lpMem = v4;
    if ( v4 )
      v4[1] = 0LL;
    else
      qword_180034CC8 = 0LL;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    --dword_180034CD0;
    if ( v5 )
    {
      TSSession::~TSSession(v5);
      v7 = GetProcessHeap();
      HeapFree(v7, 0, v5);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v8 = g_ApplicationManager;
  v17 = 0;
  v16 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v16);
  *((_DWORD *)v8 + 4) = 1;
  if ( v17 )
    LeaveCriticalSection(v16);
  v9 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v9 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v9, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL);
    }
    *((_QWORD *)this + 5) = 0LL;
  }
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 4) = 0LL;
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 6);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 32LL))(v12);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
    }
    *((_QWORD *)this + 6) = 0LL;
  }
  v13 = g_ApplicationManager;
  if ( g_ApplicationManager )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v13 + 16LL))(v13);
      (*(void (__fastcall **)(CApplicationManager *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1LL);
    }
    g_ApplicationManager = 0LL;
  }
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  v14 = ThreadPool;
  if ( ThreadPool )
  {
    v15 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)ThreadPool + 10);
    if ( v15 )
    {
      CloseThreadpoolCleanupGroupMembers(v15, 0, 0LL);
      CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)v14 + 10));
      *((_QWORD *)v14 + 10) = 0LL;
      v14 = ThreadPool;
    }
    if ( v14 )
      (**(void (__fastcall ***)(struct CAudioThreadPool *, __int64))v14)(v14, 1LL);
  }
  ThreadPool = 0LL;
  if ( g_DeviceEnumerator )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)g_DeviceEnumerator + 16LL))(g_DeviceEnumerator);
    g_DeviceEnumerator = 0LL;
  }
}
