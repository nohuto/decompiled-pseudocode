/*
 * XREFs of PpmIdleGuestExecute @ 0x14020D5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestExecute(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle(a1, a2);
  return 0LL;
}
