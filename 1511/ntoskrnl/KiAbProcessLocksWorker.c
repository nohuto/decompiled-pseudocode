/*
 * XREFs of KiAbProcessLocksWorker @ 0x140031F4C
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140031F04 (KiAbDeferredProcessingWorker.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 */

_UNKNOWN **__fastcall KiAbProcessLocksWorker(_QWORD **a1, __int64 *a2, __int64 a3, int a4)
{
  _UNKNOWN **result; // rax
  __int64 *v6; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  signed __int32 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a2;
  if ( a4 )
  {
    if ( *a2 )
    {
      do
      {
        v9 = *v6;
        if ( *v6 )
        {
          result = *(_UNKNOWN ***)v9;
          *v6 = *(_QWORD *)v9;
        }
        *(_QWORD *)v9 = 1LL;
        _InterlockedOr(v10, 0);
        if ( *(_BYTE *)(v9 + 35) )
          result = (_UNKNOWN **)KiAbProcessThreadLocks((int)v9 - 1384, 0, 0, 1, a3, (__int64)a1, 0LL);
        _InterlockedDecrement16((volatile signed __int16 *)(v9 + 32));
      }
      while ( *v6 );
    }
    v6 = 0LL;
  }
  while ( *a1 )
  {
    v8 = *a1;
    result = (_UNKNOWN **)**a1;
    *a1 = result;
    *v8 = 1LL;
    _InterlockedOr(v10, 0);
    if ( *((_BYTE *)v8 - 583) )
      result = (_UNKNOWN **)KiAbProcessThreadLocks((int)v8 - 1376, 0, 1, 0, a3, (__int64)a1, (__int64)v6);
    _InterlockedDecrement16((volatile signed __int16 *)v8 + 20);
  }
  return result;
}
