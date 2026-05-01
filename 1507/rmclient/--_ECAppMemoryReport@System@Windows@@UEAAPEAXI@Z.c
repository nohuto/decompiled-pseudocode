/*
 * XREFs of ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003F70
 * Callers:
 *     ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180003FD0 (-Release@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D800 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

Windows::System::CAppMemoryReport *__fastcall Windows::System::CAppMemoryReport::`vector deleting destructor'(
        Windows::System::CAppMemoryReport *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &Windows::System::CAppMemoryReport::`vftable';
  *((_QWORD *)this + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  v4 = *((_QWORD *)this + 4);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
