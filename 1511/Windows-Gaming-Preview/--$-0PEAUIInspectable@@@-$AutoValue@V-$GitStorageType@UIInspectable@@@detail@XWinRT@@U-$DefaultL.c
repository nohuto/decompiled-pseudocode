/*
 * XREFs of ??$?0PEAUIInspectable@@@?$AutoValue@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIInspectable@@PEAJ@Z @ 0x180016550
 * Callers:
 *     ?Insert@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAE@Z @ 0x1800143F0 (-Insert@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Internal@Colle.c)
 * Callees:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180005ED8 (-Release@ReferencedGitCookie@-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x1800071D8 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180025EF0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  __int64 v5; // rbp
  int v6; // edi
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rax
  Windows::Internal::Details::Git *v9; // rcx
  volatile signed __int32 *v10; // r15
  __int64 v11; // rsi
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+68h] [rbp+10h]

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = *a2;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( !v5 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_18;
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
  v8 = (volatile signed __int32 *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  v14 = v8;
  if ( v8 )
  {
    *v8 = 1;
    *((_DWORD *)v8 + 1) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v6 = Windows::Internal::Details::Git::Acquire(v9);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 *, __int64))(*(_QWORD *)qword_180037AA8 + 24LL))(
             qword_180037AA8,
             v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             v10 + 1,
             -2LL);
    if ( v6 < 0 )
    {
      XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::ReferencedGitCookie::Release(v10);
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
LABEL_18:
  *a3 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
