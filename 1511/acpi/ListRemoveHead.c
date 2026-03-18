/*
 * XREFs of ListRemoveHead @ 0x1C00201C8
 * Callers:
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     DequeueAndReadyContext @ 0x1C0020174 (DequeueAndReadyContext.c)
 *     AMLIResumeInterpreter @ 0x1C0042224 (AMLIResumeInterpreter.c)
 * Callees:
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 */

__int64 __fastcall ListRemoveHead(_QWORD ***a1)
{
  __int64 v1; // r9

  v1 = (__int64)*a1;
  if ( *a1 )
    ListRemoveEntry(*a1, (__int64)a1);
  return v1;
}
