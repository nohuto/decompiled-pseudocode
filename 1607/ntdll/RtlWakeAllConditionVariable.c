/*
 * XREFs of RtlWakeAllConditionVariable @ 0x180052E50
 * Callers:
 *     EtwpStopLoggerInstance @ 0x180051DA0 (EtwpStopLoggerInstance.c)
 *     EtwpFlushActiveBuffers @ 0x180052C70 (EtwpFlushActiveBuffers.c)
 *     RtlCloneUserProcess @ 0x1800D3D00 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D3FD0 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A71D0 (ZwAlertThreadByThreadId.c)
 */

void __fastcall RtlWakeAllConditionVariable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    while ( (v1 & 7) != 7 )
    {
      if ( (v1 & 8) != 0 )
      {
        v2 = _InterlockedCompareExchange64(a1, v1 | 7, v1);
        if ( v1 == v2 )
          return;
      }
      else
      {
        v2 = _InterlockedCompareExchange64(a1, 0LL, v1);
        if ( v1 == v2 )
        {
          v3 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v3 )
          {
            do
            {
              v4 = *(_QWORD *)v3;
              _interlockedbittestandset((volatile signed __int32 *)(v3 + 36), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v3 + 36), 1u) )
                ZwAlertThreadByThreadId(*(_QWORD *)(v3 + 24));
              v3 = v4;
            }
            while ( v4 );
          }
          return;
        }
      }
      v1 = v2;
      if ( !v2 )
        return;
    }
  }
}
