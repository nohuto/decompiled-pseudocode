/*
 * XREFs of ?QueryInterface@IdentityManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E750
 * Callers:
 *     ?QueryInterface@IdentityManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EA00 (-QueryInterface@IdentityManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@IdentityManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EDB0 (-QueryInterface@IdentityManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@IdentityManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EE50 (-QueryInterface@IdentityManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::IdentityManager::QueryInterface(
        ContentManagement::IdentityManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IIdentityManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
