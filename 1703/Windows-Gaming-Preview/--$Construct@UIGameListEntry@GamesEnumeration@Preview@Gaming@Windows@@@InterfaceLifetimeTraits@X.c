/*
 * XREFs of ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x180008A48
 * Callers:
 *     ?SetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x1800063E0 (-SetAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityPre.c)
 *     ?ReplaceAll@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x1800069F0 (-ReplaceAll@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquali.c)
 *     ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x180007BC8 (-InsertAtInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$Default.c)
 * Callees:
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180009E3C (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180029508 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(
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
          v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18003BC20 + 24LL))(
                 qword_18003BC20,
                 a2,
                 &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                 v8 + 1);
        if ( v9 < 0 )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          {
            if ( v8[1] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18003BC20 + 32LL))(qword_18003BC20);
            operator delete(v8, 8uLL);
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
