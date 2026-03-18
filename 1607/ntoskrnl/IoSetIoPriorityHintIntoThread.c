/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x140070B88
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x140072110 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, unsigned int a2)
{
  if ( a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread();
  return 0LL;
}
