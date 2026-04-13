/*
 * XREFs of ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAUIAppInstallInfoRecord@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@2@PEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x1800111A4
 * Callers:
 *     ?GetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18000F2D0 (-GetAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAppI.c)
 *     ?GetMany@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18000F9E0 (-GetMany@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,ContentManagement::IAppInstallInfoRecord *,XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::ResolveDemand(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // esi
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v6; // rdi

  *a2 = 0LL;
  v2 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v5 = *(volatile signed __int32 **)a1;
    *a2 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18008C0B0 + 40LL))(
           qword_18008C0B0,
           *((unsigned int *)v5 + 1),
           &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
           a2);
    if ( v2 >= 0 )
    {
      v6 = *(volatile signed __int32 **)a1;
      if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 && v6 )
      {
        if ( *((_DWORD *)v6 + 1) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18008C0B0 + 32LL))(qword_18008C0B0);
        operator delete((void *)v6);
      }
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 0;
    }
  }
  else
  {
    *a2 = *(_QWORD *)a1;
    *(_QWORD *)a1 = 0LL;
  }
  return (unsigned int)v2;
}
