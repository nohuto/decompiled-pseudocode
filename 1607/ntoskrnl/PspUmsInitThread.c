/*
 * XREFs of PspUmsInitThread @ 0x14067F6A4
 * Callers:
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     KeInitializeUmsThread @ 0x1406505D4 (KeInitializeUmsThread.c)
 *     KeSetUmsThreadKernelLock @ 0x140650708 (KeSetUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x140650830 (KeUpdateUmsThreadState.c)
 *     PspUmsInitializeContext @ 0x14067F780 (PspUmsInitializeContext.c)
 */

NTSTATUS __fastcall PspUmsInitThread(__int64 a1, KPROCESSOR_MODE a2, __int64 a3, __int64 a4)
{
  void *v6; // rbx
  __int64 *v7; // rax
  void *v8; // rsi
  __int64 v9; // rdi
  NTSTATUS result; // eax
  int v11; // edi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v6 = *(void **)(a3 + 336);
  v7 = *(__int64 **)(a3 + 344);
  v8 = (void *)v7[1];
  v9 = *v7;
  *(_QWORD *)(a4 + 5280) = v6;
  result = PspUmsInitializeContext(v6);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByHandle(v8, 2u, (POBJECT_TYPE)ExEventObjectType, a2, &Object, 0LL);
    if ( result >= 0 )
    {
      v11 = KeInitializeUmsThread(a1, 1, v9, (__int64)Object, (__int64)v6);
      if ( v11 >= 0 )
      {
        return 0;
      }
      else
      {
        KeSetUmsThreadKernelLock((__int64)v6, 0LL);
        KeUpdateUmsThreadState((__int64)v6, 2, 0);
        ObfDereferenceObject(Object);
        return v11;
      }
    }
  }
  return result;
}
