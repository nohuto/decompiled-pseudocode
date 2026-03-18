/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14067D92C
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401FAAFC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 v8; // rbp
  unsigned int *v9; // rax
  unsigned __int64 v10; // rax
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v6 = 0LL;
  v8 = a2;
  while ( 1 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(v6, a2, a3, a4);
    v12 = NextProcess;
    if ( !NextProcess )
      break;
    v9 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v9 )
    {
      v14[0] = a1;
      v14[1] = v12;
      v14[2] = v8;
      v14[3] = a3;
      v4 = (unsigned __int8)ExEnumHandleTable(
                              v9,
                              (__int64 (__fastcall *)(unsigned int *, __int64 *, __int64, __int64))PnpHandleProcessWalkWorker,
                              (__int64)v14,
                              0LL);
      _m_prefetchw(&v12[92]);
      v10 = v12[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
      a2 = v10 - 2;
      if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&v12[92], v10 - 2, v10) )
        ExfReleaseRundownProtection(v12 + 92);
      if ( v4 )
      {
        ObfDereferenceObjectWithTag(v12, 0x6E457350u);
        return v4;
      }
    }
    v6 = v12;
  }
  return v4;
}
