/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x1400AA9B4
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x140459688 (PspDisablePrimaryTokenExchange.c)
 *     NtGetNextProcess @ 0x14053F498 (NtGetNextProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054C7D4 (PspSetProcessAffinityUpdateMode.c)
 *     PspAssignPrimaryToken @ 0x14067EFDC (PspAssignPrimaryToken.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x1400AA9EC (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v5 = (_QWORD *)(a1 + 728);
  _InterlockedOr(v7, 0);
  if ( (*v5 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v5);
  return KiLeaveCriticalRegionUnsafe(a2, a2, a3, a4);
}
