/*
 * XREFs of _lambda_79660df6df334bcfb57514bd2971d535_::operator() @ 0x180003D00
 * Callers:
 *     ??$EnumerateAllAppsListTiles@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@OneCoreDataHelpers@@YAJPEAUIVisualElementEnumerator@@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@Z @ 0x180003914 (--$EnumerateAllAppsListTiles@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@OneCoreDataHelpers@@YA.c)
 * Callees:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x1800020E4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_79660df6df334bcfb57514bd2971d535_::operator()(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation ***a1,
        __int64 a2)
{
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation **v2; // rbx
  int v3; // eax
  int v4; // edi
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r15
  struct ITileInfo *v9; // rsi
  int v10; // eax
  struct ITileInfo *v11; // rsi
  struct ITileInfo *v12; // rdi
  __int64 v13; // rdi
  int v15; // [rsp+20h] [rbp-10h]
  int v16; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct ITileInfo *i; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h] BYREF

  v15 = -2;
  v2 = *a1;
  v19 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 38LL;
    goto LABEL_3;
  }
  v8 = v19;
  v9 = 0LL;
  for ( i = 0LL; ; v9 = i )
  {
    if ( v9 )
    {
      i = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( (*(unsigned int (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)v8 + 24LL))(v8, &i) )
    {
LABEL_17:
      v12 = i;
      if ( i )
      {
        i = 0LL;
        (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v4 = 0;
      goto LABEL_20;
    }
    v10 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(*v2, i);
    v4 = v10;
    if ( v10 >= 0 )
    {
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        (void *)0x4B,
        (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v10,
        v15);
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        (void *)0x7A,
        (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
        (const char *)(unsigned int)v4,
        v16);
    }
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
    (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v11 + 16LL))(v11);
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
    v7 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_25;
  }
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
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
