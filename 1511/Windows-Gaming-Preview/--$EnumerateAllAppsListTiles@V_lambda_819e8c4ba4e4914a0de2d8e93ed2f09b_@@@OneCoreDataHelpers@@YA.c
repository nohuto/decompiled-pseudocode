/*
 * XREFs of ??$EnumerateAllAppsListTiles@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@OneCoreDataHelpers@@YAJPEAUIVisualElementEnumerator@@V_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_@@@Z @ 0x180003914
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUHSTRING__@@@Z @ 0x180001EE0 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITile.c)
 * Callees:
 *     _lambda_79660df6df334bcfb57514bd2971d535_::operator() @ 0x180003D00 (_lambda_79660df6df334bcfb57514bd2971d535_--operator().c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall OneCoreDataHelpers::EnumerateAllAppsListTiles<_lambda_819e8c4ba4e4914a0de2d8e93ed2f09b_>(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  int v3; // edi
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 i; // [rsp+70h] [rbp+28h] BYREF
  __int64 v20; // [rsp+78h] [rbp+30h] BYREF
  __int64 v21; // [rsp+80h] [rbp+38h] BYREF
  __int64 v22; // [rsp+88h] [rbp+40h] BYREF

  v20 = a2;
  v17[2] = -2LL;
  v22 = 0LL;
  v17[0] = 0x42A1E36DF44B2A5BLL;
  v17[1] = 0xCC1D45FD7315499FuLL;
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, v17, &v22);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 112LL;
LABEL_28:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v5,
      (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
      (const char *)v4,
      v17[0]);
    goto LABEL_30;
  }
  v17[0] = &v20;
  v6 = lambda_79660df6df334bcfb57514bd2971d535_::operator()(v17, v22);
  v3 = v6;
  if ( v6 < 0 )
  {
    v4 = (unsigned int)v6;
    v5 = 126LL;
    goto LABEL_28;
  }
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 80LL))(v22, &v21);
  v3 = v7;
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    for ( i = 0LL; ; v9 = i )
    {
      v10 = v21;
      if ( v9 )
      {
        i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &i) )
      {
LABEL_21:
        v13 = i;
        if ( i )
        {
          i = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v14 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v3 = 0;
        goto LABEL_26;
      }
      v11 = lambda_79660df6df334bcfb57514bd2971d535_::operator()(v17, i);
      v3 = v11;
      if ( v11 >= 0 )
        v3 = 0;
      else
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          (void *)0x85,
          (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
          (const char *)(unsigned int)v11,
          v17[0]);
      if ( v3 < 0 )
        break;
      if ( v3 == 1 )
        goto LABEL_21;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x42,
      (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
      (const char *)(unsigned int)v3,
      v17[0]);
    v12 = i;
    if ( i )
    {
      i = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x3D,
      (unsigned int)"internal\\Shell\\inc\\onecoredatahelpers.h",
      (const char *)(unsigned int)v7,
      v17[0]);
  }
  v8 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_26:
  if ( v3 < 0 )
  {
    v4 = (unsigned int)v3;
    v5 = 133LL;
    goto LABEL_28;
  }
  v3 = 0;
LABEL_30:
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v3;
}
