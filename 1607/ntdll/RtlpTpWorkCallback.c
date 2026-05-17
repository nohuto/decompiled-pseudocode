/*
 * XREFs of RtlpTpWorkCallback @ 0x18003A1C0
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     RtlTpETWCallbackDequeue @ 0x1800024E0 (RtlTpETWCallbackDequeue.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016370 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018750 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     RtlpTpWorkUnposted @ 0x18003A050 (RtlpTpWorkUnposted.c)
 *     TppCompleteThreadData @ 0x18003B334 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B370 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x18003B520 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 *     TpCallbackMayRunLong @ 0x1800776C0 (TpCallbackMayRunLong.c)
 *     RtlpTpImpersonate @ 0x18007E68C (RtlpTpImpersonate.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180085EEC (TpPoolReferenceExistingGlobalPool.c)
 *     TpDereferenceGlobalPool @ 0x180086738 (TpDereferenceGlobalPool.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64); // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-88h] BYREF
  int v15; // [rsp+58h] [rbp-80h]
  _BYTE v16[56]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v17; // [rsp+F8h] [rbp+20h] BYREF

  v14 = 72LL;
  v15 = 1;
  memset(v16, 0, sizeof(v16));
  v5 = 0LL;
  if ( MEMORY[0x7FFE0386] )
    RtlTpETWCallbackDequeue(v4, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v12 = *(_QWORD *)(a2 + 32);
    if ( !v12 )
    {
      v12 = TpPoolReferenceExistingGlobalPool();
      v5 = v12;
    }
    *(_QWORD *)(a1 + 128) = v12;
    TpCallbackMayRunLong(a1);
  }
  if ( *(_QWORD *)(a2 + 40) )
    RtlpTpImpersonate();
  v6 = *(void (__fastcall **)(__int64))(a2 + 56);
  v7 = *(_QWORD *)(a2 + 64);
  v8 = *(_QWORD *)(a2 + 72);
  v9 = *(_QWORD *)(a2 + 80);
  v13[1] = v9;
  v10 = *(_QWORD *)(a2 + 96);
  v13[3] = v10;
  if ( v10 )
    RtlSetThreadSubProcessTag(v10);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v8 != -1 )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v9 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v8 != -1 )
    RtlActivateActivationContextUnsafeFast((__int64)&v14, v8);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(0LL, a2, (__int64)v6, v7, v10);
  TppStartThreadData(v13, v6, v7, NtCurrentTeb()->SubProcessTag);
  v6(v7);
  if ( v8 != -1 )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
    RtlReleaseActivationContext(v8);
  }
  if ( v9 )
    LdrUnloadDll(v9);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v17 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v17);
  }
  if ( v5 )
    TpDereferenceGlobalPool(v5);
  if ( v10 )
    RtlSetThreadSubProcessTag(0LL);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStop(0LL, a2, (__int64)v6, v7, v10);
  return TppCompleteThreadData(v13[0]);
}
