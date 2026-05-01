/*
 * XREFs of ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003C50
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x180003D00 (-Release@CProcessMemoryReport@System@Windows@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D800 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

Windows::System::CProcessMemoryReport *__fastcall Windows::System::CProcessMemoryReport::`scalar deleting destructor'(
        Windows::System::CProcessMemoryReport *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &Windows::System::CProcessMemoryReport::`vftable';
  *((_QWORD *)this + 1) = &Windows::System::CProcessMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::System::CProcessMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  v4 = *((_QWORD *)this + 4);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
