/*
 * XREFs of ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040BE8
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180040AF0 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004E98C (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::RuntimeClassInitialize(
        MPCMouseProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  __int128 v3; // xmm1
  int v4; // eax
  unsigned int v5; // edi
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  int ChildInputProcessor; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  const char *v22; // r9
  __int64 v23; // rax
  int v24; // eax
  __int128 v25; // [rsp+20h] [rbp-38h] BYREF
  __int128 v26; // [rsp+30h] [rbp-28h]
  __int64 v27; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *((_OWORD *)a2 + 1);
  v25 = *(_OWORD *)a2;
  v27 = *((_QWORD *)a2 + 4);
  v26 = v3;
  if ( this )
    *(_QWORD *)&v26 = (char *)this + 32;
  else
    *(_QWORD *)&v26 = 0LL;
  v4 = MPCInputProviderBase::RuntimeClassInitialize((MPCMouseProcessor *)((char *)this + 32), a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (_QWORD *)((char *)this + 216);
    v8 = *((_QWORD *)this + 27);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    ChildInputProcessor = CreateChildInputProcessor(2, (__int64)&v25, (__int64)this + 216);
    if ( ChildInputProcessor < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)ChildInputProcessor);
      __debugbreak();
    }
    v10 = *((_QWORD *)this + 28);
    if ( v10 )
    {
      *((_QWORD *)this + 28) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8,
            (char *)this + 224);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = *((_QWORD *)this + 29);
    if ( v12 )
    {
      *((_QWORD *)this + 29) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8,
            (char *)this + 232);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = *((_QWORD *)this + 30);
    if ( v14 )
    {
      *((_QWORD *)this + 30) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_10ab2921_3041_4a95_a1fd_33dc19a24aab,
            (char *)this + 240);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v16 = *((_QWORD *)this + 31);
    if ( v16 )
    {
      *((_QWORD *)this + 31) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
            *v7,
            &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b,
            (char *)this + 248);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (_QWORD *)((char *)this + 72);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7));
    v20 = *((_QWORD *)this + 9);
    if ( v20 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v19 + 80LL))(
            v19,
            *((_QWORD *)this + 8),
            (char *)this + 72);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    if ( !*v18 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        v22);
      __debugbreak();
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7));
    v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 72LL))(v23, (char *)this + 208);
    if ( v24 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v24);
      JUMPOUT(0x180040F02LL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x59,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
