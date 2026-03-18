/*
 * XREFs of EditionGetInputDesktopId @ 0x1402A4DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionGetInputDesktopId(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18704);
}
