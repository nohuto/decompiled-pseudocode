/*
 * XREFs of KeIsApcRunningThread @ 0x1401C77D8
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x1406C6088 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
