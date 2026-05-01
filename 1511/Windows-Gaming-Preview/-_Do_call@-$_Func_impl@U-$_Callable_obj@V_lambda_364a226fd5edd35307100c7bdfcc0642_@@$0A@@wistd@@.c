/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_364a226fd5edd35307100c7bdfcc0642_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x180024880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800111B8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??$As@UITileInfoCache@@@?$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITileInfoCache@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800243FC (--$As@UITileInfoCache@@@-$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UITileI.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024C9C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_364a226fd5edd35307100c7bdfcc0642_,0>,wistd::details::function_allocator<wistd::_Func_class<long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
        __int64 a1)
{
  int v2; // eax
  int v3; // edi
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdi
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+38h] BYREF

  v16 = 0LL;
  v2 = Microsoft::WRL::ComPtr<ITileInfo>::As<ITileInfoCache>(*(_QWORD **)(a1 + 8), &v16);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 544LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v5,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v4);
LABEL_4:
    v6 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v3;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
         v16,
         **(unsigned int **)(a1 + 16),
         **(_QWORD **)(a1 + 24));
  if ( v7 < 0 )
  {
    v3 = -2147467263;
    if ( v7 != -2147467263 )
      v3 = wil::details::in1diag3::Log_Hr(
             retaddr,
             (void *)0x227,
             (unsigned int)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
             (const char *)(unsigned int)v7,
             savedregs);
    goto LABEL_4;
  }
  v8 = **(_QWORD **)(a1 + 8);
  v9 = **(_QWORD **)(a1 + 32);
  v10 = **(_QWORD **)(a1 + 40);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(
    &TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock,
    &SRWLock);
  if ( TileDataLayerItemWrappers::MRTCacheManagerInternal::s_currentMRTStateHash == v10
    && (v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, v8), v3 = v11, v11 < 0) )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      1566LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v11);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  else
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v3 = 0;
  }
  if ( v3 < 0 )
  {
    v4 = (unsigned int)v3;
    v5 = 553LL;
    goto LABEL_3;
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0;
}
