/*
 * XREFs of ExCreateCallback @ 0x1405544CC
 * Callers:
 *     KeRegisterProcessorChangeCallback @ 0x1405B8714 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterBootDriverCallback @ 0x1405C2454 (IoRegisterBootDriverCallback.c)
 *     VerifierExCreateCallback @ 0x140741B64 (VerifierExCreateCallback.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     ExpInitializeCallbacks @ 0x1407E3A04 (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407E6004 (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x1407E870C (IopInitializeSessionNotifications.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rdi
  __m128i v5; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm0
  NTSTATUS inserted; // ebx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  signed __int8 v16; // cf
  __int64 v17; // rbx
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  __int16 v20; // ax
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1h] BYREF
  __int128 v23; // [rsp+60h] [rbp+7h] BYREF
  __m128i v24; // [rsp+70h] [rbp+17h]
  __int128 v25; // [rsp+80h] [rbp+27h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(__m128i *)&ObjectAttributes->ObjectName;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  Handle = 0LL;
  v24 = v5;
  v23 = v8;
  v10 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v24.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) | 0x200;
  v25 = v10;
  if ( v5.m128i_i64[0] )
    inserted = ObOpenObjectByName((__int64)&v23, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, &Handle);
  else
    inserted = -1073741823;
  if ( inserted >= 0 )
    goto LABEL_6;
  if ( Create )
  {
    inserted = ObCreateObject(0, (int)ExCallbackObjectType, (int)&v23, 0);
    if ( inserted < 0 )
      return inserted;
    MEMORY[0] = 1819042115;
    MEMORY[0x20] = AllowMultipleCallbacks;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[8] = 0LL;
    --CurrentThread->SpecialApcDisable;
    v14 = KeAbPreAcquire((ULONG_PTR)&ExpCallbackListLock, 0LL, 0LL, v13);
    v16 = _interlockedbittestandset64((volatile signed __int32 *)&ExpCallbackListLock, 0LL);
    v17 = v14;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(&ExpCallbackListLock, v14, (ULONG_PTR)&ExpCallbackListLock, v15);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    MEMORY[0x28] = &ExpCallbackListHead;
    MEMORY[0x30] = qword_1403253E8;
    if ( *(__int64 **)qword_1403253E8 != &ExpCallbackListHead )
      __fastfail(3u);
    *(_QWORD *)qword_1403253E8 = 40LL;
    qword_1403253E8 = 40LL;
    _m_prefetchw(&ExpCallbackListLock);
    v18 = ExpCallbackListLock - 16;
    if ( (ExpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v18 = 0LL;
    if ( (ExpCallbackListLock & 2) != 0
      || (v19 = ExpCallbackListLock,
          v19 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&ExpCallbackListLock,
                   v18,
                   ExpCallbackListLock)) )
    {
      ExfReleasePushLock(&ExpCallbackListLock, (__int64)&ExpCallbackListHead);
    }
    KeAbPostRelease((ULONG_PTR)&ExpCallbackListLock);
    v20 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    inserted = ObInsertObject(0LL, 0LL, 1u, 0, 0LL, &Handle);
  }
  if ( inserted >= 0 )
  {
LABEL_6:
    inserted = ObReferenceObjectByHandle(Handle, 0, ExCallbackObjectType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( inserted >= 0 )
      *CallbackObject = (PCALLBACK_OBJECT)Object;
  }
  return inserted;
}
