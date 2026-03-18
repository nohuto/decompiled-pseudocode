/*
 * XREFs of NtRemoveIoCompletion @ 0x14042E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *CompletionKey,
        PVOID *CompletionContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // di
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _DWORD *v12; // rax
  __int64 *v13; // rax
  LARGE_INTEGER *v14; // rbx
  NTSTATUS result; // eax
  NTSTATUS v16; // r14d
  LARGE_INTEGER *v17; // [rsp+48h] [rbp-70h]
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  ULONG v20[4]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-48h] BYREF
  __int128 v22; // [rsp+80h] [rbp-38h]
  PLIST_ENTRY v23; // [rsp+90h] [rbp-28h] BYREF

  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = CompletionContext;
    if ( (unsigned __int64)CompletionContext >= MmUserProbeAddress )
      v10 = (_QWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = CompletionKey;
    if ( (unsigned __int64)CompletionKey >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v12 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v13 = (__int64 *)Timeout;
    if ( Timeout )
    {
      v17 = (LARGE_INTEGER *)&v18;
      if ( (unsigned __int64)Timeout >= MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v18 = *v13;
    }
    v14 = v17;
  }
  else
  {
    v14 = 0LL;
    if ( Timeout )
      v14 = Timeout;
  }
  result = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = (unsigned int)IoRemoveIoCompletion(
                          (struct _KQUEUE *)Object,
                          (__int64)v21,
                          &v23,
                          1u,
                          v20,
                          PreviousMode,
                          v14,
                          0);
    ObfDereferenceObject(Object);
    if ( !v16 )
    {
      *CompletionKey = (PVOID)v21[0];
      *CompletionContext = (PVOID)v21[1];
      *(_OWORD *)&IoStatusBlock->Status = v22;
    }
    return v16;
  }
  return result;
}
