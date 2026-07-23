/*
 * XREFs of PspLockJobChain @ 0x140468DBC
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspLockJobsAndProcessExclusive @ 0x1404D5A20 (PspLockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobChain(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rdi

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v3 = *(_QWORD *)(a1 + 1096);
  if ( v3 )
  {
    if ( v3 > 1 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL), 1u);
      v5 = *(_QWORD *)(a1 + 1096);
      if ( v5 > 2 )
      {
        for ( i = v5 - 2; i; --i )
          ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * i - 8) + 56LL), 1u);
      }
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1056) + 56LL), 1u);
  }
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
