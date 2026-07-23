/*
 * XREFs of RtlpStackDbEntryCleanup @ 0x180101FE0
 * Callers:
 *     RtlStackDbStackAdd @ 0x180101814 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180101E68 (RtlStackDbStackRemove.c)
 *     RtlpStackDbEntryCreate @ 0x180102054 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlpStackDbSegmentRemoveRef @ 0x180102948 (RtlpStackDbSegmentRemoveRef.c)
 */

__int64 __fastcall RtlpStackDbEntryCleanup(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // ebx
  _QWORD *v5; // rdi

  v2 = 0;
  v4 = ((unsigned int)*(unsigned __int8 *)(a2 + 19) + 7) >> 3;
  if ( v4 )
  {
    v5 = (_QWORD *)(a2 + 24);
    do
    {
      if ( !*v5 )
        break;
      RtlpStackDbSegmentRemoveRef();
      ++v2;
      ++v5;
    }
    while ( v2 < v4 );
  }
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1801506D8)(a2, qword_1801506E0);
}
