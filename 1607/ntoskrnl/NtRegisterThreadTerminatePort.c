/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x14052E198
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRegisterThreadTerminatePort(HANDLE TerminationPort)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = ObReferenceObjectByHandle(TerminationPort, 1u, LpcPortObjectType, CurrentThread->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x70547350u);
    v4 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      PoolWithQuotaTag[1] = Object;
      *PoolWithQuotaTag = CurrentThread[1].StackLimit;
      result = 0;
      CurrentThread[1].StackLimit = v4;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741670;
    }
  }
  return result;
}
