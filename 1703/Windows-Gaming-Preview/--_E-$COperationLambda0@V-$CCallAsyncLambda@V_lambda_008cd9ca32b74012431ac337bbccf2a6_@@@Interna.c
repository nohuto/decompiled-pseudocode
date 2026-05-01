/*
 * XREFs of ??_E?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_008cd9ca32b74012431ac337bbccf2a6_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18000CF80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180029508 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_008cd9ca32b74012431ac337bbccf2a6_>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  signed __int32 v5; // eax
  int v6; // ebx

  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    v5 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 44));
    if ( v5 )
    {
      if ( (*(_BYTE *)(v4 + 64) & 4) == 0 && v5 == 1 )
        goto LABEL_8;
    }
    else
    {
      v6 = *(_DWORD *)(v4 + 64) >> 2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, 1LL);
      if ( (v6 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_8:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x20uLL);
  return a1;
}
