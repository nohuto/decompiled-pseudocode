/*
 * XREFs of _lambda_96d0bed5b180209255fc5fd7d24cbe07_::operator() @ 0x180022238
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_96d0bed5b180209255fc5fd7d24cbe07_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180024690 (-Run@-$CTaskWrapper@V_lambda_96d0bed5b180209255fc5fd7d24cbe07_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800079B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z @ 0x180021698 (-EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z.c)
 *     ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180021958 (-CommitTDLItemWithRetry@@YAJV-$function@$$A6AJXZ@wistd@@0@Z.c)
 */

__int64 __fastcall lambda_96d0bed5b180209255fc5fd7d24cbe07_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  struct IVisualElementEnumerator *v3; // rdx
  struct ITileManager *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  struct IVisualElementEnumerator *v8; // rsi
  struct ITileManager *v9; // rsi
  __int64 v10; // rsi
  LPVOID pv[3]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-C8h]
  __int128 v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int128 v16; // [rsp+60h] [rbp-A0h]
  void **v17; // [rsp+70h] [rbp-90h] BYREF
  __int128 v18; // [rsp+78h] [rbp-88h]
  __int128 v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  void ***v21; // [rsp+D0h] [rbp-30h]
  void **v22; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v23; // [rsp+E0h] [rbp-20h]
  void ***v24; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]
  struct IVisualElementEnumerator *v26; // [rsp+160h] [rbp+60h] BYREF
  struct ITileManager *v27; // [rsp+168h] [rbp+68h] BYREF
  __int64 v28; // [rsp+170h] [rbp+70h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  pv[0] = *(LPVOID *)(a1 + 24);
  pv[2] = (LPVOID)-1LL;
  pv[1] = (LPVOID)-1LL;
  v28 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(struct IVisualElementEnumerator **)(a1 + 16);
  v4 = *(struct ITileManager **)(a1 + 8);
  v27 = 0LL;
  v26 = 0LL;
  v5 = EnsureTDLObjects(v4, v3, &v27, &v26);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)&v13 + 1) = a1;
    *(_QWORD *)&v13 = &v28;
    *(_QWORD *)&v14 = pv;
    *((_QWORD *)&v14 + 1) = &v27;
    v15 = a1 + 40;
    *(_QWORD *)&v16 = &v28;
    *((_QWORD *)&v16 + 1) = &v26;
    v22 = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_64658f70707a7624ec4dd3ef840ba60c_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v24 = &v22;
    v23 = v16;
    v17 = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_364a226fd5edd35307100c7bdfcc0642_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v21 = &v17;
    v19 = v14;
    v18 = v13;
    v20 = a1 + 40;
    v7 = CommitTDLItemWithRetry((wistd *)&v17, (__int64)&v22);
    v6 = v7;
    if ( v7 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23B,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      539LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v5);
  }
  v8 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v6;
}
