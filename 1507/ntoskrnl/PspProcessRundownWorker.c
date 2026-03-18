/*
 * XREFs of PspProcessRundownWorker @ 0x1406C3E28
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 */

__int64 __fastcall PspProcessRundownWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rcx
  ULONG_PTR NextProcess; // rax
  void *v6; // rbx
  void *v7; // rbx
  __int64 result; // rax

  do
  {
    v4 = 0LL;
    _InterlockedExchange(&PspRundownNeededCount, 1);
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v4, a2, a3, a4);
      v6 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( _interlockedbittestandreset((volatile signed __int32 *)(NextProcess + 768), 8u) )
      {
        PspRundownSingleProcess(NextProcess, 0LL, a3, a4);
        ObfDereferenceObjectWithTag(v6, 0x77537350u);
      }
      v4 = v6;
    }
    while ( PspRundownProcessCache )
    {
      v7 = (void *)_InterlockedExchange64(&PspRundownProcessCache, 0LL);
      if ( !v7 )
        break;
      PspRundownSingleProcess((ULONG_PTR)v7, 0LL, a3, a4);
      ObfDereferenceObjectWithTag(v7, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspRundownNeededCount, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
