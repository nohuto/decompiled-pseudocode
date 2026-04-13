/*
 * XREFs of ?IndexOf@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x180014C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?IndexOfInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@IPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x180017CA8 (-IndexOfInternal@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicat.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F838 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  char *v8; // rsi
  unsigned int v9; // r14d
  char *v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // ebx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  char *v16; // rax
  unsigned int v17; // ebp
  int v18; // ecx
  char *v19; // rdi
  __int64 v20; // rbp
  __int128 v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  char *v24; // [rsp+90h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)&v23, (RTL_SRWLOCK *)(a1 + 96), &v24);
  v12 = -1LL;
  v13 = (int)v24;
  if ( (int)v24 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v14 = *(unsigned int *)(a1 + 64);
      v15 = 16 * v14;
      if ( !is_mul_ok(v14, 0x10uLL) )
        v15 = -1LL;
      v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&TLV::nothrow);
      v8 = v16;
      v24 = v16;
      if ( v16 )
      {
        for ( ; v14; --v14 )
        {
          *(_QWORD *)v16 = 0LL;
          v16[8] = 0;
          v16 += 16;
        }
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v17 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          LODWORD(v24) = 0;
          do
          {
            v22 = *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16LL * v17);
            v10 = &v8[16 * v17];
            if ( v10 )
            {
              *(_QWORD *)v10 = 0LL;
              v10[8] = 0;
            }
            v10[8] = BYTE8(v22);
            if ( BYTE8(v22) )
            {
              *(_QWORD *)v10 = v22;
              _InterlockedIncrement((volatile signed __int32 *)v22);
            }
            else
            {
              *(_QWORD *)v10 = v22;
              if ( (_QWORD)v22 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(v22);
            }
            ++v9;
            ++v17;
          }
          while ( v17 < *(_DWORD *)(a1 + 64) );
          v13 = (int)v24;
        }
      }
      else
      {
        v13 = -2147024882;
      }
    }
    else
    {
      v13 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
              v11,
              *(_QWORD *)(a1 + 80),
              *(_DWORD *)(a1 + 64),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
    v12 = -1LL;
  }
  v18 = v23;
  if ( v23 )
  {
    if ( *(_DWORD *)v23 == 1 )
      --*(_DWORD *)(v23 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v23 + 8));
    v23 = 0LL;
  }
  if ( v13 >= 0 )
  {
    if ( !v9 )
      goto LABEL_35;
    v13 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
            v18,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  }
  if ( v9 )
  {
    v19 = v8;
    v20 = v9;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v19, v10, v12);
      v19 += 16;
      --v20;
    }
    while ( v20 );
  }
LABEL_35:
  operator delete[](v8);
  return (unsigned int)v13;
}
