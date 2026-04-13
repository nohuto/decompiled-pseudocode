/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180043D78
 * Callers:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800427E8 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@Cont.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800487F4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
        volatile signed __int32 **a1,
        unsigned __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  _DWORD *v5; // rax
  int v6; // edi
  bool v7; // zf
  signed __int32 v8; // eax

  *a1 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v5[3] = 1;
    if ( !v7 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    v4 = v5;
    *(_QWORD *)v5 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    v6 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
           (Microsoft::WRL::Details::EventTargetArray *)v5,
           *a2);
    if ( v6 >= 0 )
    {
      do
        v8 = *((_DWORD *)v4 + 3);
      while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v4 + 3, v8 + 1, v8) );
      *a1 = v4;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  return (unsigned int)v6;
}
