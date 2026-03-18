/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140096778
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     NtGetNextProcess @ 0x1404F3D3C (NtGetNextProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140517F80 (PspSetProcessAffinityUpdateMode.c)
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 728);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe(a2);
}
