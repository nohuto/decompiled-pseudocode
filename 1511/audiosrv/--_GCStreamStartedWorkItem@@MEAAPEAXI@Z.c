/*
 * XREFs of ??_GCStreamStartedWorkItem@@MEAAPEAXI@Z @ 0x18002EAC0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CStreamStartedWorkItem *__fastcall CStreamStartedWorkItem::`scalar deleting destructor'(
        CStreamStartedWorkItem *this,
        char a2)
{
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(CAudioSession *); // rsi
  __int64 v7; // rsi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CStreamStartedWorkItem::`vftable';
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == CAudioSession::Release )
      CAudioSession::Release(*((CAudioSession **)this + 2));
    else
      v6(*((CAudioSession **)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
