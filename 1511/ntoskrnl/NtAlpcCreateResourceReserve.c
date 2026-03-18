/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x1404A7164
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 */

__int64 __fastcall NtAlpcCreateResourceReserve(HANDLE Handle, int a2, __int64 a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v8; // rcx
  NTSTATUS Reserve; // ebx
  PVOID v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    Reserve = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v8 = (_DWORD *)MmUserProbeAddress;
      *v8 = *v8;
    }
    Reserve = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( Reserve >= 0 )
    {
      v10 = Object;
      Reserve = AlpcpCreateReserve(Object);
      if ( Reserve >= 0 )
        *a4 = v13 | 0x80000000;
      ObfDereferenceObject(v10);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Reserve;
}
