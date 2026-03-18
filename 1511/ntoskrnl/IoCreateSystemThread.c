/*
 * XREFs of IoCreateSystemThread @ 0x14053FAE8
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

__int64 __fastcall IoCreateSystemThread(
        _WORD *Object,
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        ULONG_PTR BugCheckParameter2,
        __int64 a8)
{
  _QWORD *PoolWithTagPriority; // rax
  void *StartContext; // rbx
  NTSTATUS SystemThread; // esi

  if ( (unsigned __int16)(*Object - 3) > 1u )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)Object, 0LL);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            PagedPool,
                            0x18uLL,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x20206F49u);
  StartContext = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return 3221225626LL;
  *PoolWithTagPriority = Object;
  PoolWithTagPriority[1] = BugCheckParameter2;
  PoolWithTagPriority[2] = a8;
  ObfReferenceObject(Object);
  SystemThread = PsCreateSystemThread(
                   ThreadHandle,
                   DesiredAccess,
                   ObjectAttributes,
                   ProcessHandle,
                   ClientId,
                   IopThreadStart,
                   StartContext);
  if ( SystemThread < 0 )
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(StartContext, 0);
  }
  return (unsigned int)SystemThread;
}
