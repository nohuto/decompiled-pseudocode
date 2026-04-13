/*
 * XREFs of ?GetMany@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAI@Z @ 0x18004EC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18004FD4C (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentTriggerInternal@Internal@T.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F838 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r12
  unsigned __int64 v6; // r14
  unsigned int v8; // esi
  unsigned int v9; // r13d
  char *v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  char *v13; // rax
  int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  char *v18; // rdi
  unsigned int v19; // edi
  __int64 i; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rsi
  unsigned int v25; // [rsp+30h] [rbp-38h]
  __int128 v26; // [rsp+40h] [rbp-28h]
  __m128i v27; // [rsp+40h] [rbp-28h]
  __int64 v28[3]; // [rsp+50h] [rbp-18h] BYREF
  int v31; // [rsp+C0h] [rbp+58h] BYREF
  _QWORD *v32; // [rsp+C8h] [rbp+60h]

  v32 = a4;
  v5 = a4;
  v6 = a3;
  v8 = 0;
  v9 = 0;
  v25 = 0;
  v31 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v10 = 0LL;
  XWinRT::SerializingLockPolicy::Read((__int64)v28, (RTL_SRWLOCK *)(a1 + 96), &v31);
  if ( !*(_DWORD *)(a1 + 72) )
    goto LABEL_13;
  v11 = v6;
  v12 = 16 * v6;
  if ( !is_mul_ok(v6, 0x10uLL) )
    v12 = -1LL;
  v13 = (char *)operator new[](v12, (const struct std::nothrow_t *)&TLV::nothrow);
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
  if ( v10 )
  {
LABEL_13:
    v14 = v31;
  }
  else
  {
    v14 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
    v31 = -2147024882;
  }
  if ( v14 >= 0 )
  {
    v15 = *(_DWORD *)(a1 + 64);
    v25 = v15;
    v16 = a2;
    if ( a2 > v15 )
    {
      v14 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v31 = -2147483637;
      v15 = v25;
      v16 = a2;
    }
    if ( v14 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( !(_DWORD)v6 )
          goto LABEL_41;
        v17 = v16;
        v18 = v10;
        do
        {
          if ( v17 >= v15 )
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
          v14 = 0;
          v31 = 0;
          ++v9;
          ++v17;
          v18 += 16;
          v15 = v25;
        }
        while ( v9 < (unsigned int)v6 );
      }
      else
      {
        if ( !(_DWORD)v6 )
          goto LABEL_41;
        v19 = v16;
        do
        {
          if ( v19 >= v15 )
            break;
          v27 = *(__m128i *)(*(_QWORD *)(a1 + 80) + 16LL * v19);
          v14 = 0;
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v27, 8)) )
          {
            *v5 = 0LL;
            v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_1800F4758 + 40LL))(
                    qword_1800F4758,
                    *(unsigned int *)(v27.m128i_i64[0] + 4),
                    &GUID_f4251157_4c58_48fe_b495_bcaf364fbb3c,
                    v5);
          }
          else
          {
            *v5 = v27.m128i_i64[0];
            if ( v27.m128i_i64[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27.m128i_i64[0] + 8LL))(v27.m128i_i64[0]);
          }
          if ( v14 < 0 )
            break;
          ++v8;
          ++v19;
          ++v5;
          v15 = v25;
        }
        while ( v8 < (unsigned int)v6 );
        v9 = 0;
      }
      v5 = v32;
    }
  }
LABEL_41:
  if ( v28[0] )
  {
    if ( *(_DWORD *)v28[0] == 1 )
      --*(_DWORD *)(v28[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v28[0] + 8));
    v28[0] = 0LL;
  }
  if ( v14 < 0 )
  {
LABEL_53:
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
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v22);
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
        v14 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::ResolveDemand(
                &v10[16 * (unsigned int)i],
                &v5[i]);
        if ( v14 < 0 )
          goto LABEL_53;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete[](v10);
  return (unsigned int)v14;
}
