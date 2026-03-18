/*
 * XREFs of PsReferenceImpersonationToken @ 0x1404978B0
 * Callers:
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     CmpBuildAdminInformation @ 0x140497598 (CmpBuildAdminInformation.c)
 *     VerifierPsReferenceImpersonationToken @ 0x1406C0C1C (VerifierPsReferenceImpersonationToken.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  void *v8; // rbx
  struct _KTHREAD *CurrentThread; // rbp

  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread);
  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 8) != 0 )
  {
    v8 = Thread[1].WaitBlock[1].Thread;
    if ( v8 )
    {
      *CopyOnOpen = 0;
    }
    else
    {
      v8 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      *CopyOnOpen = (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x100) != 0;
    }
    ObfReferenceObject(v8);
    *ImpersonationLevel = Thread[1].SystemCallNumber & 3;
    *EffectiveOnly = (Thread[1].SystemCallNumber & 4) != 0;
  }
  else
  {
    v8 = 0LL;
  }
  PspUnlockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread);
  return v8;
}
