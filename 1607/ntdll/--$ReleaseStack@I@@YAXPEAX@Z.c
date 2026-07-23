/*
 * XREFs of ??$ReleaseStack@I@@YAXPEAX@Z @ 0x180105B04
 * Callers:
 *     ResCDirectoryValidateEntries @ 0x180105D68 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall ReleaseStack<unsigned int>(_QWORD *BaseAddress)
{
  void *v1; // r8
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    v1 = (void *)BaseAddress[1];
    if ( v1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
