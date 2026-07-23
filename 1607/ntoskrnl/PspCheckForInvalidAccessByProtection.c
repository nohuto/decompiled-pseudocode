/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1404A6F78
 * Callers:
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14045E744 (DbgkCopyProcessDebugPort.c)
 *     PspThreadOpen @ 0x1404A6EDC (PspThreadOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x140617E54 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140619878 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140619C2C (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1404A7060 (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
