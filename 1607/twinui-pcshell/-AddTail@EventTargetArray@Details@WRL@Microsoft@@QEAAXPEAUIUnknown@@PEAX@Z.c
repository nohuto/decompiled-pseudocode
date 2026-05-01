/*
 * XREFs of ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180018580
 * Callers:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180013D3C (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@I.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180014918 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Sh.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Details::EventTargetArray::AddTail(
        Microsoft::WRL::Details::EventTargetArray *this,
        struct IUnknown *a2,
        void *a3)
{
  struct IUnknown **v3; // rsi
  struct IUnknown *v7; // rcx

  v3 = (struct IUnknown **)*((_QWORD *)this + 3);
  if ( *v3 != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    v7 = *v3;
    *v3 = a2;
    if ( v7 )
      ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 8 * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3)) = a3;
  *((_QWORD *)this + 3) += 8LL;
}
