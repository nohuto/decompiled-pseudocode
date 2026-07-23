/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x14069F384
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebx
  int v5; // esi
  __int64 v6; // r9
  ULONG_PTR v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rbx
  signed __int64 v12; // rax
  bool v13; // cc
  ULONG_PTR BugCheckParameter4; // rax
  signed __int64 v15; // rdi
  ULONG_PTR v16; // rdi
  struct _KTHREAD *v17; // rdx
  __int16 v18; // ax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)ResourceId;
  --CurrentThread->KernelApcDisable;
  if ( Flags || (int)ResourceId >= 0 )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v7 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), v4 & 0x7FFFFFFF, AlpcReserveType, v6);
      v11 = v7;
      if ( v7 )
      {
        if ( AlpcpDeleteBlob(v7, v8, v9, v10) )
        {
          v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), 0xFFFFFFFFFFFFFFFFuLL);
          v13 = v12 <= 1;
          BugCheckParameter4 = v12 - 1;
          if ( v13 )
          {
            if ( BugCheckParameter4 )
              KeBugCheckEx(0x18u, 0LL, v11, 0x21uLL, BugCheckParameter4);
            AlpcpDestroyBlob(v11);
          }
        }
        else
        {
          v5 = -1073741738;
        }
        v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v13 = v15 <= 1;
        v16 = v15 - 1;
        if ( v13 )
        {
          if ( v16 )
            KeBugCheckEx(0x18u, 0LL, v11, 0x21uLL, v16);
          AlpcpDestroyBlob(v11);
        }
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(Object);
    }
  }
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
