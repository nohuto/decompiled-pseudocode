/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x18002EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Make@VMPCGestureHandler@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@AEAPEAUIInputProcessorHost@@@Z @ 0x18002EFFC (--$Make@VMPCGestureHandler@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VM.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::Initialize3DComponents(MPCGamepadProcessor *this)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char *)Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost * &>(&v6, (char *)this + 8);
  v3 = 0LL;
  if ( &v7 != v2 )
  {
    v3 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
  }
  v4 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
