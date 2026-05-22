/*
 * XREFs of ?FindView@ViewHeirarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@V?$function@$$A6A_NPEAUIMonitorView@Server@Navigation@@@Z@std@@@Z @ 0x18006E010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ViewHeirarchy::FindView(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // r14
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, _QWORD *); // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  _QWORD *i; // rdi
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-48h] BYREF

  v14[1] = -2LL;
  v4 = a2;
  v14[2] = a3;
  if ( *(_QWORD *)(a1 + 32) )
  {
    *a2 = 0LL;
    v6 = *(_QWORD *)(a3 + 56);
    if ( v6 )
    {
      v7 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 32LL);
LABEL_20:
      LOBYTE(a2) = v6 != a3;
      v7(v6, a2);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  else
  {
    v8 = 0LL;
    v14[0] = 0LL;
    v9 = *(_QWORD **)(a1 + 72);
    for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
    {
      v13 = i[3];
      v11 = *(_QWORD *)(a3 + 56);
      if ( !v11 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, &v13) )
        break;
    }
    if ( i != *(_QWORD **)(a1 + 72) && i[3] )
    {
      v8 = i[3];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
    *v4 = 0LL;
    if ( v4 != v14 )
    {
      *v4 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v6 = *(_QWORD *)(a3 + 56);
    if ( v6 )
    {
      v7 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 32LL);
      goto LABEL_20;
    }
  }
  return v4;
}
