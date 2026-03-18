/*
 * XREFs of RtlpStdGetSpaceForTrace @ 0x140246140
 * Callers:
 *     RtlpStdLogCapturedStackTrace @ 0x1402461FC (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpStdExtendLowerWatermark @ 0x140245DE4 (RtlpStdExtendLowerWatermark.c)
 */

PSLIST_ENTRY __fastcall RtlpStdGetSpaceForTrace(__int64 a1, unsigned __int16 a2)
{
  unsigned int i; // ebx
  PSLIST_ENTRY v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx

  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v6 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16 * (i + 13LL)));
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 196));
      return v6 - 1;
    }
  }
  v7 = RtlpStdExtendLowerWatermark(a1, (8LL * a2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v7 )
  {
    v8 = ((((8 * a2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v8 > 0x1F )
      LOWORD(v8) = 31;
    *(_WORD *)(v7 + 8) = ((_WORD)v8 << 11) | *(_WORD *)(v7 + 8) & 0x7FF;
  }
  return (PSLIST_ENTRY)v7;
}
