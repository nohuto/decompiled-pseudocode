/*
 * XREFs of ??0InputTarget@@IEAA@AEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006BBA4
 * Callers:
 *     ??$make_unique@VInputTargetWithHostRegistration@@AEAV?$ComPtr@UIInputDeliveryServerHost@@@WRL@Microsoft@@AEAV?$ComPtr@VInputThread@@@34@AEBUtagInputRoutingInfo@@@std@@YA?AV?$unique_ptr@VInputTargetWithHostRegistration@@U?$default_delete@VInputTargetWithHostRegistration@@@std@@@0@AEAV?$ComPtr@UIInputDeliveryServerHost@@@WRL@Microsoft@@AEAV?$ComPtr@VInputThread@@@34@AEBUtagInputRoutingInfo@@@Z @ 0x18006AB1C (--$make_unique@VInputTargetWithHostRegistration@@AEAV-$ComPtr@UIInputDeliveryServerHost@@@WRL@Mi.c)
 *     ??0InputAttemptedTarget@@QEAA@AEBV?$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006BD0C (--0InputAttemptedTarget@@QEAA@AEBV-$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV-$ComPtr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputTarget::InputTarget(__int64 a1, __int64 *a2, _OWORD *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = &InputTarget::`vftable';
  v5 = *a2;
  *(_QWORD *)(a1 + 8) = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  result = a1;
  *(_OWORD *)(a1 + 16) = *a3;
  *(_OWORD *)(a1 + 32) = a3[1];
  *(_OWORD *)(a1 + 48) = a3[2];
  return result;
}
