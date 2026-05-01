/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180002550
 * Callers:
 *     ??1?$ComPtr@V?$AgileVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180002354 (--1-$ComPtr@V-$AgileVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$Default.c)
 *     ?Release@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x1800023D0 (-Release@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityP.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180006410 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVGameListEntry@GamesEnumerat_ea_180006410.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180006600 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVGameListEntry@GamesEnumerat_ea_180006600.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180006700 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVGameListEntry@GamesEnumerat_ea_180006700.c)
 *     _lambda_a644c9ca355a20c9ec9333f2681dd115_::operator() @ 0x1800093D4 (_lambda_a644c9ca355a20c9ec9333f2681dd115_--operator().c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  signed __int64 v3; // rdx
  unsigned int v4; // edi
  bool v5; // zf
  __int64 v6; // rax

  v3 = *((_QWORD *)a1 + 7);
  if ( v3 < 0 )
  {
    do
LABEL_8:
      a3 = *(unsigned int *)(2 * v3 + 0x10);
    while ( (_DWORD)a3 != 0x7FFFFFFF
         && (_DWORD)a3 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v3 + 16), a3 - 1, a3) );
    v4 = a3 - 1;
LABEL_10:
    if ( !v4 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64, __int64, __int64))(*a1 + 144))(
          a1,
          1LL,
          a3,
          0x7FFFFFFFLL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  else
  {
    while ( (_DWORD)v3 != 0x7FFFFFFF )
    {
      v4 = v3 - 1;
      v6 = _InterlockedCompareExchange64(a1 + 7, v3 - 1, v3);
      v5 = v3 == v6;
      v3 = v6;
      if ( v5 )
        goto LABEL_10;
      if ( v6 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v4;
}
