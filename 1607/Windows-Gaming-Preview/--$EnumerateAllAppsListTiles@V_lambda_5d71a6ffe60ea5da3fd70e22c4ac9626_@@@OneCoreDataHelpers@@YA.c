/*
 * XREFs of ??$EnumerateAllAppsListTiles@V_lambda_5d71a6ffe60ea5da3fd70e22c4ac9626_@@@OneCoreDataHelpers@@YAJPEAUIVisualElementEnumerator@@AEBV_lambda_5d71a6ffe60ea5da3fd70e22c4ac9626_@@@Z @ 0x180007084
 * Callers:
 *     _lambda_e7d66ec3c204a83377ccb333ff70ed66_::operator() @ 0x18000B4F8 (_lambda_e7d66ec3c204a83377ccb333ff70ed66_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_8579e998d345a7505c191199ef97e42d_::operator() @ 0x1800072A4 (_lambda_8579e998d345a7505c191199ef97e42d_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall OneCoreDataHelpers::EnumerateAllAppsListTiles<_lambda_5d71a6ffe60ea5da3fd70e22c4ac9626_>(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v18[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 i; // [rsp+60h] [rbp+20h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  v18[2] = -2LL;
  v22 = 0LL;
  v18[0] = 0x42A1E36DF44B2A5BLL;
  v18[1] = 0xCC1D45FD7315499FuLL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, v18, &v22);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 101LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
      (const char *)v5);
    goto LABEL_30;
  }
  v18[0] = a2;
  v7 = lambda_8579e998d345a7505c191199ef97e42d_::operator()(v18, v22);
  v4 = v7;
  if ( v7 < 0 )
  {
    v5 = (unsigned int)v7;
    v6 = 115LL;
    goto LABEL_28;
  }
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 80LL))(v22, &v21);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v10 = 0LL;
    for ( i = 0LL; ; v10 = i )
    {
      v11 = v21;
      if ( v10 )
      {
        i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &i) )
      {
LABEL_21:
        v14 = i;
        if ( i )
        {
          i = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v4 = 0;
        goto LABEL_26;
      }
      v12 = lambda_8579e998d345a7505c191199ef97e42d_::operator()(v18, i);
      v4 = v12;
      if ( v12 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7A,
          (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
          (const char *)(unsigned int)v12);
      if ( v4 < 0 )
        break;
      if ( v4 == 1 )
        goto LABEL_21;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
      (const char *)(unsigned int)v4);
    v13 = i;
    if ( i )
    {
      i = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"internal\\onecoreuapshell\\inc\\onecoredatahelpers.h",
      (const char *)(unsigned int)v8);
  }
  v9 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_26:
  if ( v4 < 0 )
  {
    v5 = (unsigned int)v4;
    v6 = 122LL;
    goto LABEL_28;
  }
  v4 = 0;
LABEL_30:
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v4;
}
