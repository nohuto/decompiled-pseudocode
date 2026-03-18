/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1404BB248
 * Callers:
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14045F874 (DbgkCopyProcessDebugPort.c)
 *     PspThreadOpen @ 0x1404BB1AC (PspThreadOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x140617DA0 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x1406197C4 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140619B78 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1404BB330 (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  char v4; // al

  v3 = 0;
  v4 = a2;
  if ( (_BYTE)a1 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = v4;
    return (unsigned __int8)RtlTestProtectedAccess(a1, a2) == 0;
  }
  return v3;
}
