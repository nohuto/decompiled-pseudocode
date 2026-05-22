/*
 * XREFs of ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180052398
 * Callers:
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x180051DF4 (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(
        MPCSpatialGestureRecognizerHandler *this,
        __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  HRESULT v6; // eax
  int ActivationFactory; // eax
  int v8; // eax
  const char *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v27[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v27[1] = -2LL;
  v4 = 0LL;
  v24 = 0LL;
  v5 = (_QWORD *)((char *)this + 48);
  if ( !*((_QWORD *)this + 6) )
  {
    v26 = 0LL;
    v25 = 0LL;
    string = 0LL;
    v6 = WindowsCreateStringReference(L"Windows.Perception.Spatial.SpatialLocator", 0x29u, &hstringHeader, &string);
    if ( v6 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
      __debugbreak();
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_b76e3340_a7c2_361b_bb82_56e93b89b1bb, &v26);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x236,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)ActivationFactory);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v25);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x237,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v10 = v25;
    if ( !v25 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x238,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        v9);
      __debugbreak();
    }
    v11 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 96LL))(v10, (char *)this + 48);
    if ( v12 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x239,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v12);
    v13 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v4 = v24;
  }
  v15 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 56LL))(v15, a2, &v24);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v27[0] = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*v5 + 88LL))(*v5, v24, v27);
    v17 = v18;
    if ( v18 >= 0 )
    {
      v19 = v27[0];
      if ( *((_QWORD *)this + 8) != v27[0] )
      {
        v20 = v27[0];
        if ( v27[0] )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 8LL))(v27[0]);
          v19 = v27[0];
        }
        v21 = *((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = v20;
        if ( v21 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v19 = v27[0];
        }
      }
      v17 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x243,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v18);
      v19 = v27[0];
    }
    if ( v19 )
    {
      v27[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x23C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v16);
  }
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v17;
}
