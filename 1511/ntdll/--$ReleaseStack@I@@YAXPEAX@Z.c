/*
 * XREFs of ??$ReleaseStack@I@@YAXPEAX@Z @ 0x1800FB2BC
 * Callers:
 *     ResCDirectoryValidateEntries @ 0x1800FB458 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
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
