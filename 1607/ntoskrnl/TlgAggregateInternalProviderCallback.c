/*
 * XREFs of TlgAggregateInternalProviderCallback @ 0x14014C904
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x1400C66BC (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x14014915C (LookUpTableFlushComplete.c)
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
    v4 = KeAbPreAcquire((ULONG_PTR)&qword_140329CD0, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140329CD0, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_140329CD0, v4);
    }
    else
    {
      if ( v4 )
        *(_BYTE *)(v4 + 26) |= 1u;
      for ( i = qword_1403418B0; i; i = *(_QWORD *)(i + 408) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140329CD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140329CD0);
      KeAbPostRelease((ULONG_PTR)&qword_140329CD0);
    }
  }
}
