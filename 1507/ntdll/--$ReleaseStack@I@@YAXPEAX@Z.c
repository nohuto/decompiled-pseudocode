/*
 * XREFs of ??$ReleaseStack@I@@YAXPEAX@Z @ 0x1800FBDDC
 * Callers:
 *     ResCDirectoryValidateEntries @ 0x1800FC040 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

__int64 __fastcall ReleaseStack<unsigned int>(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
