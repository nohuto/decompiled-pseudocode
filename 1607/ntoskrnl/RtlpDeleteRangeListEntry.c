/*
 * XREFs of RtlpDeleteRangeListEntry @ 0x14055AE7C
 * Callers:
 *     RtlpCopyRangeListEntry @ 0x14055AAB0 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x14055AE14 (RtlFreeRangeList.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x14055AED8 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpDeleteRangeListEntry(_QWORD *Entry)
{
  char *v3; // rsi
  char *v4; // rcx
  char *i; // rax
  __int64 v6; // rdi

  if ( (*((_BYTE *)Entry + 34) & 1) != 0 )
  {
    v3 = (char *)(Entry + 2);
    v4 = (char *)(Entry[2] - 40LL);
    for ( i = v4 + 40; ; i = (char *)(v6 + 40) )
    {
      v6 = *(_QWORD *)i - 40LL;
      if ( v3 == i )
        break;
      RtlpFreeRangeListEntry(v4);
      v4 = (char *)v6;
    }
  }
  return RtlpFreeRangeListEntry(Entry);
}
