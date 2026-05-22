/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x180046220
 * Callers:
 *     <none>
 * Callees:
 *     ??$Make@VMPCGestureHandler@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@AEAPEAUIInputProcessorHost@@@Z @ 0x18002EFFC (--$Make@VMPCGestureHandler@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VM.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::Initialize3DComponents(struct IInputProcessorHost **this)
{
  MPCGestureHandler **v2; // rax
  struct IInputProcessorHost *v3; // rdx
  struct IInputProcessorHost *v4; // rcx
  MPCGestureHandler *v5; // rcx
  MPCGestureHandler *v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost * &>(&v6, this + 1);
  v3 = 0LL;
  if ( &v7 != (char *)v2 )
  {
    v3 = *v2;
    *v2 = 0LL;
  }
  v4 = this[33];
  this[33] = v3;
  if ( v4 )
    (*(void (__fastcall **)(struct IInputProcessorHost *))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
