/*
 * XREFs of KeIsApcRunningThread @ 0x1401D65B0
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x1407120D8 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
