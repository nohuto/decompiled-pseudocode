/*
 * XREFs of ?get_SkuId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180006AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E28 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::get_SkuId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING *a2)
{
  unsigned int v4; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_shared((RTL_SRWLOCK *)this + 3, &SRWLock);
  v4 = WindowsDuplicateString(*((HSTRING *)this + 5), a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v4;
}
