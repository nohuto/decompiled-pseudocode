/*
 * XREFs of NtRemoveIoCompletion @ 0x140522040
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *CompletionKey,
        PVOID *CompletionContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // si
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _DWORD *v12; // rcx
  __int64 *v13; // rcx
  LARGE_INTEGER *v14; // rbx
  NTSTATUS result; // eax
  NTSTATUS v16; // edi
  ULONG v17; // [rsp+44h] [rbp-64h] BYREF
  LARGE_INTEGER *v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  PLIST_ENTRY v21; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-40h] BYREF
  __int128 v23; // [rsp+78h] [rbp-30h]

  v18 = 0LL;
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
      v18 = (LARGE_INTEGER *)&v19;
      if ( (unsigned __int64)Timeout >= MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v19 = *v13;
    }
    v14 = v18;
  }
  else
  {
    v14 = v18;
    if ( Timeout )
      v14 = Timeout;
  }
  result = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = (unsigned int)IoRemoveIoCompletion(
                          (struct _KQUEUE *)Object,
                          (__int64)v22,
                          &v21,
                          1u,
                          &v17,
                          PreviousMode,
                          v14,
                          0);
    ObfDereferenceObject(Object);
    if ( !v16 )
    {
      *CompletionKey = (PVOID)v22[0];
      *CompletionContext = (PVOID)v22[1];
      *(_OWORD *)&IoStatusBlock->Status = v23;
    }
    return v16;
  }
  return result;
}
