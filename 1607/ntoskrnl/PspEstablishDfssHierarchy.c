/*
 * XREFs of PspEstablishDfssHierarchy @ 0x14054C574
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeRemoveSchedulingGroup @ 0x1400A47E8 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x1400A498C (KeInsertSchedulingGroup.c)
 *     MmGetSessionObjectByProcess @ 0x14013557C (MmGetSessionObjectByProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14046DD24 (MmGetSessionSchedulingGroupByProcess.c)
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
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1072) + 992LL) || *(_QWORD *)(a1 + 1000) == SessionSchedulingGroupByProcess )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1072);
        if ( result == a1 && *(_QWORD *)(a1 + 992) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1104) != v8 )
        {
          KeRemoveSchedulingGroup(*(unsigned __int16 **)(a1 + 1000));
          KeInsertSchedulingGroup(
            *(_QWORD *)(a1 + 992) + 128LL,
            *(_QWORD *)(*(_QWORD *)(a1 + 992) + 128LL),
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
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 1072) + 1000LL) != SessionSchedulingGroupByProcess )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1072) + 1000LL) = SessionSchedulingGroupByProcess;
        result = *(_QWORD *)(a1 + 1072);
        *(_QWORD *)(result + 1104) = v8;
      }
      *(_QWORD *)(a1 + 1000) = SessionSchedulingGroupByProcess;
    }
  }
  return result;
}
