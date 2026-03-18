/*
 * XREFs of PspAssignProcessToJobList @ 0x1406C34A8
 * Callers:
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsAssignProcessToJobObject @ 0x14041A4C4 (PsAssignProcessToJobObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     EtwTraceJobAssignProcess @ 0x1406E3AB8 (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall PspAssignProcessToJobList(void *a1, __int64 a2, unsigned __int64 a3, KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rbx
  void *v9; // r14
  NTSTATUS v10; // eax
  int v11; // edi
  unsigned int v12; // eax
  __int64 v14; // [rsp+68h] [rbp+10h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v14 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !a3 )
    return 0LL;
  while ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) == 0 )
  {
    v9 = *(void **)(a2 + 8 * v5);
    v10 = ObReferenceObjectByHandle(v9, 1u, (POBJECT_TYPE)PsJobType, a4, &Object, 0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobAssignProcess(Object, a1, v9, (unsigned int)v10);
      return (unsigned int)v11;
    }
    v12 = PsAssignProcessToJobObject(Object, a1);
    v11 = v12;
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobAssignProcess(Object, a1, v9, v12);
    ObfDereferenceObject(Object);
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( ++v5 >= a3 )
      return 0LL;
    a2 = v14;
  }
  return 3221225547LL;
}
