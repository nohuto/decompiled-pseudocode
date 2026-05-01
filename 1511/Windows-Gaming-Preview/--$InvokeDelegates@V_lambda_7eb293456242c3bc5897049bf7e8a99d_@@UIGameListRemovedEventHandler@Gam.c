/*
 * XREFs of ??$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_7eb293456242c3bc5897049bf7e8a99d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000ACC0
 * Callers:
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000978C (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ??$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000A988 (--$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@-$EventSource@UIG.c)
 * Callees:
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000A07C (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_7eb293456242c3bc5897049bf7e8a99d_,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  int MatchingRestrictedErrorInfo; // esi
  __int64 v5; // rbx
  __int64 v6; // r15
  struct IUnknown **i; // r14
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-10h]
  __int64 v13; // [rsp+88h] [rbp+58h] BYREF

  MatchingRestrictedErrorInfo = 0;
  v5 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 12));
    v5 = a2;
    v11 = a2;
  }
  v6 = *(_QWORD *)(v5 + 32);
  for ( i = *(struct IUnknown ***)(v5 + 16); i != *(struct IUnknown ***)(v5 + 24); ++i )
  {
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))(*i)->lpVtbl[1].QueryInterface)(*i, a1);
    MatchingRestrictedErrorInfo = v8;
    if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -1996357631 )
    {
      RoTransformError(v8, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() != 0 )
      {
        v13 = 0LL;
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v13);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v13);
        v9 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        v5 = v11;
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    v6 += 8LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return (unsigned int)MatchingRestrictedErrorInfo;
}
