/*
 * XREFs of ExCreateCallback @ 0x1404BF200
 * Callers:
 *     KeRegisterProcessorChangeCallback @ 0x140530BBC (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterBootDriverCallback @ 0x14054B03C (IoRegisterBootDriverCallback.c)
 *     VerifierExCreateCallback @ 0x1406C0370 (VerifierExCreateCallback.c)
 *     ExpInitializeCallbacks @ 0x14075B3F4 (ExpInitializeCallbacks.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     PopUmpoInitializeChannel @ 0x14076F050 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x14076FF8C (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x140771C70 (IopInitializeSessionNotifications.c)
 * Callees:
 *     ExpLockCallbackListExclusive @ 0x14013F438 (ExpLockCallbackListExclusive.c)
 *     ExpUnlockCallbackListExclusive @ 0x14013F70C (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rsi
  __m128i v6; // xmm1
  __int128 v8; // xmm0
  NTSTATUS inserted; // ebx
  char *v11; // rbx
  __int64 **v12; // rcx
  PVOID Object; // [rsp+58h] [rbp+7h] BYREF
  PVOID v15; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v16; // [rsp+68h] [rbp+17h] BYREF
  __m128i v17; // [rsp+78h] [rbp+27h]
  __int128 v18; // [rsp+88h] [rbp+37h]
  HANDLE Handle; // [rsp+C0h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = *(__m128i *)&ObjectAttributes->ObjectName;
  Handle = 0LL;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  Object = 0LL;
  v17 = v6;
  v16 = v8;
  v18 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v17.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) | 0x200;
  if ( v6.m128i_i64[0] )
    inserted = ObOpenObjectByName((__int64)&v16, ExCallbackObjectType, 0, 0LL, 0, 0LL, &Handle);
  else
    inserted = -1073741823;
  if ( inserted < 0 )
  {
    if ( Create )
    {
      inserted = ObCreateObject(0, ExCallbackObjectType, (__int64)&v16, 0, 0, 56, 0, 0, &Object);
      if ( inserted < 0 )
        return inserted;
      v11 = (char *)Object;
      *(_DWORD *)Object = 1819042115;
      v11[32] = AllowMultipleCallbacks;
      *((_QWORD *)v11 + 3) = v11 + 16;
      *((_QWORD *)v11 + 2) = v11 + 16;
      *((_QWORD *)v11 + 1) = 0LL;
      ExpLockCallbackListExclusive((__int64)CurrentThread);
      v12 = (__int64 **)qword_1402D62A8;
      *((_QWORD *)v11 + 6) = qword_1402D62A8;
      *((_QWORD *)v11 + 5) = &ExpCallbackListHead;
      if ( *v12 != &ExpCallbackListHead )
        __fastfail(3u);
      *v12 = (__int64 *)(v11 + 40);
      qword_1402D62A8 = (__int64)(v11 + 40);
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObject(v11, 0LL, 1u, 0, 0LL, &Handle);
    }
    if ( inserted < 0 )
      return inserted;
  }
  inserted = ObReferenceObjectByHandle(Handle, 0, ExCallbackObjectType, 0, &v15, 0LL);
  ZwClose(Handle);
  if ( inserted >= 0 )
    *CallbackObject = (PCALLBACK_OBJECT)v15;
  return inserted;
}
