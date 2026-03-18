/*
 * XREFs of PspProcessRundownWorkerSingle @ 0x14040A584
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 */

__int64 PspProcessRundownWorkerSingle()
{
  void *v0; // rbx
  __int64 result; // rax

  do
  {
    _InterlockedExchange(&PspRundownNeededCountCache, 1);
    while ( PspRundownProcessCache )
    {
      v0 = (void *)_InterlockedExchange64(&PspRundownProcessCache, 0LL);
      if ( !v0 )
        break;
      PspRundownSingleProcess((ULONG_PTR)v0);
      ObfDereferenceObjectWithTag(v0, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspRundownNeededCountCache, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
