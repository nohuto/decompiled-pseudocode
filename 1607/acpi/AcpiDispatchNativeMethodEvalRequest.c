/*
 * XREFs of AcpiDispatchNativeMethodEvalRequest @ 0x1C0053590
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C0053740 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall AcpiDispatchNativeMethodEvalRequest(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 result; // rax
  _QWORD v6[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(v6, 0, 0x48uLL);
  v6[0] = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  HIDWORD(v6[1]) = *(_DWORD *)(a1 + 16);
  v6[2] = *(_QWORD *)(a1 + 32);
  LODWORD(v6[3]) = *(_DWORD *)(a1 + 40);
  v6[4] = *(_QWORD *)(a1 + 48);
  v6[5] = *(_QWORD *)(a1 + 56);
  v6[6] = AcpiNativeMethodEvalRequestCompletion;
  v6[8] = AcpiAllocateNativeMethodOutputBuffer;
  LODWORD(v6[1]) = v4;
  v6[7] = a1;
  result = ((__int64 (__fastcall *)(_QWORD *))qword_1C0073A28)(v6);
  if ( (_DWORD)result != 259 )
    *(_DWORD *)(a1 + 64) = result;
  return result;
}
