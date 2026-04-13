/*
 * XREFs of sub_1800066F0 @ 0x1800066F0
 * Callers:
 *     sub_180008640 @ 0x180008640 (sub_180008640.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800066F0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementBroker", 0x29u, a2);
}
