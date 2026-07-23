/*
 * XREFs of NtSetIoCompletion @ 0x140470834
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetIoCompletion(
        HANDLE IoCompletionPortHandle,
        PVOID CompletionKey,
        PVOID CompletionContext,
        NTSTATUS CompletionStatus,
        ULONG CompletionInformation)
{
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v8 = ObReferenceObjectByHandle(
         IoCompletionPortHandle,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v8 >= 0 )
  {
    v8 = IoSetIoCompletionEx2(
           (__int64)Object,
           (__int64)CompletionKey,
           (__int64)CompletionContext,
           CompletionStatus,
           *(__int64 *)&CompletionInformation,
           1u,
           0LL,
           0);
    ObfDereferenceObject(Object);
  }
  return v8;
}
