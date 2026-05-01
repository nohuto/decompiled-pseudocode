/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800164F0 (-Release@-$RuntimeClass@U-$InterfaceList@UISelectionDataParser@StartLayout@@VNil@Details@WRL@Mic.c)
 *     ??1CImmersiveWindowFactoryBase@@MEAA@XZ @ 0x18002B808 (--1CImmersiveWindowFactoryBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

CImmersiveWindowFactoryBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        CImmersiveWindowFactoryBase *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 19);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  CImmersiveWindowFactoryBase::~CImmersiveWindowFactoryBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
