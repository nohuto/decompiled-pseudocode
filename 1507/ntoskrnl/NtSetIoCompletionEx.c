/*
 * XREFs of NtSetIoCompletionEx @ 0x140674B2C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx @ 0x14012CB98 (IoSetIoCompletionEx.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  NTSTATUS v9; // ebx
  signed __int32 v10; // eax
  PVOID v11; // rdi
  _DWORD *v12; // rsi
  PVOID v14; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  v9 = ObReferenceObjectByHandle(
         IoCompletionHandle,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v9 < 0 )
    return v9;
  v9 = ObReferenceObjectByHandle(
         IoCompletionPacketHandle,
         2u,
         ObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v14,
         0LL);
  if ( v9 < 0 )
  {
    v11 = Object;
  }
  else
  {
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
    v11 = Object;
    v12 = v14;
    if ( v10 )
    {
      v9 = -1073741584;
      goto LABEL_7;
    }
    v9 = IoSetIoCompletionEx(
           (__int64)Object,
           (__int64)KeyContext,
           (__int64)ApcContext,
           IoStatus,
           IoStatusInformation,
           0,
           (__int64)v14 + 8);
    if ( v9 < 0 )
    {
      *v12 = 0;
LABEL_7:
      if ( v12 )
        ObfDereferenceObject(v12);
    }
  }
  if ( v11 )
    ObfDereferenceObject(v11);
  return v9;
}
