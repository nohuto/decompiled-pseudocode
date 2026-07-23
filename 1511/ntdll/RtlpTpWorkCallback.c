/*
 * XREFs of RtlpTpWorkCallback @ 0x180008E40
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x1800025A8 (RtlTpETWCallbackDequeue.c)
 *     RtlpTpImpersonate @ 0x180003D0C (RtlpTpImpersonate.c)
 *     RtlpTpWorkUnposted @ 0x180008900 (RtlpTpWorkUnposted.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     TppCompleteThreadData @ 0x180009CC4 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180009D00 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x180009FC0 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x180072830 (TpCallbackMayRunLong.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18008146C (TpPoolReferenceExistingGlobalPool.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     TpDereferenceGlobalPool @ 0x180082298 (TpDereferenceGlobalPool.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpTpWorkCallback(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64); // r12
  __int64 v8; // r13
  _ACTIVATION_CONTEXT *v9; // rsi
  void *v10; // r15
  void *v11; // r14
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-88h] BYREF
  int v16; // [rsp+58h] [rbp-80h]
  _BYTE v17[56]; // [rsp+60h] [rbp-78h] BYREF
  __int64 ThreadInformation; // [rsp+F8h] [rbp+20h] BYREF

  v15 = 72LL;
  v16 = 1;
  memset(v17, 0, sizeof(v17));
  v5 = 0LL;
  if ( MEMORY[0x7FFE0386] )
    RtlTpETWCallbackDequeue(v4, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 32);
    if ( !v13 )
    {
      v13 = TpPoolReferenceExistingGlobalPool();
      v5 = v13;
    }
    *((_QWORD *)Instance + 16) = v13;
    TpCallbackMayRunLong(Instance);
  }
  v6 = *(_QWORD *)(a2 + 40);
  if ( v6 )
    RtlpTpImpersonate(v6);
  v7 = *(void (__fastcall **)(__int64))(a2 + 56);
  v8 = *(_QWORD *)(a2 + 64);
  v9 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  v10 = *(void **)(a2 + 80);
  v14[2] = v10;
  v11 = *(void **)(a2 + 96);
  v14[1] = v11;
  if ( v11 )
    RtlSetThreadSubProcessTag(v11);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v10 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast(&v15, v9);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(0LL, a2, (__int64)v7, v8, (__int64)v11);
  TppStartThreadData(v14, v7, v8, NtCurrentTeb()->SubProcessTag);
  v7(v8);
  if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast(&v15);
    RtlReleaseActivationContext(v9);
  }
  if ( v10 )
    LdrUnloadDll(v10);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( v5 )
    TpDereferenceGlobalPool(v5);
  if ( v11 )
    RtlSetThreadSubProcessTag(0LL);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStop(0LL, a2, (__int64)v7, v8, (__int64)v11);
  return TppCompleteThreadData(v14[0]);
}
