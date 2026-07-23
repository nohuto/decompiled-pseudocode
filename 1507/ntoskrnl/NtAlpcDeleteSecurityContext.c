/*
 * XREFs of NtAlpcDeleteSecurityContext @ 0x140474F14
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

NTSTATUS __cdecl NtAlpcDeleteSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  PVOID v6; // rbp
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  signed __int64 v9; // rax
  bool v10; // cc
  ULONG_PTR BugCheckParameter4; // rax
  signed __int64 v12; // rdi
  ULONG_PTR v13; // rdi
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, ContextHandle, &AlpcSecurityType);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          if ( (unsigned __int8)AlpcpDeleteBlob(v7) )
          {
            v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0xFFFFFFFFFFFFFFFFuLL);
            v10 = v9 <= 1;
            BugCheckParameter4 = v9 - 1;
            if ( v10 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, v8, 0x21uLL, BugCheckParameter4);
              AlpcpDestroyBlob(v8);
            }
          }
          else
          {
            v5 = -1073741738;
          }
        }
        else
        {
          v5 = -1073741790;
        }
        v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v10 = v12 <= 1;
        v13 = v12 - 1;
        if ( v10 )
        {
          if ( v13 )
            KeBugCheckEx(0x18u, 0LL, v8, 0x21uLL, v13);
          AlpcpDestroyBlob(v8);
        }
        v6 = Object;
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
