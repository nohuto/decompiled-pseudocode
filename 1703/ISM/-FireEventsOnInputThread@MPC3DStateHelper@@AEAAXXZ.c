/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180007820
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x180007810 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAXAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x180008598 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(RTL_SRWLOCK *this)
{
  __int64 v2; // rdx
  char Ptr_high; // r14
  char v4; // r13
  char Ptr; // r15
  char v6; // r12
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *i; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 *j; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  char *v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // rbx
  const char *v20; // r9
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // rbx
  _QWORD *v26; // rcx
  void *v27[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v28; // [rsp+38h] [rbp-28h]
  void *v29[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+30h] BYREF

  *(_OWORD *)v29 = 0LL;
  v30 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  wil::srwlock::lock_exclusive(this, &SRWLock);
  Ptr_high = HIBYTE(this[2].Ptr);
  v4 = BYTE4(this[2].Ptr);
  Ptr = (char)this[3].Ptr;
  v6 = BYTE6(this[2].Ptr);
  BYTE4(this[2].Ptr) = Ptr_high;
  BYTE6(this[2].Ptr) = Ptr;
  v7 = (__int64 *)this[7].Ptr;
  v8 = (__int64 *)*v7;
  while ( v8 != v7 )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(v29, v8 + 5);
    v2 = 0LL;
    if ( !*((_BYTE *)v8 + 25) )
    {
      v9 = (__int64 *)v8[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v8 = i;
        v8 = i;
      }
      else
      {
        do
        {
          v8 = v9;
          v9 = (__int64 *)*v9;
        }
        while ( !*((_BYTE *)v9 + 25) );
      }
    }
  }
  v11 = (__int64 *)this[5].Ptr;
  v12 = (__int64 *)*v11;
  while ( v12 != v11 )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(v27, v12 + 5);
    v2 = 0LL;
    if ( !*((_BYTE *)v12 + 25) )
    {
      v13 = (__int64 *)v12[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( j = (__int64 *)v12[1]; !*((_BYTE *)j + 25) && v12 == (__int64 *)j[2]; j = (__int64 *)j[1] )
          v12 = j;
        v12 = j;
      }
      else
      {
        do
        {
          v12 = v13;
          v13 = (__int64 *)*v13;
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr != v6 )
  {
    v15 = v29[1];
    if ( v29[0] != v29[1] )
    {
      v16 = (char *)v29[0] + 56;
      do
      {
        LOBYTE(SRWLock) = Ptr;
        if ( !*v16 )
        {
          std::_Xbad_function_call();
          __debugbreak();
        }
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(*(_QWORD *)*v16 + 16LL))(*v16, &SRWLock);
        v16 += 8;
      }
      while ( v16 - 7 != v15 );
    }
  }
  v17 = (char *)v27[0];
  if ( Ptr_high != v4 )
  {
    v18 = v27[1];
    if ( v27[0] != v27[1] )
    {
      v19 = (char *)v27[0] + 56;
      do
      {
        LOBYTE(SRWLock) = Ptr_high;
        if ( !*v19 )
        {
          std::_Xbad_function_call();
          __debugbreak();
        }
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(*(_QWORD *)*v19 + 16LL))(*v19, &SRWLock);
        v19 += 8;
      }
      while ( v19 - 7 != v18 );
      v17 = (char *)v27[0];
    }
    if ( !Ptr_high )
    {
      wil::srwlock::lock_exclusive(this, &SRWLock);
      if ( !SetEvent(this[9].Ptr) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x86F,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v20);
        __debugbreak();
      }
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      v17 = (char *)v27[0];
    }
  }
  if ( v17 )
  {
    v21 = v27[1];
    if ( v17 != v27[1] )
    {
      v22 = v17 + 56;
      do
      {
        v23 = (_QWORD *)*v22;
        if ( *v22 )
        {
          LOBYTE(v2) = v23 != v22 - 7;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v23 + 32LL))(v23, v2);
          *v22 = 0LL;
        }
        v22 += 8;
      }
      while ( v22 - 7 != v21 );
      v17 = (char *)v27[0];
    }
    std::_Deallocate(v17, (v28 - (__int64)v17) >> 6, 0x40uLL);
    *(_OWORD *)v27 = 0LL;
    v28 = 0LL;
  }
  if ( v29[0] )
  {
    v24 = v29[1];
    if ( v29[0] != v29[1] )
    {
      v25 = (char *)v29[0] + 56;
      do
      {
        v26 = (_QWORD *)*v25;
        if ( *v25 )
        {
          LOBYTE(v2) = v26 != v25 - 7;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v26 + 32LL))(v26, v2);
          *v25 = 0LL;
        }
        v25 += 8;
      }
      while ( v25 - 7 != v24 );
    }
    std::_Deallocate((char *)v29[0], (signed __int64)(v30 - (unsigned __int64)v29[0]) >> 6, 0x40uLL);
  }
}
