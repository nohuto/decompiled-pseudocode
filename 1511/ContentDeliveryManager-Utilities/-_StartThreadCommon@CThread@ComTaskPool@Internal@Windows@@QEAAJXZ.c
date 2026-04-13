/*
 * XREFs of ?_StartThreadCommon@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180008AA8
 * Callers:
 *     ?StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180008B40 (-StartThreadWithFallback@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 *     ?StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ @ 0x180008CBC (-StartThread@CThread@ComTaskPool@Internal@Windows@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::_StartThreadCommon(
        Windows::Internal::ComTaskPool::CThread *this)
{
  HANDLE Event; // rax
  signed int v3; // eax
  signed int v4; // ecx
  signed int LastError; // eax

  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  *((_QWORD *)this + 14) = Event;
  if ( Event )
  {
    if ( GetModuleHandleExW(4u, (LPCWSTR)Windows::Internal::ComTaskPool::CThread::s_ThreadProc, (HMODULE *)this + 9) )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v4 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v4 = LastError;
      if ( v4 >= 0 )
        return (unsigned int)-2147467259;
    }
  }
  else
  {
    v3 = GetLastError();
    v4 = (unsigned __int16)v3 | 0x80070000;
    if ( v3 <= 0 )
      v4 = v3;
    if ( v4 >= 0 )
      return (unsigned int)-2147467259;
  }
  return (unsigned int)v4;
}
