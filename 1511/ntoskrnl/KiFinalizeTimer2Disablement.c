/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x140031898
 * Callers:
 *     KiUpdateTimer2Flags @ 0x1400326AC (KiUpdateTimer2Flags.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1)
{
  __int64 v1; // r14
  char v3; // bp
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  void (__fastcall *v7)(unsigned __int64); // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 result; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = 0LL;
  v5 = KiWaitNever;
  v6 = KiWaitAlways;
  v7 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                      KiWaitNever ^ *(_QWORD *)(a1 + 112),
                                                                                      KiWaitNever)));
  if ( v7 )
  {
    v4 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 120), KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( v3 )
      EtwGetKernelTraceTimestamp(v10, 1073872896LL);
    v7(v4);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    v5 = KiWaitNever;
    v6 = KiWaitAlways;
  }
  if ( v3 )
  {
    v11[1] = v7;
    v11[2] = 0x7E35C6C7F3DD7277LL * (v5 ^ __ROR8__(a1 ^ _byteswap_uint64(v4 ^ v6), v5));
    v11[0] = 0x7E35C6C7F3DD7277LL
           * (v5 ^ __ROR8__(v6 ^ _byteswap_uint64(a1 ^ v6) ^ _byteswap_uint64(a1 ^ __ROL8__(v1 ^ v5, v5)), v5));
    if ( !v7 )
      EtwGetKernelTraceTimestamp(v10, 1073872896LL);
    return EtwTraceTimedEvent(3948, 1073872896, (unsigned int)v11, 24, 4197890, (__int64)v10);
  }
  return result;
}
