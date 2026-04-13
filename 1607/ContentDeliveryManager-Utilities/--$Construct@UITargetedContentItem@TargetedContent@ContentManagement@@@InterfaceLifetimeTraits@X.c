/*
 * XREFs of ??$Construct@UITargetedContentItem@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentItem@TargetedContent@ContentManagement@@@detail@1@PEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004FFBC
 * Callers:
 *     ?SetAt@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004C8C0 (-SetAt@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEqualityPre.c)
 *     ?ReplaceAll@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@@Z @ 0x18004CDC0 (-ReplaceAll@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$DefaultEquali.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentItem@TargetedContent@ContentManagement@@_N@Z @ 0x18004F34C (-InsertAtInternal@-$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U-$Default.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180003D68 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::TargetedContent::ITargetedContentItem>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  _DWORD *v8; // rdi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  if ( a1 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  if ( a2 )
  {
    v12 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v12) < 0 )
    {
      v6 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v6;
      if ( v6 )
      {
        *v6 = 1;
        v6[1] = 0;
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v9 = Windows::Internal::Details::Git::Acquire(v7);
        if ( v9 >= 0 )
          v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18008C0B0 + 24LL))(
                 qword_18008C0B0,
                 a2,
                 &GUID_3a48f6a2_4e17_4a86_aca9_a93a958ecafb,
                 v8 + 1);
        if ( v9 < 0 )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          {
            if ( v8[1] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18008C0B0 + 32LL))(qword_18008C0B0);
            operator delete(v8);
          }
        }
        else
        {
          *(_QWORD *)a1 = v8;
          *(_BYTE *)(a1 + 8) = 1;
        }
      }
      else
      {
        v9 = -2147024882;
      }
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return (unsigned int)v9;
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  return v4;
}
