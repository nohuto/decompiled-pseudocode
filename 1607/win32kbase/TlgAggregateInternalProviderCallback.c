/*
 * XREFs of TlgAggregateInternalProviderCallback @ 0x1C006F660
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C006F6EC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 i; // rbx

  if ( ControlCode == 2
    && MatchAnyKeyword == 32
    && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1C011E660, 0LL, Level) )
  {
    for ( i = qword_1C011E668; i; i = *(_QWORD *)(i + 408) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_1C011E660, 0LL);
  }
}
