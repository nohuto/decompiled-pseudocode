/*
 * XREFs of PspEstablishDfssHierarchy @ 0x140517E8C
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeInsertSchedulingGroup @ 0x1400C46B0 (KeInsertSchedulingGroup.c)
 *     KeRemoveSchedulingGroup @ 0x1400C4CFC (KeRemoveSchedulingGroup.c)
 *     MmGetSessionObjectByProcess @ 0x14012E640 (MmGetSessionObjectByProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14044C744 (MmGetSessionSchedulingGroupByProcess.c)
 */

LONG_PTR __fastcall PspEstablishDfssHierarchy(__int64 a1, struct _KPROCESS *a2, int a3)
{
  LONG_PTR result; // rax
  __int64 SessionSchedulingGroupByProcess; // rdi
  struct _KPROCESS *v6; // rcx
  int v7; // r8d
  void *v8; // rsi
  void *v9; // rcx

  result = (unsigned int)(a3 - 1);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(a2);
    result = MmGetSessionObjectByProcess(v6);
    v8 = (void *)result;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1072) + 1000LL) || *(_QWORD *)(a1 + 1008) == SessionSchedulingGroupByProcess )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1072);
        if ( result == a1 && *(_QWORD *)(a1 + 1000) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1104) != v8 )
        {
          KeRemoveSchedulingGroup(*(unsigned __int16 **)(a1 + 1008));
          KeInsertSchedulingGroup(
            *(_QWORD *)(a1 + 1000) + 128LL,
            *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 128LL),
            SessionSchedulingGroupByProcess);
          v9 = *(void **)(a1 + 1104);
          if ( v9 )
            ObfDereferenceObject(v9);
          *(_QWORD *)(a1 + 1104) = v8;
          return ObfReferenceObject(v8);
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 1072) + 1008LL) != SessionSchedulingGroupByProcess )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1072) + 1008LL) = SessionSchedulingGroupByProcess;
        result = *(_QWORD *)(a1 + 1072);
        *(_QWORD *)(result + 1104) = v8;
      }
      *(_QWORD *)(a1 + 1008) = SessionSchedulingGroupByProcess;
    }
  }
  return result;
}
