/*
 * XREFs of ?EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z @ 0x180021698
 * Callers:
 *     _lambda_96d0bed5b180209255fc5fd7d24cbe07_::operator() @ 0x180022238 (_lambda_96d0bed5b180209255fc5fd7d24cbe07_--operator().c)
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N@Z @ 0x180022E4C (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     _lambda_9e7d2ca8e92d49cfddf0abd925277e19_::operator() @ 0x180023130 (_lambda_9e7d2ca8e92d49cfddf0abd925277e19_--operator().c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180025EF0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall EnsureTDLObjects(
        struct ITileManager *a1,
        struct IVisualElementEnumerator *a2,
        struct ITileManager **a3,
        struct IVisualElementEnumerator **a4)
{
  __int64 v7; // rbx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  int v10; // r15d
  bool v11; // zf
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  struct ITileManager *v15; // rsi
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct IVisualElementEnumerator *v21; // [rsp+80h] [rbp+50h] BYREF
  struct ITileManager *v22; // [rsp+88h] [rbp+58h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v11 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v8[3] = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITileDataLayerProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( !v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v7 = v18;
    }
    *(_QWORD *)v8 = &OneCoreDataHelpers::TileDataLayerProvider::`vftable';
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    v8[12] = 0;
    v10 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v8)(
            v8,
            &GUID_41a57ca9_2979_4ecd_8219_daa846c55fbb,
            &v17);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v10 >= 0 )
    {
      v7 = v17;
      v10 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    322LL,
    (__int64)"shell\\lib\\onecoretdlhelpers\\onecoredatahelpers.cpp",
    (const char *)(unsigned int)v10);
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_13:
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      79LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_37;
  }
  v22 = a1;
  if ( a1 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a1 + 8LL))(a1);
  if ( !a3
    || v22
    || (v13 = (*(__int64 (__fastcall **)(__int64, struct ITileManager **))(*(_QWORD *)v7 + 32LL))(v7, &v22),
        v10 = v13,
        v13 >= 0) )
  {
    v21 = a2;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a2 + 8LL))(a2);
      a2 = v21;
    }
    if ( a4 && !a2 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, struct IVisualElementEnumerator **))(*(_QWORD *)v7 + 24LL))(v7, &v21);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          90LL,
          (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v14);
        a2 = v21;
LABEL_33:
        if ( a2 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a2 + 16LL))(a2);
        }
        goto LABEL_35;
      }
      a2 = v21;
    }
    if ( a3 )
    {
      *a3 = v22;
      v22 = 0LL;
    }
    if ( a4 )
    {
      v21 = 0LL;
      *a4 = a2;
      a2 = 0LL;
    }
    v10 = 0;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    84LL,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v13);
LABEL_35:
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_37:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v10;
}
