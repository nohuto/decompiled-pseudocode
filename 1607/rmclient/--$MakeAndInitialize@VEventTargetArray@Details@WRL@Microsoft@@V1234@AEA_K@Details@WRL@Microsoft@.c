/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800087B0
 * Callers:
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000159C (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800095E4 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001B00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180006064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180007CD8 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x180007DC0 (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x180007EB4 (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 *     ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180007EE8 (--1-$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180009238 (-InternalAddRef@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@De.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
        Microsoft::WRL::Details::EventTargetArray **a1,
        unsigned __int64 *a2)
{
  Microsoft::WRL::Details::EventTargetArray *v2; // rbx
  void *v5; // rax
  int v6; // edi
  Microsoft::WRL::Details::EventTargetArray *v7; // rax
  volatile int *v8; // rdx
  Microsoft::WRL::Details::EventTargetArray *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v10 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    v7 = Microsoft::WRL::Details::EventTargetArray::EventTargetArray((Microsoft::WRL::Details::EventTargetArray *)v5);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::Attach((__int64 *)&v10, (volatile int *)v7);
    v11 = 0LL;
    v2 = v10;
    v6 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(v10, *a2);
    if ( v6 >= 0 )
    {
      if ( v2 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef(v2);
      *a1 = v2;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&v11);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
      (__int64)v2,
      v8);
  return (unsigned int)v6;
}
