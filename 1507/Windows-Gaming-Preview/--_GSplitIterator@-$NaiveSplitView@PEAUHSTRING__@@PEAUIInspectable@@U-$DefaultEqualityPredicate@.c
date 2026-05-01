/*
 * XREFs of ??_GSplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180018B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800044B0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collectio.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800079E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::SplitIterator::`scalar deleting destructor'(
        _QWORD *Block,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  char v4; // bp
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi

  v3 = Block[10];
  v4 = a2;
  if ( v3 )
  {
    Block[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v6 = (volatile signed __int64 *)Block[9];
  if ( v6 )
  {
    Block[9] = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
      v6,
      a2,
      a3);
  }
  v7 = Block[6];
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v7));
  v8 = Block[4];
  if ( v8 )
  {
    Block[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (v4 & 1) != 0 )
    operator delete(Block);
  return Block;
}
