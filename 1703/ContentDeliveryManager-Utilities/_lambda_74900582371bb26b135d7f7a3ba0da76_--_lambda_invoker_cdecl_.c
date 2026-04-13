/*
 * XREFs of _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x180009B40
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F3C (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F88 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  void (__fastcall *v7)(__int64); // rbp
  __int64 v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_BYTE *)a4 )
  {
    wil::srwlock::lock_shared((RTL_SRWLOCK *)(a4 + 32), &SRWLock);
    v5 = (*(_QWORD *)(a4 + 120) - *(_QWORD *)(a4 + 112)) >> 4;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    v6 = 0LL;
    while ( v6 < v5 )
    {
      v7 = 0LL;
      v8 = 0LL;
      wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)(a4 + 40), &lpCriticalSection);
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a4 + 32), &SRWLock);
      if ( v6 < v5 )
      {
        v9 = *(_QWORD *)(a4 + 112);
        v10 = (_QWORD *)(v9 + 16 * v6);
        while ( !*v10 )
        {
          ++v6;
          v10 += 2;
          if ( v6 >= v5 )
            goto LABEL_11;
        }
        v11 = 2 * v6++;
        v14 = *(_OWORD *)(v9 + 8 * v11);
        v8 = *((_QWORD *)&v14 + 1);
        v7 = (void (__fastcall *)(__int64))v14;
      }
LABEL_11:
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v7 )
        v7(v8);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0LL;
}
