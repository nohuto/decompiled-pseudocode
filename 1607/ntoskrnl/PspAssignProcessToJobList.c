/*
 * XREFs of PspAssignProcessToJobList @ 0x14067F418
 * Callers:
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PsAssignProcessToJobObject @ 0x1404D597C (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x1406A1980 (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall PspAssignProcessToJobList(ULONG_PTR a1, __int64 a2, unsigned __int64 a3, KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdi
  NTSTATUS v10; // eax
  int v11; // ebx
  unsigned int v12; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !a3 )
    return 0LL;
  while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
  {
    v10 = ObReferenceObjectByHandle(*(HANDLE *)(a2 + 8 * v5), 1u, (POBJECT_TYPE)PsJobType, a4, &Object, 0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobAssignProcess(Object, a1, (unsigned int)v10);
      return (unsigned int)v11;
    }
    v12 = PsAssignProcessToJobObject(Object, a1);
    v11 = v12;
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobAssignProcess(Object, a1, v12);
    ObfDereferenceObject(Object);
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( ++v5 >= a3 )
      return 0LL;
  }
  return 3221225547LL;
}
