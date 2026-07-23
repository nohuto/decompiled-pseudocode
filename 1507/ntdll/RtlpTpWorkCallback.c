/*
 * XREFs of RtlpTpWorkCallback @ 0x18007C030
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     RtlTpETWCallbackDequeue @ 0x180002420 (RtlTpETWCallbackDequeue.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     TpCallbackMayRunLong @ 0x18003BD90 (TpCallbackMayRunLong.c)
 *     TppStartThreadData @ 0x18003C1E0 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x18003C310 (RtlSetThreadSubProcessTag.c)
 *     TppCompleteThreadData @ 0x18003C368 (TppCompleteThreadData.c)
 *     RtlReleaseActivationContext @ 0x18003D9D0 (RtlReleaseActivationContext.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpTpWorkUnposted @ 0x18007C2C0 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x18007D790 (TpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007D7D8 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpTpImpersonate @ 0x18007E060 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     memset @ 0x180098540 (memset.c)
 */

void __fastcall RtlpTpWorkCallback(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64); // r12
  __int64 v10; // r13
  _ACTIVATION_CONTEXT *v11; // rsi
  void *v12; // r15
  void *v13; // r14
  __int64 v14; // rax
  __int64 v15[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-88h] BYREF
  int v17; // [rsp+58h] [rbp-80h]
  _BYTE v18[56]; // [rsp+60h] [rbp-78h] BYREF
  __int64 ThreadInformation; // [rsp+F8h] [rbp+20h] BYREF

  v16 = 72LL;
  v17 = 1;
  memset(v18, 0, sizeof(v18));
  v7 = 0LL;
  if ( MEMORY[0x7FFE0386] )
    RtlTpETWCallbackDequeue(v5, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    if ( !v14 )
    {
      v14 = TpPoolReferenceExistingGlobalPool();
      v7 = v14;
    }
    *((_QWORD *)Instance + 16) = v14;
    TpCallbackMayRunLong(Instance);
  }
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
    RtlpTpImpersonate(v8, v4, v6);
  v9 = *(void (__fastcall **)(__int64))(a2 + 56);
  v10 = *(_QWORD *)(a2 + 64);
  v11 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  v12 = *(void **)(a2 + 80);
  v15[2] = (__int64)v12;
  v13 = *(void **)(a2 + 96);
  v15[1] = (__int64)v13;
  if ( v13 )
    RtlSetThreadSubProcessTag(v13);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v11 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v12 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v11 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v16, (__int64)v11);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(0LL, a2, (__int64)v9, v10, (__int64)v13);
  TppStartThreadData(v15, (__int64)v9, v10, (__int64)NtCurrentTeb()->SubProcessTag);
  v9(v10);
  if ( v11 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
    RtlReleaseActivationContext(v11);
  }
  if ( v12 )
    LdrUnloadDll(v12);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( v7 )
    TpDereferenceGlobalPool(v7);
  if ( v13 )
    RtlSetThreadSubProcessTag(0LL);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStop(0LL, a2, (__int64)v9, v10, (__int64)v13);
  TppCompleteThreadData(v15[0]);
}
