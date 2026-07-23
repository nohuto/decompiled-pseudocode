/*
 * XREFs of PspUnlockJobChain @ 0x140468D3C
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1404D5B7C (PspUnlockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1096) )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1056) + 56LL));
    v4 = *(_QWORD *)(a1 + 1096);
    if ( v4 > 1 )
    {
      if ( v4 > 2 )
      {
        v5 = 0LL;
        do
          ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 8 * v5++) + 56LL));
        while ( v5 < *(_QWORD *)(a1 + 1096) - 2LL );
      }
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL));
    }
  }
  if ( a2 )
    KiLeaveGuardedRegionUnsafe(a2);
}
