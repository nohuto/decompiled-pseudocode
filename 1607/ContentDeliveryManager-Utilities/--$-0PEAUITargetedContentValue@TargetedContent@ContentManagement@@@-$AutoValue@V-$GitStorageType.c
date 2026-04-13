/*
 * XREFs of ??$?0PEAUITargetedContentValue@TargetedContent@ContentManagement@@@?$AutoValue@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITargetedContentValue@TargetedContent@ContentManagement@@PEAJ@Z @ 0x180050248
 * Callers:
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUITargetedContentValue@TargetedContent@ContentManagement@@PEAE@Z @ 0x18004D590 (-Insert@-$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U-$.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180003D68 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>>::AutoValue<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  __int64 v5; // r14
  int v6; // esi
  __int64 v7; // rcx
  _DWORD *v8; // rax
  Windows::Internal::Details::Git *v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *a2;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( !v5 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_21;
  }
  v13 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(v5, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v13) >= 0 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_2;
  }
  v8 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( v8 )
  {
    *v8 = 1;
    v8[1] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v6 = Windows::Internal::Details::Git::Acquire(v9);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18008C0B0 + 24LL))(
             qword_18008C0B0,
             v5,
             &GUID_175437d0_ab0a_4cfd_aa42_d32e2ae5d0dc,
             v10 + 1);
    if ( v6 < 0 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        if ( v10[1] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18008C0B0 + 32LL))(qword_18008C0B0);
        operator delete(v10);
      }
    }
    else
    {
      *(_QWORD *)a1 = v10;
      *(_BYTE *)(a1 + 8) = 1;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_21:
  *a3 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
