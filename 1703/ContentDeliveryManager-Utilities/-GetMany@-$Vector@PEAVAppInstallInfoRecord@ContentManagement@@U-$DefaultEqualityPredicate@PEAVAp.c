/*
 * XREFs of ?GetMany@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x180015120
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAUIAppInstallInfoRecord@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@2@PEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001714C (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F838 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetMany(
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
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  char *v15; // rax
  int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // r12d
  char *v20; // rdi
  unsigned int v21; // edi
  __int64 i; // rdi
  __int64 v23; // rdi
  char *v24; // rdi
  __int64 v25; // rsi
  unsigned int v27; // [rsp+30h] [rbp-38h]
  __int128 v28; // [rsp+40h] [rbp-28h]
  __m128i v29; // [rsp+40h] [rbp-28h]
  __int64 v30[3]; // [rsp+50h] [rbp-18h] BYREF
  int v33; // [rsp+C0h] [rbp+58h] BYREF
  _QWORD *v34; // [rsp+C8h] [rbp+60h]

  v34 = a4;
  v5 = a4;
  v6 = a3;
  v8 = 0;
  v9 = 0;
  v27 = 0;
  v33 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v10 = 0LL;
  XWinRT::SerializingLockPolicy::Read((__int64)v30, (RTL_SRWLOCK *)(a1 + 96), &v33);
  if ( !*(_DWORD *)(a1 + 72) )
    goto LABEL_13;
  v13 = v6;
  v14 = 16 * v6;
  if ( !is_mul_ok(v6, 0x10uLL) )
    v14 = -1LL;
  v15 = (char *)operator new[](v14, (const struct std::nothrow_t *)&TLV::nothrow);
  v10 = v15;
  if ( v15 )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        *(_QWORD *)v15 = 0LL;
        v15[8] = 0;
        v15 += 16;
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
LABEL_13:
    v16 = v33;
  }
  else
  {
    v16 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
    v33 = -2147024882;
  }
  if ( v16 >= 0 )
  {
    v17 = *(_DWORD *)(a1 + 64);
    v27 = v17;
    v18 = a2;
    if ( a2 > v17 )
    {
      v16 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v33 = -2147483637;
      v17 = v27;
      v18 = a2;
    }
    if ( v16 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( !(_DWORD)v6 )
          goto LABEL_41;
        v19 = v18;
        v20 = v10;
        do
        {
          if ( v19 >= v17 )
            break;
          v28 = *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16LL * v19);
          if ( v20 )
          {
            *(_QWORD *)v20 = 0LL;
            v20[8] = 0;
          }
          v20[8] = BYTE8(v28);
          if ( BYTE8(v28) )
          {
            *(_QWORD *)v20 = v28;
            _InterlockedIncrement((volatile signed __int32 *)v28);
          }
          else
          {
            *(_QWORD *)v20 = v28;
            if ( (_QWORD)v28 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 8LL))(v28);
          }
          v16 = 0;
          v33 = 0;
          ++v9;
          ++v19;
          v20 += 16;
          v17 = v27;
        }
        while ( v9 < (unsigned int)v6 );
      }
      else
      {
        if ( !(_DWORD)v6 )
          goto LABEL_41;
        v21 = v18;
        do
        {
          if ( v21 >= v17 )
            break;
          v29 = *(__m128i *)(*(_QWORD *)(a1 + 80) + 16LL * v21);
          v16 = 0;
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v29, 8)) )
          {
            *v5 = 0LL;
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_1800F4758 + 40LL))(
                    qword_1800F4758,
                    *(unsigned int *)(v29.m128i_i64[0] + 4),
                    &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
                    v5);
          }
          else
          {
            *v5 = v29.m128i_i64[0];
            if ( v29.m128i_i64[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29.m128i_i64[0] + 8LL))(v29.m128i_i64[0]);
          }
          if ( v16 < 0 )
            break;
          ++v8;
          ++v21;
          ++v5;
          v17 = v27;
        }
        while ( v8 < (unsigned int)v6 );
        v9 = 0;
      }
      v5 = v34;
    }
  }
LABEL_41:
  if ( v30[0] )
  {
    if ( *(_DWORD *)v30[0] == 1 )
      --*(_DWORD *)(v30[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v30[0] + 8));
    v30[0] = 0LL;
  }
  if ( v16 < 0 )
  {
LABEL_53:
    if ( v8 )
    {
      v23 = v8;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v23;
      }
      while ( v23 );
    }
    if ( v8 < v9 )
    {
      v24 = &v10[16 * v8];
      v25 = v9 - v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v24, v11, v12);
        v24 += 16;
        --v25;
      }
      while ( v25 );
    }
  }
  else
  {
    if ( v9 )
    {
      for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i + a2 >= v27 )
          break;
        v16 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,ContentManagement::IAppInstallInfoRecord *,XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::ResolveDemand(
                &v10[16 * (unsigned int)i],
                &v5[i]);
        if ( v16 < 0 )
          goto LABEL_53;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete[](v10);
  return (unsigned int)v16;
}
