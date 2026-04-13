/*
 * XREFs of ?put_ProductId@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180006A50
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180009D14 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::put_ProductId(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING a2)
{
  unsigned int v4; // esi
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 3, &SRWLock);
  v4 = 0;
  if ( !a2 || a2 != *((HSTRING *)this + 4) )
  {
    WindowsDeleteString(*((HSTRING *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
    v4 = WindowsDuplicateString(a2, (HSTRING *)this + 4);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v4;
}
