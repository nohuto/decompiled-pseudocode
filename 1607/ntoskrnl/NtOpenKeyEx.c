/*
 * XREFs of NtOpenKeyEx @ 0x140415470
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(int a1, int a2, int a3, int a4)
{
  return CmOpenKey(a1, a2, a3, a4, 0LL);
}
