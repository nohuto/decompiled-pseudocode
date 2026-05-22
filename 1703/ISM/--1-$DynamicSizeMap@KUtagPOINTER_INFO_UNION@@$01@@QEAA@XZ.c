/*
 * XREFs of ??1?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAA@XZ @ 0x18000C9E0
 * Callers:
 *     _Win32kInterop::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x18009F51A (_Win32kInterop--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _GestureTargetingComponent::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x18009F682 (_GestureTargetingComponent--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _GestureTargetingTarget::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x18009F712 (_GestureTargetingTarget--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _GestureTargetingTarget::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x18009F722 (_GestureTargetingTarget--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _GestureTargetingTarget::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x18009F732 (_GestureTargetingTarget--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$1 @ 0x18009F7B6 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$1.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$8 @ 0x18009F838 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$8.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$21 @ 0x18009F950 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$21.c)
 *     _PointerInfoAdapter::PointerInfoAdapter_::_1_::dtor$1 @ 0x1800A206E (_PointerInfoAdapter--PointerInfoAdapter_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::~DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>(
        void **a1)
{
  operator delete(*a1);
}
