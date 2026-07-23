/*
 * XREFs of ExCreateCallback @ 0x1404CCE20
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405785A4 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterBootDriverCallback @ 0x1405811FC (IoRegisterBootDriverCallback.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     ExpInitializeCallbacks @ 0x1407A20B8 (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x1407B93C4 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407BA6CC (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x1407BCB20 (IopInitializeSessionNotifications.c)
 * Callees:
 *     ExpLockCallbackListExclusive @ 0x140148A70 (ExpLockCallbackListExclusive.c)
 *     ExpUnlockCallbackListExclusive @ 0x140148CDC (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // r14
  HANDLE v5; // rdi
  __m128i v6; // xmm1
  __int128 v8; // xmm0
  __int128 v11; // xmm0
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  char *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  NTSTATUS inserted; // eax
  PVOID v19; // [rsp+50h] [rbp-9h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1h] BYREF
  __int128 v21; // [rsp+60h] [rbp+7h] BYREF
  __m128i v22; // [rsp+70h] [rbp+17h]
  __int128 v23; // [rsp+80h] [rbp+27h]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *(__m128i *)&ObjectAttributes->ObjectName;
  v19 = 0LL;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  v22 = v6;
  Handle = 0LL;
  v21 = v8;
  v11 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v22.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) | 0x200;
  v23 = v11;
  if ( v6.m128i_i64[0] )
  {
    v12 = ObOpenObjectByName((__int64)&v21, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, &Handle);
    v5 = Handle;
    v13 = v12;
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v13 >= 0 )
    goto LABEL_6;
  if ( Create )
  {
    v13 = ObCreateObject(0, ExCallbackObjectType, (__int64)&v21, 0, 0, 56, 0, 0, &v19);
    if ( v13 < 0 )
      return v13;
    v15 = (char *)v19;
    *(_DWORD *)v19 = 1819042115;
    v15[32] = AllowMultipleCallbacks;
    *((_QWORD *)v15 + 3) = v15 + 16;
    *((_QWORD *)v15 + 2) = v15 + 16;
    *((_QWORD *)v15 + 1) = 0LL;
    ExpLockCallbackListExclusive((__int64)CurrentThread);
    v16 = (_QWORD *)qword_1402FB6A8;
    v17 = v15 + 40;
    if ( *(__int64 **)qword_1402FB6A8 != &ExpCallbackListHead )
      __fastfail(3u);
    *v17 = &ExpCallbackListHead;
    *((_QWORD *)v15 + 6) = v16;
    *v16 = v17;
    qword_1402FB6A8 = (__int64)(v15 + 40);
    ExpUnlockCallbackListExclusive((__int64)CurrentThread);
    inserted = ObInsertObject(v15, 0LL, 1u, 0, 0LL, &Handle);
    v5 = Handle;
    v13 = inserted;
  }
  if ( v13 >= 0 )
  {
LABEL_6:
    v13 = ObReferenceObjectByHandle(v5, 0, ExCallbackObjectType, 0, &Object, 0LL);
    ZwClose(v5);
    if ( v13 >= 0 )
      *CallbackObject = (PCALLBACK_OBJECT)Object;
  }
  return v13;
}
