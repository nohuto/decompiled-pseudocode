/*
 * XREFs of TlgAggregateInternalProviderCallback @ 0x14014CE74
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x1401496CC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  unsigned __int64 v4; // rax
  __int64 i; // rbx

  if ( ControlCode == 2 && MatchAnyKeyword == 32 )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&qword_140329D10, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140329D10, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_140329D10, v4);
    }
    else
    {
      if ( v4 )
        *(_BYTE *)(v4 + 26) |= 1u;
      for ( i = qword_1403418F0; i; i = *(_QWORD *)(i + 408) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140329D10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140329D10);
      KeAbPostRelease((ULONG_PTR)&qword_140329D10);
    }
  }
}
