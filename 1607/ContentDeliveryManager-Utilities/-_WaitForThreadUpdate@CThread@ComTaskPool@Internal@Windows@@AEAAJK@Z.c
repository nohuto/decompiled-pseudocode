/*
 * XREFs of ?_WaitForThreadUpdate@CThread@ComTaskPool@Internal@Windows@@AEAAJK@Z @ 0x180004CB0
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180004E40 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::_WaitForThreadUpdate(const HANDLE *this, DWORD a2)
{
  signed int v3; // ebx
  signed int LastError; // eax
  MSG Msg; // [rsp+30h] [rbp-38h] BYREF

  if ( MsgWaitForMultipleObjectsEx(1u, this + 14, a2, 0x1CFFu, 6u) == -1 )
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( v3 >= 0 )
      v3 = -2147467259;
  }
  else
  {
    v3 = 0;
  }
  while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
  {
    *((_BYTE *)this + 96) = 1;
    TranslateMessage(&Msg);
    DispatchMessageW(&Msg);
    *((_BYTE *)this + 96) = 0;
  }
  return (unsigned int)v3;
}
