/*
 * XREFs of ?IndexOf@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x18004E890
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800070E8 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x1800191FC (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x18005023C (-IndexOfInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@W.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F838 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  char *v8; // rsi
  unsigned int v9; // r14d
  int v10; // ecx
  int v11; // ebx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  char *v14; // rax
  unsigned int v15; // ebp
  char *v16; // rdx
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int128 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+50h] [rbp-38h] BYREF
  char *v23; // [rsp+90h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)&v22, (RTL_SRWLOCK *)(a1 + 96), &v23);
  v11 = (int)v23;
  if ( (int)v23 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v12 = *(unsigned int *)(a1 + 64);
      v13 = 16 * v12;
      if ( !is_mul_ok(v12, 0x10uLL) )
        v13 = -1LL;
      v14 = (char *)operator new[](v13, (const struct std::nothrow_t *)&TLV::nothrow);
      v8 = v14;
      v23 = v14;
      if ( v14 )
      {
        for ( ; v12; --v12 )
        {
          *(_QWORD *)v14 = 0LL;
          v14[8] = 0;
          v14 += 16;
        }
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v15 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          LODWORD(v23) = 0;
          do
          {
            v21 = *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16LL * v15);
            v16 = &v8[16 * v15];
            if ( v16 )
            {
              *(_QWORD *)v16 = 0LL;
              v16[8] = 0;
            }
            v16[8] = BYTE8(v21);
            if ( BYTE8(v21) )
            {
              *(_QWORD *)v16 = v21;
              _InterlockedIncrement((volatile signed __int32 *)v21);
            }
            else
            {
              *(_QWORD *)v16 = v21;
              if ( (_QWORD)v21 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(v21);
            }
            ++v9;
            ++v15;
          }
          while ( v15 < *(_DWORD *)(a1 + 64) );
          v11 = (int)v23;
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::IndexOfInternal(
              v10,
              *(_QWORD *)(a1 + 80),
              *(_DWORD *)(a1 + 64),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  v17 = v22;
  if ( v22 )
  {
    if ( *(_DWORD *)v22 == 1 )
      --*(_DWORD *)(v22 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v22 + 8));
    v22 = 0LL;
  }
  if ( v11 >= 0 )
  {
    if ( !v9 )
      goto LABEL_34;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::IndexOfInternal(
            v17,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  }
  if ( v9 )
  {
    v18 = (__int64)v8;
    v19 = v9;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v18);
      v18 += 16LL;
      --v19;
    }
    while ( v19 );
  }
LABEL_34:
  operator delete[](v8);
  return (unsigned int)v11;
}
