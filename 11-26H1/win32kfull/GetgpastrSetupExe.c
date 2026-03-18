/*
 * XREFs of GetgpastrSetupExe @ 0x1402A1BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpastrSetupExe(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2) + 68416;
  *a1 = result;
  return result;
}
