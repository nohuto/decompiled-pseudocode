/*
 * XREFs of ?GetMany@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@PEAI@Z @ 0x18004CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F08 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@XWinRT@@PEAUITargetedContentItem@TargetedContent@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@2@PEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004E8A0 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentItem@TargetedContent@Conte.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058D74 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int v9; // r15d
  char *v10; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  char *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // edi
  unsigned int v17; // r13d
  char *v18; // rbx
  unsigned int v19; // ebx
  __int64 i; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rsi
  unsigned int v25; // [rsp+30h] [rbp-48h]
  __int128 v26; // [rsp+50h] [rbp-28h]
  __m128i v27; // [rsp+50h] [rbp-28h]
  __int64 v28[3]; // [rsp+60h] [rbp-18h] BYREF
  int v31; // [rsp+D0h] [rbp+58h] BYREF
  _QWORD *v32; // [rsp+D8h] [rbp+60h]

  v32 = a4;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v31 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v10 = 0LL;
  XWinRT::SerializingLockPolicy::Read((__int64)v28, (RTL_SRWLOCK *)(v7 + 96), &v31);
  if ( *(_DWORD *)(v7 + 72) )
  {
    v11 = v6;
    v12 = 16 * v6;
    if ( !is_mul_ok(v6, 0x10uLL) )
      v12 = -1LL;
    v13 = (char *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v13;
    if ( v13 )
    {
      if ( (_DWORD)v6 )
      {
        do
        {
          *(_QWORD *)v13 = 0LL;
          v13[8] = 0;
          v13 += 16;
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      v10 = 0LL;
    }
    v7 = a1;
  }
  v14 = *(_DWORD *)(v7 + 64);
  v25 = v14;
  v15 = a2;
  if ( a2 <= v14 )
  {
    v16 = v31;
  }
  else
  {
    v16 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    v31 = -2147483637;
    v14 = v25;
    v15 = a2;
  }
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(v7 + 72) )
    {
      if ( !(_DWORD)v6 )
        goto LABEL_39;
      v17 = v15;
      v18 = v10;
      do
      {
        if ( v17 >= v14 )
          break;
        v26 = *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16LL * v17);
        if ( v18 )
        {
          *(_QWORD *)v18 = 0LL;
          v18[8] = 0;
        }
        v18[8] = BYTE8(v26);
        if ( BYTE8(v26) )
        {
          *(_QWORD *)v18 = v26;
          _InterlockedIncrement((volatile signed __int32 *)v26);
        }
        else
        {
          *(_QWORD *)v18 = v26;
          if ( (_QWORD)v26 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 8LL))(v26);
        }
        v16 = 0;
        v31 = 0;
        ++v9;
        ++v17;
        v18 += 16;
        v14 = v25;
      }
      while ( v9 < (unsigned int)v6 );
    }
    else
    {
      if ( !(_DWORD)v6 )
        goto LABEL_39;
      v19 = v15;
      do
      {
        if ( v19 >= v14 )
          break;
        v27 = *(__m128i *)(*(_QWORD *)(a1 + 80) + 16LL * v19);
        v16 = 0;
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v27, 8)) )
        {
          *v5 = 0LL;
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18008C0B0 + 40LL))(
                  qword_18008C0B0,
                  *(unsigned int *)(v27.m128i_i64[0] + 4),
                  &GUID_3a48f6a2_4e17_4a86_aca9_a93a958ecafb,
                  v5);
        }
        else
        {
          *v5 = v27.m128i_i64[0];
          if ( v27.m128i_i64[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27.m128i_i64[0] + 8LL))(v27.m128i_i64[0]);
        }
        if ( v16 < 0 )
          break;
        ++v8;
        ++v19;
        ++v5;
        v14 = v25;
      }
      while ( v8 < (unsigned int)v6 );
      v9 = 0;
    }
    v5 = v32;
  }
LABEL_39:
  if ( v28[0] )
  {
    if ( *(_DWORD *)v28[0] == 1 )
      --*(_DWORD *)(v28[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v28[0] + 8));
    v28[0] = 0LL;
  }
  if ( v16 < 0 )
  {
LABEL_51:
    if ( v8 )
    {
      v21 = v8;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v21;
      }
      while ( v21 );
    }
    if ( v8 < v9 )
    {
      v22 = (__int64)&v10[16 * v8];
      v23 = v9 - v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>(v22);
        v22 += 16LL;
        --v23;
      }
      while ( v23 );
    }
  }
  else
  {
    if ( v9 )
    {
      for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i + a2 >= v25 )
          break;
        v16 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentItem>,ContentManagement::TargetedContent::ITargetedContentItem *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>>::ResolveDemand(
                &v10[16 * (unsigned int)i],
                &v5[i]);
        if ( v16 < 0 )
          goto LABEL_51;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete[](v10);
  return (unsigned int)v16;
}
