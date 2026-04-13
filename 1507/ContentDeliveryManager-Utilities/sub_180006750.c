/*
 * XREFs of sub_180006750 @ 0x180006750
 * Callers:
 *     sub_180008630 @ 0x180008630 (sub_180008630.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180006750(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppContainerCreativeEventReportedCache", 0x38u, a2);
}
