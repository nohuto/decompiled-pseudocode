/*
 * XREFs of ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004C6C
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x18000580C (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     ?_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180004A7C (-_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::StartThread(HMODULE *this)
{
  signed int started; // ebx
  HMODULE Event; // rax
  signed int v4; // eax
  HANDLE v5; // rsi
  signed int LastError; // eax
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  started = Windows::Internal::ComTaskPool::CThread::_StartThreadCommon((Windows::Internal::ComTaskPool::CThread *)this);
  if ( started >= 0 )
  {
    Event = (HMODULE)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    this[7] = Event;
    if ( Event )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
      (*((void (__fastcall **)(HMODULE *))*this + 1))(this);
      v5 = CreateThread(0LL, 0LL, Windows::Internal::ComTaskPool::CThread::s_ThreadProc, this, 0, &ThreadId);
      if ( v5 )
      {
        started = 0;
        CloseHandle(v5);
      }
      else
      {
        LastError = GetLastError();
        started = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          started = LastError;
        if ( started >= 0 )
          started = -2147467259;
        (*((void (__fastcall **)(HMODULE *))*this + 2))(this);
        FreeLibrary(this[9]);
        this[9] = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_cThreadsStarting);
      }
    }
    else
    {
      v4 = GetLastError();
      started = (unsigned __int16)v4 | 0x80070000;
      if ( v4 <= 0 )
        started = v4;
      if ( started >= 0 )
        return (unsigned int)-2147467259;
    }
  }
  return (unsigned int)started;
}
