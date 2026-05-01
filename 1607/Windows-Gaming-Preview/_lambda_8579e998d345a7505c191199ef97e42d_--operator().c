/*
 * XREFs of _lambda_8579e998d345a7505c191199ef97e42d_::operator() @ 0x1800072A4
 * Callers:
 *     ??$EnumerateAllAppsListTiles@V_lambda_5d71a6ffe60ea5da3fd70e22c4ac9626_@@@OneCoreDataHelpers@@YAJPEAUIVisualElementEnumerator@@AEBV_lambda_5d71a6ffe60ea5da3fd70e22c4ac9626_@@@Z @ 0x180007084 (--$EnumerateAllAppsListTiles@V_lambda_5d71a6ffe60ea5da3fd70e22c4ac9626_@@@OneCoreDataHelpers@@YA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x1800058A4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_8579e998d345a7505c191199ef97e42d_::operator()(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation ***a1,
        __int64 a2)
{
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation **v2; // rbx
  int v3; // eax
  int v4; // edi
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  struct ITileInfo *v9; // rcx
  int v10; // eax
  struct ITileInfo *v11; // rcx
  struct ITileInfo *v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct ITileInfo *i; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF

  v2 = *a1;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, &v17);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 40LL;
    goto LABEL_3;
  }
  v8 = v17;
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
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v10);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
        (const char *)(unsigned int)v4);
    }
    if ( v4 < 0 )
      break;
    if ( v4 == 1 )
      goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A,
    (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
    (const char *)(unsigned int)v4);
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
    v6 = 41LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
      (const char *)v5);
    v7 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_25;
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v4 = 0;
LABEL_25:
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F,
    (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
