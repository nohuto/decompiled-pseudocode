/*
 * XREFs of PspLockJobChain @ 0x14041ACD8
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspLockJobsAndProcessExclusive @ 0x14041A978 (PspLockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
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
    ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1064) + 56LL), 1u);
  }
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
