/*
 * XREFs of ?GetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18004E700
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18004FD4C (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentTriggerInternal@Internal@T.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::GetAt(
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
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::ResolveDemand(
                           &v8,
                           a3);
  return (unsigned int)v6;
}
