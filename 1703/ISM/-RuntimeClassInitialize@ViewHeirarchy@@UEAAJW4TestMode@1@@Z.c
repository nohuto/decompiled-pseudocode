/*
 * XREFs of ?RuntimeClassInitialize@ViewHeirarchy@@UEAAJW4TestMode@1@@Z @ 0x18006D180
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryToConnectToNavServer@ViewHeirarchy@@AEAA_NXZ @ 0x18006E148 (-TryToConnectToNavServer@ViewHeirarchy@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHeirarchy::RuntimeClassInitialize(__int64 *a1, int a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != 1 )
  {
    v3 = a1 + 4;
    v4 = a1[4];
    if ( v4 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = CoreUICreate(v3);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = a1[5];
    if ( v6 )
    {
      a1[5] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = CoreUIFactoryCreate(a1 + 5);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    if ( !ViewHeirarchy::TryToConnectToNavServer((ViewHeirarchy *)a1) )
    {
      v8 = *v3;
      v16 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64 *, __int64 *))(*(_QWORD *)v8 + 120LL))(
             v8,
             lambda_d7db04a261bf9ba52717c560d502d7ff_::_lambda_invoker_cdecl_,
             a1,
             &v16);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x48,
          (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 80LL))(v16, 10000000LL, 10000000LL);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x4C,
          (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
          (const char *)(unsigned int)v10);
        JUMPOUT(0x18006D331LL);
      }
      v11 = v16;
      if ( a1[6] != v16 )
      {
        v12 = v16;
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v11 = v16;
        }
        v13 = a1[6];
        a1[6] = v12;
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v11 = v16;
        }
      }
      if ( v11 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  return 0LL;
}
