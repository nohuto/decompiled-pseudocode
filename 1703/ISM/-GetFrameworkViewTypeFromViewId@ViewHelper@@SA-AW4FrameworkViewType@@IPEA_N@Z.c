/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@IPEA_N@Z @ 0x18002BBF8
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180085428 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@ViewHeirarchy@@SA?AV?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ @ 0x18006D108 (-Create@ViewHeirarchy@@SA-AV-$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ViewHelper::GetFrameworkViewTypeFromViewId(unsigned int a1, _BYTE *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-18h] BYREF
  const wchar_t *v29; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v31; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+38h] BYREF

  v27[1] = -2LL;
  v4 = 5;
  v31 = 0;
  v5 = (_QWORD *)ViewHeirarchy::Create(v27);
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, &v26, a1);
  v6 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v26;
  if ( v26 )
  {
    v8 = L"FrameworkViewType";
    v29 = L"FrameworkViewType";
    v9 = 0;
    do
    {
      ++v8;
      ++v9;
    }
    while ( *v8 );
    v28 = v9 | 0x80000000;
    v22 = 0LL;
    v25 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v26 + 136LL))(
            v26,
            &v25);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xC7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = (**v25)(v25, &GUID_3ec52a26_f33c_4241_8dc1_da292661fe9a, &v22);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v22 + 72LL))(
            v22,
            (unsigned __int64)&v28 & ((unsigned __int128)-(__int128)(unsigned __int64)v29 >> 64),
            &v31);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    if ( v31 )
    {
      v24 = 0LL;
      v23 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 48LL))(
              v22,
              (unsigned __int64)&v28 & ((unsigned __int128)-(__int128)(unsigned __int64)v29 >> 64),
              &v24);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = (**v24)(v24, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v23);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v32);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v4 = v32;
      v17 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18);
      }
    }
    else
    {
      v4 = 0;
    }
    v19 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
    }
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v7 = v26;
  }
  if ( a2 )
    *a2 = v31;
  if ( v7 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
