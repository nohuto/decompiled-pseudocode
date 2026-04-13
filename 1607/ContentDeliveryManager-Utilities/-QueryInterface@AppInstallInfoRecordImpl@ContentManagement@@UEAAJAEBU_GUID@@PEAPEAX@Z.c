/*
 * XREFs of ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006920
 * Callers:
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017CE0 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018020 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800180C0 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::QueryInterface(
        ContentManagement::AppInstallInfoRecordImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppInstallInfoRecord,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
