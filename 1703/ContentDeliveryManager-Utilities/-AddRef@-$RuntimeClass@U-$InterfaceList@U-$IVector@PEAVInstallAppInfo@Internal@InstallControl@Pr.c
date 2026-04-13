/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010190
 * Callers:
 *     ?AddRef@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x180010330 (-AddRef@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$D.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18001E810 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18001E910 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVOnlineIdServiceTicketReq_ea_18001E910.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0x7FFFFFFF;
  if ( v2 < 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(2 * v2 + 0x10);
    if ( v7 != 0x7FFFFFFF )
    {
      do
      {
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v2 + 16), v7 + 1, v7) )
          break;
        v7 = *(_DWORD *)(2 * v2 + 0x10);
      }
      while ( v7 != 0x7FFFFFFF );
      if ( v7 != 0x7FFFFFFF )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v4 = v2 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v2 + 1, v2);
      v5 = v2 == v6;
      v2 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_5;
    }
  }
  return v3;
}
