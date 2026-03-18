/*
 * XREFs of ListRemoveHead @ 0x1C001F638
 * Callers:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     DequeueAndReadyContext @ 0x1C001F5E4 (DequeueAndReadyContext.c)
 *     AMLIResumeInterpreter @ 0x1C0042804 (AMLIResumeInterpreter.c)
 * Callees:
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 */

__int64 __fastcall ListRemoveHead(_QWORD ***a1)
{
  __int64 v1; // r9

  v1 = (__int64)*a1;
  if ( *a1 )
    ListRemoveEntry(*a1, (__int64)a1);
  return v1;
}
