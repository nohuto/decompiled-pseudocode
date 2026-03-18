/*
 * XREFs of PspUnlockJobChain @ 0x1403E9574
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1403E8B34 (PspImplicitAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140486FF4 (PspUnlockJobsAndProcessExclusive.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1096) )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1064) + 56LL));
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
