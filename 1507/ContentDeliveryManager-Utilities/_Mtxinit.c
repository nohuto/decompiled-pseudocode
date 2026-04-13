/*
 * XREFs of _Mtxinit @ 0x180022B18
 * Callers:
 *     sub_180021934 @ 0x180021934 (sub_180021934.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall Mtxinit(struct _RTL_CRITICAL_SECTION *a1)
{
  return InitializeCriticalSectionEx(a1, 0xFA0u, 0);
}
