/*
 * XREFs of ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UMsgRoutingInfo@@@Z @ 0x1C0023848
 * Callers:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UMsgRoutingInfo@@PEAPEAV1@@Z @ 0x1C002369C (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UMsgRoutingInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     IsUserValidateAndAttachQueueToInputWindowApiExtSupported_0 @ 0x1C0002F10 (IsUserValidateAndAttachQueueToInputWindowApiExtSupported_0.c)
 *     UserValidateAndAttachQueueToInputWindowApiExt_0 @ 0x1C0002F18 (UserValidateAndAttachQueueToInputWindowApiExt_0.c)
 */

__int64 __fastcall CInputQueue::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v8; // xmm1_8
  int v9; // ecx

  v3 = 0;
  if ( (int)IsUserValidateAndAttachQueueToInputWindowApiExtSupported_0() >= 0 )
    v3 = UserValidateAndAttachQueueToInputWindowApiExt_0();
  result = v3;
  v8 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  v9 = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 56) = v9;
  return result;
}
