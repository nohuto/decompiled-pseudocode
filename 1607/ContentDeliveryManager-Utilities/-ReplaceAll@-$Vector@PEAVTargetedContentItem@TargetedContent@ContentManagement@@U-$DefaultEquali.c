/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ??$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@1@PEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004FFBC (--$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@X.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __m128i *v3; // rdi
  unsigned int v4; // r14d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rsi
  __m128i *v11; // r15
  unsigned int v12; // eax
  __m128i *v13; // rax
  __int64 v14; // r14
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0;
  v3 = 0LL;
  v4 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = (__m128i *)malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v10 = 0LL;
  if ( v4 )
  {
    v11 = v3;
    while ( 1 )
    {
      v17 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::TargetedContent::ITargetedContentItem>(
              &v3[(unsigned int)v10],
              *a3);
      v9 = v17;
      if ( v17 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) )
        ++v6;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      ++v11;
      if ( (unsigned int)v10 >= v4 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    XWinRT::SerializingLockPolicy::Write((__int64)&v16, a1 + 96, &v17);
    v9 = v17;
    if ( v17 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
      v12 = *(_DWORD *)(a1 + 64);
      v9 = 0;
      *(_DWORD *)(a1 + 64) = v10;
      v10 = v12;
      *(_DWORD *)(a1 + 68) = v4;
      *(_DWORD *)(a1 + 72) = v6;
      v13 = *(__m128i **)(a1 + 80);
      *(_QWORD *)(a1 + 80) = v3;
      v3 = v13;
      ++*(_DWORD *)(a1 + 112);
    }
    if ( v16 )
    {
      if ( *(_DWORD *)v16 == 1 )
        *(_DWORD *)(v16 + 8) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v16 + 8));
      v16 = 0LL;
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v14 = (__int64)v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(v14);
        v14 += 16LL;
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
