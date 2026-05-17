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

void __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64); // r12
  __int64 v7; // r13
  volatile signed __int32 *v8; // rsi
  __int64 v9; // r15
  void *v10; // r14
  __int64 v11; // rax
  __int64 v12[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-88h] BYREF
  int v14; // [rsp+58h] [rbp-80h]
  _BYTE v15[56]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v16; // [rsp+F8h] [rbp+20h] BYREF

  v13 = 72LL;
  v14 = 1;
  memset(v15, 0, sizeof(v15));
  v5 = 0LL;
  if ( MEMORY[0x7FFE0386] )
    RtlTpETWCallbackDequeue(v4, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v11 = *(_QWORD *)(a2 + 32);
    if ( !v11 )
    {
      v11 = TpPoolReferenceExistingGlobalPool();
      v5 = v11;
    }
    *(_QWORD *)(a1 + 128) = v11;
    TpCallbackMayRunLong(a1);
  }
  if ( *(_QWORD *)(a2 + 40) )
    RtlpTpImpersonate();
  v6 = *(void (__fastcall **)(__int64))(a2 + 56);
  v7 = *(_QWORD *)(a2 + 64);
  v8 = *(volatile signed __int32 **)(a2 + 72);
  v9 = *(_QWORD *)(a2 + 80);
  v12[2] = v9;
  v10 = *(void **)(a2 + 96);
  v12[1] = (__int64)v10;
  if ( v10 )
    RtlSetThreadSubProcessTag(v10);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v8 != (volatile signed __int32 *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v9 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v8 != (volatile signed __int32 *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v13, (__int64)v8);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(0LL, a2, (__int64)v6, v7, (__int64)v10);
  TppStartThreadData(v12, (__int64)v6, v7, (__int64)NtCurrentTeb()->SubProcessTag);
  v6(v7);
  if ( v8 != (volatile signed __int32 *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
    RtlReleaseActivationContext(v8);
  }
  if ( v9 )
    LdrUnloadDll(v9);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v16 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v16);
  }
  if ( v5 )
    TpDereferenceGlobalPool(v5);
  if ( v10 )
    RtlSetThreadSubProcessTag(0LL);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStop(0LL, a2, (__int64)v6, v7, (__int64)v10);
  TppCompleteThreadData(v12[0]);
}
