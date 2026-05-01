/*
 * XREFs of _lambda_63cb72c57790635ad1abe013bf6503f8_::operator() @ 0x1800224DC
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_63cb72c57790635ad1abe013bf6503f8_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180024790 (-Run@-$CTaskWrapper@V_lambda_63cb72c57790635ad1abe013bf6503f8_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007AAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z @ 0x180021A78 (-EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z.c)
 *     ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180021D38 (-CommitTDLItemWithRetry@@YAJV-$function@$$A6AJXZ@wistd@@0@Z.c)
 */

__int64 __fastcall lambda_63cb72c57790635ad1abe013bf6503f8_::operator()(__int64 a1)
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
  __int128 v15; // [rsp+58h] [rbp-A8h]
  void **v16; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h]
  __int128 v18; // [rsp+80h] [rbp-80h]
  void ***v19; // [rsp+C8h] [rbp-38h]
  void **v20; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v21; // [rsp+D8h] [rbp-28h]
  void ***v22; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]
  struct IVisualElementEnumerator *v24; // [rsp+160h] [rbp+60h] BYREF
  struct ITileManager *v25; // [rsp+168h] [rbp+68h] BYREF
  __int64 v26; // [rsp+170h] [rbp+70h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  pv[0] = *(LPVOID *)(a1 + 24);
  pv[2] = (LPVOID)-1LL;
  pv[1] = (LPVOID)-1LL;
  v26 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(struct IVisualElementEnumerator **)(a1 + 16);
  v4 = *(struct ITileManager **)(a1 + 8);
  v25 = 0LL;
  v24 = 0LL;
  v5 = EnsureTDLObjects(v4, v3, &v25, &v24);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)&v13 + 1) = a1;
    *(_QWORD *)&v13 = &v26;
    *(_QWORD *)&v14 = pv;
    *((_QWORD *)&v14 + 1) = &v25;
    *(_QWORD *)&v15 = &v26;
    *((_QWORD *)&v15 + 1) = &v24;
    v20 = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_42b695e163ae90e4d82cbc83857176be_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v22 = &v20;
    v21 = v15;
    v16 = &wistd::_Func_impl<wistd::_Callable_obj<_lambda_7de8aa66cbcd57b5275686df45c342f0_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v19 = &v16;
    v18 = v14;
    v17 = v13;
    v7 = CommitTDLItemWithRetry((wistd *)&v16, (__int64)&v20);
    v6 = v7;
    if ( v7 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      431LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v5);
  }
  v8 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v6;
}
