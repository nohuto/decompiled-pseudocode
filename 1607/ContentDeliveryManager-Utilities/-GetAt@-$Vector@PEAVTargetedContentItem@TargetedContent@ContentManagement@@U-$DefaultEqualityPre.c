/*
 * XREFs of ?GetAt@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004C540
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F08 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@XWinRT@@PEAUITargetedContentItem@TargetedContent@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@2@PEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004E8A0 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentItem@TargetedContent@Conte.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // r14
  int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  char v9; // [rsp+30h] [rbp-30h]
  __m128i v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+80h] [rbp+20h] BYREF

  v4 = a2;
  *a3 = 0LL;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)&v11, (RTL_SRWLOCK *)(a1 + 96), &v12);
  v6 = v12;
  if ( v12 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 64) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v12 = -2147483637;
    }
    if ( v6 >= 0 )
    {
      if ( *a3 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
        *a3 = 0LL;
      }
      v10 = *(__m128i *)(*(_QWORD *)(a1 + 80) + 16 * v4);
      v9 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
      if ( v9 )
      {
        v8 = v10.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v10.m128i_i64[0]);
      }
      else
      {
        v8 = v10.m128i_i64[0];
        if ( v10.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10.m128i_i64[0] + 8LL))(v10.m128i_i64[0]);
      }
      v6 = 0;
    }
  }
  if ( v11 )
  {
    if ( *(_DWORD *)v11 == 1 )
      --*(_DWORD *)(v11 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v11 + 8));
  }
  if ( v6 >= 0 )
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentItem>,ContentManagement::TargetedContent::ITargetedContentItem *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>>::ResolveDemand(
                           &v8,
                           a3);
  return (unsigned int)v6;
}
