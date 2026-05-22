/*
 * XREFs of ??_GGestureTargetingTarget@@MEAAPEAXI@Z @ 0x18000F0E8
 * Callers:
 *     ??_EGestureTargetingTarget@@O7EAAPEAXI@Z @ 0x180011080 (--_EGestureTargetingTarget@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ?Head@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@GestureTargetingTarget@@@Z @ 0x180010D64 (-Head@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJPEAPEAUChainedTarget@G.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
GestureTargetingTarget *__fastcall GestureTargetingTarget::`scalar deleting destructor'(
        GestureTargetingTarget *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = &GestureTargetingTarget::`vftable'{for `IGestureTargetingTarget'};
  *((_QWORD *)this + 1) = &GestureTargetingTarget::`vftable'{for `RefCountedObject'};
  if ( *((_DWORD *)this + 21) > 1u )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( *((_DWORD *)this + 21) == 1 )
  {
    v7 = 0LL;
    if ( (int)DynamicSizeQueue<GestureTargetingTarget::ChainedTarget,1>::Head((char *)this + 64, &v7) >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
  }
  *((_QWORD *)this + 3) = 0LL;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 4) = 0LL;
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 8));
  operator delete(*((void **)this + 5));
  v5 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
