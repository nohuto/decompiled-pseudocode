/*
 * XREFs of ?Clear@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18000F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?_EraseAll@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAI@Z @ 0x18001200C (-_EraseAll@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAV.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::Clear(
        __int64 a1)
{
  bool v2; // r12
  char *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ebx
  char *v8; // r14
  __int64 v10[3]; // [rsp+38h] [rbp-18h] BYREF
  int v11; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+48h] BYREF
  char *v13; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  v13 = 0LL;
  v4 = 0LL;
  v12 = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)v10, a1 + 96, &v11);
  v7 = v11;
  if ( v11 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v11, *(unsigned __int8 *)(a1 + 117), a1 + 120);
    v7 = 0;
    v2 = *(_DWORD *)(a1 + 64) != 0;
    Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::_EraseAll(
      a1,
      &v13,
      &v12);
    v3 = v13;
    v4 = v12;
  }
  if ( v10[0] )
  {
    if ( *(_DWORD *)v10[0] == 1 )
      *(_DWORD *)(v10[0] + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v10[0] + 8));
  }
  if ( v3 )
  {
    if ( (_DWORD)v4 )
    {
      v8 = v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(v8, v5, v6);
        v8 += 16;
        --v4;
      }
      while ( v4 );
    }
    free(v3);
  }
  if ( v7 >= 0 && v2 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v11,
                           *(unsigned __int8 *)(a1 + 116),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v7;
}
