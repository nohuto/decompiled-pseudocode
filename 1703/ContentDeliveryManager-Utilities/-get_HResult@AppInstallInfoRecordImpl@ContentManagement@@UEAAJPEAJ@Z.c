/*
 * XREFs of ?get_HResult@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAJ@Z @ 0x180006D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::get_HResult(
        ContentManagement::AppInstallInfoRecordImpl *this,
        int *a2)
{
  *a2 = *((_DWORD *)this + 12);
  return 0LL;
}
