/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x1404A05D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 */

NTSTATUS __cdecl NtAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  SIZE_T v11; // rdx
  PVOID v12; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v10 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v9 = (__int64)ResourceId;
      if ( (unsigned __int64)ResourceId >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
    v10 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v10 >= 0 )
    {
      v11 = MessageSize;
      v12 = Object;
      v10 = AlpcpCreateReserve((unsigned __int64 *)Object, v11, &v15);
      if ( v10 >= 0 )
        *(_DWORD *)ResourceId = v15 | 0x80000000;
      ObfDereferenceObject(v12);
    }
  }
  KeLeaveCriticalRegion();
  return v10;
}
