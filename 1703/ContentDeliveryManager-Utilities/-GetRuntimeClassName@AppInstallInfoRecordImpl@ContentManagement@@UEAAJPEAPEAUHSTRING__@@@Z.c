/*
 * XREFs of ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180006AE0
 * Callers:
 *     ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001EDF0 (-GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppInstallInfoRecordImpl::GetRuntimeClassName(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppInstallInfoRecord", 0x26u, a2);
}
