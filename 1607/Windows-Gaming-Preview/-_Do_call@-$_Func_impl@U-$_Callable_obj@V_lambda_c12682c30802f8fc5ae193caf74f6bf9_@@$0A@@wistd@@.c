/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_c12682c30802f8fc5ae193caf74f6bf9_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x1800251E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x180013674 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800253BC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_c12682c30802f8fc5ae193caf74f6bf9_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v17; // [rsp+40h] [rbp+20h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+28h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  v17 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v1)(
         *v1,
         &GUID_e0cae81b_625e_400d_9ded_4e4956f6fb9d,
         &v17);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 471LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v5);
LABEL_4:
    v7 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)v4;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 24LL))(
         v17,
         **(unsigned int **)(a1 + 16),
         **(_QWORD **)(a1 + 24));
  if ( v8 < 0 )
  {
    v4 = -2147467263;
    if ( v8 != -2147467263 )
      v4 = wil::details::in1diag3::Log_Hr(
             retaddr,
             (void *)0x1DE,
             (unsigned int)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
             (const char *)(unsigned int)v8,
             savedregs);
    goto LABEL_4;
  }
  v9 = **(_QWORD **)(a1 + 8);
  v10 = **(_QWORD **)(a1 + 32);
  v11 = **(_QWORD **)(a1 + 40);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(
    &TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock,
    &SRWLock);
  if ( TileDataLayerItemWrappers::MRTCacheManagerInternal::s_currentMRTStateHash == v11
    && (v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v9), v4 = v12, v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CF,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v12);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  else
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v4 = 0;
  }
  if ( v4 < 0 )
  {
    v5 = (unsigned int)v4;
    v6 = 480LL;
    goto LABEL_3;
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0;
}
