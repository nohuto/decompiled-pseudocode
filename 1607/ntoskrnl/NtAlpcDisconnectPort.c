/*
 * XREFs of NtAlpcDisconnectPort @ 0x1404BADEC
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  NTSTATUS v4; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Flags;
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((char *)Object, v3);
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return v4;
}
