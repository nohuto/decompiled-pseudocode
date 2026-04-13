/*
 * XREFs of sub_1800033B0 @ 0x1800033B0
 * Callers:
 *     sub_1800061F0 @ 0x1800061F0 (sub_1800061F0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800033B0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppManager", 0x1Cu, a2);
}
