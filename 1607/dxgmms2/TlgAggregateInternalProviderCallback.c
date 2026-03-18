/*
 * XREFs of TlgAggregateInternalProviderCallback @ 0x1C00134E0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C001356C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 i; // rbx

  if ( ControlCode == 2
    && MatchAnyKeyword == 32
    && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1C0035528, 0LL) )
  {
    for ( i = qword_1C0035728; i; i = *(_QWORD *)(i + 408) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_1C0035528, 0LL);
  }
}
