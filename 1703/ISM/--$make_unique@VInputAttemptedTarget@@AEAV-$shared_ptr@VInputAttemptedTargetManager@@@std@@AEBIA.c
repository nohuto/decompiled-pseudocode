/*
 * XREFs of ??$make_unique@VInputAttemptedTarget@@AEAV?$shared_ptr@VInputAttemptedTargetManager@@@std@@AEBIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@std@@YA?AV?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@0@AEAV?$shared_ptr@VInputAttemptedTargetManager@@@0@AEBIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006ABA0
 * Callers:
 *     ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180069450 (-OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??0InputAttemptedTarget@@QEAA@AEBV?$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006BD0C (--0InputAttemptedTarget@@QEAA@AEBV-$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV-$ComPtr.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<InputAttemptedTarget,std::shared_ptr<InputAttemptedTargetManager> &,unsigned int const &,Microsoft::WRL::ComPtr<InputThread> &,tagInputRoutingInfo const &>(
        _QWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        __int64 a5)
{
  unsigned int v10; // [rsp+50h] [rbp+8h]

  v10 = (unsigned int)operator new(0x58uLL);
  *a1 = InputAttemptedTarget::InputAttemptedTarget(v10, a2, *a3, a4, a5);
  return a1;
}
