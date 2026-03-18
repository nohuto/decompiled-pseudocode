/*
 * XREFs of NtSetIoCompletion @ 0x14042D030
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoSetIoCompletion @ 0x14042D0C8 (IoSetIoCompletion.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetIoCompletion(
        HANDLE IoCompletionPortHandle,
        PVOID CompletionKey,
        PVOID CompletionContext,
        NTSTATUS CompletionStatus,
        ULONG CompletionInformation)
{
  int v6; // esi
  int v7; // ebp
  int v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v6 = (int)CompletionContext;
  v7 = (int)CompletionKey;
  v8 = ObReferenceObjectByHandle(
         IoCompletionPortHandle,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v8 >= 0 )
  {
    v8 = IoSetIoCompletion((_DWORD)Object, v7, v6, CompletionStatus, *(__int64 *)&CompletionInformation, 1);
    ObfDereferenceObject(Object);
  }
  return v8;
}
