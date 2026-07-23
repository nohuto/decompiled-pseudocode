/*
 * XREFs of TppSimplepExecuteCallback @ 0x180072360
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x1800016FC (TppETWCallbackDequeue.c)
 *     TppStartThreadData @ 0x18003C1E0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18003C368 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall TppSimplepExecuteCallback(_DWORD *Instance, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)(a2 - 192);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v2[17], a2, v2[10], v2[11], v2[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(Instance, (__int64)v2, 1) )
  {
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(v2[17], a2, v2[10], v2[11], v2[13]);
    TppStartThreadData(&v5, v2[10], v2[11], v2[13]);
    ((void (__fastcall *)(_DWORD *, __int64))v2[10])(Instance, v2[11]);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(v2[17], a2, v2[10], v2[11], v2[13]);
    TppCompleteThreadData(v5);
  }
}
