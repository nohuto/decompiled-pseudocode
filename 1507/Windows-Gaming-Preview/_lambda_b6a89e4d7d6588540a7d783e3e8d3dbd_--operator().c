/*
 * XREFs of _lambda_b6a89e4d7d6588540a7d783e3e8d3dbd_::operator() @ 0x180003B78
 * Callers:
 *     ??$EnumerateAllAppsListTiles@V_lambda_1bb9c5925967af19482f691dd21001c0_@@@OneCoreDataHelpers@@YAJPEAUIVisualElementEnumerator@@V_lambda_1bb9c5925967af19482f691dd21001c0_@@@Z @ 0x180003884 (--$EnumerateAllAppsListTiles@V_lambda_1bb9c5925967af19482f691dd21001c0_@@@OneCoreDataHelpers@@YA.c)
 * Callees:
 *     _lambda_1bb9c5925967af19482f691dd21001c0_::operator() @ 0x180001F80 (_lambda_1bb9c5925967af19482f691dd21001c0_--operator().c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_b6a89e4d7d6588540a7d783e3e8d3dbd_::operator()(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // eax
  int v4; // edi
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r15
  Windows::Gaming::Preview::GamesEnumeration *v9; // rsi
  int v10; // eax
  Windows::Gaming::Preview::GamesEnumeration *v11; // rsi
  Windows::Gaming::Preview::GamesEnumeration *v12; // rdi
  __int64 v13; // rdi
  int v15; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  Windows::Gaming::Preview::GamesEnumeration *i; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+58h] [rbp+28h] BYREF

  v15 = -2;
  v2 = *a1;
  v18 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 38LL;
    goto LABEL_3;
  }
  v8 = v18;
  v9 = 0LL;
  for ( i = 0LL; ; v9 = i )
  {
    if ( v9 )
    {
      i = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, Windows::Gaming::Preview::GamesEnumeration **))(*(_QWORD *)v8 + 24LL))(
           v8,
           &i) )
    {
LABEL_17:
      v12 = i;
      if ( i )
      {
        i = 0LL;
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v4 = 0;
      goto LABEL_20;
    }
    v10 = lambda_1bb9c5925967af19482f691dd21001c0_::operator()(v2, i);
    v4 = v10;
    if ( v10 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        (void *)0x7A,
        (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
        (const char *)(unsigned int)v10,
        v15);
    if ( v4 < 0 )
      break;
    if ( v4 == 1 )
      goto LABEL_17;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    (void *)0x18,
    (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
    (const char *)(unsigned int)v4,
    v15);
  v11 = i;
  if ( i )
  {
    i = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_20:
  if ( v4 < 0 )
  {
    v5 = (unsigned int)v4;
    v6 = 39LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v6,
      (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
      (const char *)v5,
      v15);
    v7 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_25;
  }
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v4 = 0;
LABEL_25:
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    (void *)0x7A,
    (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
    (const char *)(unsigned int)v4,
    v15);
  return (unsigned int)v4;
}
