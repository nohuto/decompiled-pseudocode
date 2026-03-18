/*
 * XREFs of PspProcessRundownWorkerSingle @ 0x1404F1188
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
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
      PspRundownSingleProcess((ULONG_PTR)v0, 0);
      ObfDereferenceObjectWithTag(v0, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspRundownNeededCountCache, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
