/*
 * XREFs of ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x18000EEB0
 * Callers:
 *     ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@GBA@EAAPEAXI@Z @ 0x18000EFA0 (--_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
Windows::Internal::ComTaskPool::CRemoteReleaseStub *__fastcall Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CRemoteReleaseStub *this,
        char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
  *((_QWORD *)this + 2) = &Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  if ( *((_BYTE *)this + 40) )
  {
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 24LL))(*((_QWORD *)this + 4));
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 7) = -1073741823;
  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
