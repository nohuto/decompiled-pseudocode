/*
 * XREFs of ??$Make@VMPCGestureHandler@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@AEAPEAUIInputProcessorHost@@@Z @ 0x18002EFFC
 * Callers:
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x18002EAC0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x180046220 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCProcessor@@UEAAXXZ @ 0x180048400 (-Initialize3DComponents@MPCProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x18004A4F0 (-Initialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18004F21C (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
MPCGestureHandler **__fastcall Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost * &>(
        MPCGestureHandler **a1,
        struct IInputProcessorHost **a2)
{
  MPCGestureHandler *v4; // rax
  MPCGestureHandler *v5; // rdi

  *a1 = 0LL;
  v4 = (MPCGestureHandler *)operator new(0x398uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = MPCGestureHandler::MPCGestureHandler(v4, *a2);
    if ( *a1 )
      (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
