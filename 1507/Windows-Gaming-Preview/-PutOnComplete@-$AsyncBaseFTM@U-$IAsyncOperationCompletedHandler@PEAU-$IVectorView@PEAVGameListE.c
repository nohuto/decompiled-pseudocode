/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z @ 0x18000BDE0
 * Callers:
 *     ?put_Completed@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z @ 0x18000B5E0 (-put_Completed@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnum.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  int AgileReference; // esi
  __int64 v6; // rsi
  __int64 v7; // r14
  signed __int32 v8; // ecx
  signed __int32 v10[8]; // [rsp+0h] [rbp-20h] BYREF
  _QWORD savedregs[5]; // [rsp+20h] [rbp+0h]
  signed __int32 v12; // [rsp+50h] [rbp+30h] BYREF
  signed __int32 v13; // [rsp+60h] [rbp+40h] BYREF
  __int64 v14; // [rsp+68h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v2, -2);
  if ( v12 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 88);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    AgileReference = 0;
    if ( a2 )
    {
      v14 = 0LL;
      AgileReference = RoGetAgileReference(0LL, &GUID_eadac44b_7fdd_5589_b093_1bb73cc64f02, a2, &v14, savedregs[0]);
      if ( AgileReference < 0 )
      {
        v7 = v14;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = v14;
        v14 = v7;
      }
      if ( v7 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    if ( AgileReference >= 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 104));
      }
      _InterlockedOr(v10, 0);
      v8 = *(_DWORD *)(a1 + 40);
      v13 = -2;
      _InterlockedCompareExchange(&v13, v8, -2);
      if ( (unsigned int)(v13 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)AgileReference;
}
