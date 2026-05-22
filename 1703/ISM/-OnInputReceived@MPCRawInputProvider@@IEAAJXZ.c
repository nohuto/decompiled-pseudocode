/*
 * XREFs of ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x180054098
 * Callers:
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x180054030 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=119
__int64 __fastcall MPCRawInputProvider::OnInputReceived(MPCRawInputProvider *this)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  char **v4; // rax
  char *v5; // rdi
  char *v6; // r14
  char *i; // rbx
  char *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v13[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-D0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]
  _BYTE v17[1888]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7E0h] [rbp+6D8h]

  v16 = -2LL;
  *(_OWORD *)v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  if ( *((_BYTE *)this + 113) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    v15 = v3;
    v4 = (char **)((char *)this + 120);
    if ( v13 == (int *)((char *)this + 120) )
    {
      v6 = *(char **)&v13[2];
      v5 = *(char **)v13;
    }
    else
    {
      v5 = *v4;
      *(_QWORD *)v13 = *v4;
      *v4 = 0LL;
      v6 = (char *)*((_QWORD *)this + 16);
      *(_QWORD *)&v13[2] = v6;
      *((_QWORD *)this + 16) = 0LL;
      v2 = *((_QWORD *)this + 17);
      v14 = v2;
      *((_QWORD *)this + 17) = 0LL;
    }
    if ( v3 )
    {
      LeaveCriticalSection(v3);
      v15 = 0LL;
    }
    for ( i = v5; i != v6; i += 1888 )
    {
      v8 = i;
      v9 = v17;
      v10 = 14LL;
      do
      {
        *v9 = *(_OWORD *)v8;
        v9[1] = *((_OWORD *)v8 + 1);
        v9[2] = *((_OWORD *)v8 + 2);
        v9[3] = *((_OWORD *)v8 + 3);
        v9[4] = *((_OWORD *)v8 + 4);
        v9[5] = *((_OWORD *)v8 + 5);
        v9[6] = *((_OWORD *)v8 + 6);
        v9 += 8;
        *(v9 - 1) = *((_OWORD *)v8 + 7);
        v8 += 128;
        --v10;
      }
      while ( v10 );
      *v9 = *(_OWORD *)v8;
      v9[1] = *((_OWORD *)v8 + 1);
      v9[2] = *((_OWORD *)v8 + 2);
      v9[3] = *((_OWORD *)v8 + 3);
      v9[4] = *((_OWORD *)v8 + 4);
      v9[5] = *((_OWORD *)v8 + 5);
      v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v17);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x90,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
    }
  }
  else
  {
    v5 = *(char **)v13;
  }
  if ( v5 )
  {
    std::_Deallocate(v5, (v2 - (__int64)v5) / 1888, 0x760uLL);
    *(_OWORD *)v13 = 0uLL;
    v14 = 0LL;
  }
  return 0LL;
}
