/*
 * XREFs of EditionUserInitialize @ 0x140257D50
 * Callers:
 *     <none>
 * Callees:
 *     ?SessionInitialize@DesktopRecalc@@YAXXZ @ 0x140257D80 (-SessionInitialize@DesktopRecalc@@YAXXZ.c)
 */

__int64 __fastcall EditionUserInitialize(DesktopRecalc *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  DesktopRecalc::SessionInitialize(a1);
  result = W32GetUserSessionState(v2, v1);
  *(_DWORD *)(result + 64192) = -1;
  *(_DWORD *)(result + 64208) = -1;
  return result;
}
