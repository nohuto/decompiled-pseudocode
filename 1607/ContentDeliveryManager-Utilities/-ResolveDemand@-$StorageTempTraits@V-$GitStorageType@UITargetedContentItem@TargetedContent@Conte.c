/*
 * XREFs of ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@XWinRT@@PEAUITargetedContentItem@TargetedContent@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@2@PEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004E8A0
 * Callers:
 *     ?GetAt@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004C540 (-GetAt@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqualityPre.c)
 *     ?GetMany@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@PEAI@Z @ 0x18004CAC0 (-GetMany@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqualityP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentItem>,ContentManagement::TargetedContent::ITargetedContentItem *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>>::ResolveDemand(
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
           &GUID_3a48f6a2_4e17_4a86_aca9_a93a958ecafb,
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
