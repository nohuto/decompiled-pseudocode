/*
 * XREFs of KeRegisterProcessorChangeCallback @ 0x1405785A4
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExRegisterCallback @ 0x1401302A4 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x140131CC8 (ExUnregisterCallback.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 */

PVOID __stdcall KeRegisterProcessorChangeCallback(
        PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext,
        ULONG Flags)
{
  char v5; // di
  unsigned int v6; // ebx
  PVOID v7; // rsi
  unsigned int v9; // r15d
  __int64 *v10; // r12
  unsigned int v11; // edi
  __int64 *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  PVOID v15; // rsi
  __int64 v16; // rcx
  NTSTATUS v17; // [rsp+20h] [rbp-59h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-51h] BYREF
  PVOID v19; // [rsp+30h] [rbp-49h]
  PVOID v20; // [rsp+38h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  int v23; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v24; // [rsp+84h] [rbp+Bh]
  int v25; // [rsp+88h] [rbp+Fh]
  __int16 v26; // [rsp+8Ch] [rbp+13h]
  char v27; // [rsp+8Eh] [rbp+15h]
  char v28; // [rsp+8Fh] [rbp+16h]
  _BYTE v29[8]; // [rsp+90h] [rbp+17h] BYREF

  v19 = CallbackContext;
  v5 = Flags;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\ProcessorAdd");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  v6 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0);
  if ( v17 >= 0 )
  {
    ExAcquireFastMutex(&KiDynamicProcessorLock);
    v7 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, CallbackContext);
    v20 = v7;
    ObfDereferenceObject(CallbackObject);
    if ( !v7 || (v5 & 1) == 0 )
    {
LABEL_4:
      KeReleaseGuardedMutex(&KiDynamicProcessorLock);
      return v7;
    }
    v9 = KeNumberProcessors_0;
    v10 = KiProcessorBlock;
    v28 = 0;
    v11 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v12 = KiProcessorBlock;
      while ( 1 )
      {
        v13 = *v12;
        v24 = v11;
        v26 = *(unsigned __int8 *)(v13 + 1616);
        v27 = *(_BYTE *)(v13 + 1617);
        v25 = 0;
        HalGetProcessorIdByNtNumber(v11, v29);
        v23 = 0;
        v17 = 0;
        ((void (__fastcall *)(PVOID, int *, NTSTATUS *))CallbackFunction)(v19, &v23, &v17);
        v14 = v17;
        if ( v17 < 0 )
          break;
        ++v11;
        ++v12;
        if ( v11 >= v9 )
          goto LABEL_9;
      }
    }
    else
    {
      v14 = v17;
LABEL_9:
      if ( v14 >= 0 )
      {
        v23 = 1;
        goto LABEL_11;
      }
    }
    v23 = 2;
    ExUnregisterCallback(v7);
    v14 = v17;
    v7 = 0LL;
    v20 = 0LL;
LABEL_11:
    v25 = v14;
    if ( v11 )
    {
      v15 = v19;
      do
      {
        v16 = *v10;
        v24 = v6;
        v26 = *(unsigned __int8 *)(v16 + 1616);
        v27 = *(_BYTE *)(v16 + 1617);
        HalGetProcessorIdByNtNumber(v6, v29);
        ((void (__fastcall *)(PVOID, int *, NTSTATUS *))CallbackFunction)(v15, &v23, &v17);
        ++v6;
        ++v10;
      }
      while ( v6 < v11 );
      v7 = v20;
    }
    goto LABEL_4;
  }
  return 0LL;
}
