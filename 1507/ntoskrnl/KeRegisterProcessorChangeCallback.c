/*
 * XREFs of KeRegisterProcessorChangeCallback @ 0x1405B8714
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x140158AE8 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 */

PVOID __stdcall KeRegisterProcessorChangeCallback(
        PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext,
        ULONG Flags)
{
  char v5; // di
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  PVOID v10; // rsi
  unsigned __int8 v11; // bl
  signed __int32 v12; // eax
  unsigned int v14; // r14d
  __int64 *v15; // r15
  unsigned int v16; // ebx
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rcx
  NTSTATUS v23; // [rsp+20h] [rbp-49h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  int v27; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v28; // [rsp+74h] [rbp+Bh]
  int i; // [rsp+78h] [rbp+Fh]
  __int16 v30; // [rsp+7Ch] [rbp+13h]
  char v31; // [rsp+7Eh] [rbp+15h]
  char v32; // [rsp+7Fh] [rbp+16h]
  _BYTE v33[8]; // [rsp+80h] [rbp+17h] BYREF

  v5 = Flags;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\ProcessorAdd");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v23 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0);
  if ( v23 < 0 )
    return 0LL;
  v7 = KeAbPreAcquire((ULONG_PTR)&KiDynamicProcessorLock, 0LL, 0LL, v6);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&KiDynamicProcessorLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&KiDynamicProcessorLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  qword_140338E48 = (__int64)KeGetCurrentThread();
  dword_140338E70 = CurrentIrql;
  v10 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, CallbackContext);
  ObfDereferenceObject(CallbackObject);
  if ( v10 && (v5 & 1) != 0 )
  {
    v14 = KeNumberProcessors_0;
    v15 = KiProcessorBlock;
    v16 = 0;
    v32 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v17 = KiProcessorBlock;
      while ( 1 )
      {
        v18 = *v17;
        v28 = v16;
        v30 = *(unsigned __int8 *)(v18 + 1616);
        v19 = *(unsigned __int8 *)(v18 + 1617);
        i = 0;
        v31 = v19;
        HalGetProcessorIdByNtNumber(v16, v33);
        v27 = 0;
        v23 = 0;
        ((void (__fastcall *)(PVOID, int *, NTSTATUS *))CallbackFunction)(CallbackContext, &v27, &v23);
        v20 = v23;
        if ( v23 < 0 )
          break;
        ++v16;
        ++v17;
        if ( v16 >= v14 )
          goto LABEL_15;
      }
    }
    else
    {
      v20 = v23;
LABEL_15:
      if ( v20 >= 0 )
      {
        v27 = 1;
        goto LABEL_17;
      }
    }
    v27 = 2;
    ExUnregisterCallback(v10);
    v20 = v23;
    v10 = 0LL;
LABEL_17:
    v21 = 0;
    for ( i = v20; v21 < v16; ++v15 )
    {
      v22 = *v15;
      v28 = v21;
      v30 = *(unsigned __int8 *)(v22 + 1616);
      v31 = *(_BYTE *)(v22 + 1617);
      HalGetProcessorIdByNtNumber(v21, v33);
      ((void (__fastcall *)(PVOID, int *, NTSTATUS *))CallbackFunction)(CallbackContext, &v27, &v23);
      ++v21;
    }
  }
  qword_140338E48 = 0LL;
  v11 = dword_140338E70;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)&KiDynamicProcessorLock, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&KiDynamicProcessorLock, v12);
  __writecr8(v11);
  KeAbPostRelease((ULONG_PTR)&KiDynamicProcessorLock);
  return v10;
}
