/*
 * XREFs of ?TryToConnectToNavServer@ViewHeirarchy@@AEAA_NXZ @ 0x18006E148
 * Callers:
 *     ?RuntimeClassInitialize@ViewHeirarchy@@UEAAJW4TestMode@1@@Z @ 0x18006D180 (-RuntimeClassInitialize@ViewHeirarchy@@UEAAJW4TestMode@1@@Z.c)
 *     _lambda_d7db04a261bf9ba52717c560d502d7ff_::_lambda_invoker_cdecl_ @ 0x18006D340 (_lambda_d7db04a261bf9ba52717c560d502d7ff_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ViewHeirarchy::TryToConnectToNavServer(ViewHeirarchy *this)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  bool v15; // di
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**((_QWORD **)this + 5) + 24LL))(
         *((_QWORD *)this + 5),
         &GUID_b2ef2dce_3e3b_4944_9447_e7f2772f3ad3,
         &v18);
  v3 = 0LL;
  v19 = 0LL;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           L"System\\NavigationServer_MonitorViewManager",
           v18,
           &v19);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, ViewHeirarchy *))(*(_QWORD *)v19 + 56LL))(v19, this);
      if ( v2 >= 0 )
      {
        v20 = 0LL;
        v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
               v19,
               &GUID_b2ef2dce_3e3b_4944_9447_e7f2772f3ad3,
               &v20);
        if ( v4 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x14D,
            (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
            (const char *)(unsigned int)v4);
          __debugbreak();
        }
        v5 = v19;
        if ( *((_QWORD *)this + 7) != v19 )
        {
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v6 = *((_QWORD *)this + 7);
          *((_QWORD *)this + 7) = v5;
          if ( v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        v7 = v20;
        if ( *((_QWORD *)this + 8) != v20 )
        {
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          v8 = *((_QWORD *)this + 8);
          *((_QWORD *)this + 8) = v7;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        v9 = *((_QWORD *)this + 8);
        v10 = (_QWORD *)((char *)this + 72);
        v11 = *((_QWORD *)this + 9);
        if ( v11 )
        {
          *v10 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 40LL))(v9, (char *)this + 72);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x152,
            (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
        if ( *v10 )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 64LL))(*v10, (char *)this + 8);
          if ( v13 < 0 )
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x156,
              (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
              (const char *)(unsigned int)v13);
        }
        v14 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    v3 = v19;
  }
  v15 = v2 >= 0;
  if ( v3 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v15;
}
