/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentItem@TargetedContent@ContentManagement@@_N@Z @ 0x18004F34C
 * Callers:
 *     ?RuntimeClassInitialize@ContentCollectionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x180049634 (-RuntimeClassInitialize@ContentCollectionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRIN.c)
 *     ?InsertAt@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004CA70 (-InsertAt@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEquality.c)
 *     ?Append@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004CA90 (-Append@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqualityPr.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F40 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180011258 (-RaiseEvent@-$VectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180011274 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180013888 (-ResizeStorage@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqu.c)
 *     ??$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@1@PEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004FFBC (--$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@X.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v15[4]; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+34h] [rbp-2Ch] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  v16 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::TargetedContent::ITargetedContentItem>(&v17, a3);
  v7 = v16;
  if ( v16 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write((__int64)v18, a1 + 96, &v16);
    v7 = v16;
    if ( v16 >= 0 )
    {
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 64);
      if ( a2 <= *(_DWORD *)(a1 + 64) )
      {
        if ( *(_DWORD *)(a1 + 64) >= 0x7FFFFFFFu )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v15);
          v7 = 0;
          v8 = *(_DWORD *)(a1 + 68);
          if ( *(_DWORD *)(a1 + 64) + 1 <= v8 )
            goto LABEL_15;
          v9 = v8 + (v8 >> 1);
          if ( v8 + 1 > v9 )
            v9 = v8 + 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::ResizeStorage(
                 a1,
                 v9);
          if ( v7 >= 0 )
          {
LABEL_15:
            v10 = *(_DWORD *)(a1 + 64);
            if ( a2 < v10
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 80) + 16LL * (a2 + 1)),
                   16LL * (*(_DWORD *)(a1 + 68) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 80) + 16LL * a2),
                   16LL * (v10 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              v11 = v17;
              v12 = *(_QWORD *)(a1 + 80);
              *(_QWORD *)&v17 = 0LL;
              BYTE8(v17) = 0;
              *(_OWORD *)(v12 + 16LL * a2) = v11;
              v13 = *(_QWORD *)(a1 + 80);
              ++*(_DWORD *)(a1 + 64);
              ++*(_DWORD *)(a1 + 112);
              if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v13 + 16LL * a2), 8)) )
                ++*(_DWORD *)(a1 + 72);
            }
          }
        }
      }
      else
      {
        v7 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v18[0] )
    {
      if ( *(_DWORD *)v18[0] == 1 )
        *(_DWORD *)(v18[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v18[0] + 8LL));
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,0,0,0>::RaiseEvent();
  }
  else
  {
    *(_QWORD *)&v17 = 0LL;
    BYTE8(v17) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v17);
  return (unsigned int)v7;
}
