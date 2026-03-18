/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x1404B61F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 */

__int64 __fastcall NtAlpcCreateResourceReserve(HANDLE Handle, int a2, unsigned __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int64 v11; // rdx
  PVOID v12; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v10 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v9 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
    v10 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v10 >= 0 )
    {
      v11 = a3;
      v12 = Object;
      v10 = AlpcpCreateReserve((unsigned __int64 *)Object, v11, &v15);
      if ( v10 >= 0 )
        *a4 = v15 | 0x80000000;
      ObfDereferenceObject(v12);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
