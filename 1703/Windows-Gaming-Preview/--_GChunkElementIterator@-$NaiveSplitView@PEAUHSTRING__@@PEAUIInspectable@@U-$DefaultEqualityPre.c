/*
 * XREFs of ??_GChunkElementIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180018CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000753C (--1-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ??3@YAXPEAX_K@Z @ 0x180029508 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkElementIterator::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  volatile signed __int32 *v2; // rbx
  unsigned int v3; // esi
  __int64 v6; // rcx

  v2 = (volatile signed __int32 *)a1[7];
  v3 = 0;
  if ( v2 )
  {
    a1[7] = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      *(_QWORD *)v2 = &Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::`vftable';
      if ( *((_DWORD *)v2 + 3) )
      {
        do
        {
          v6 = *(_QWORD *)&v2[2 * v3 + 4];
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          ++v3;
        }
        while ( v3 < *((_DWORD *)v2 + 3) );
      }
      operator delete((void *)v2, 0x90uLL);
    }
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x48uLL);
  return a1;
}
