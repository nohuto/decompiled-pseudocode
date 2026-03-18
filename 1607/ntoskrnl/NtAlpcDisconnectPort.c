/*
 * XREFs of NtAlpcDisconnectPort @ 0x1404D77E8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     AlpcpDisconnectPort @ 0x140409FEC (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDisconnectPort(void *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  int v4; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((char *)Object, v3);
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
