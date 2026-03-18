/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1404FEFE8
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x1404DDE94 (DrvDbGetObjectDatabaseNode.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     PipAddBindingId @ 0x1405B19D0 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x14067B938 (PipAddRequestToEdge.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406F880C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1406F8EF0 (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x1406F9624 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x1406F96A8 (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x1406F9818 (ExpCovResetInformation.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x140752CC0 (VerifierRtlDuplicateUnicodeString.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x1407DF548 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x1400EDE88 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  unsigned __int16 Length; // di
  wchar_t *v7; // rsi
  NTSTATUS result; // eax
  unsigned __int16 v9; // bx
  wchar_t *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) == 0 && !Length )
    v9 = 0;
  if ( !v9 )
  {
LABEL_19:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
    goto LABEL_19;
  }
  return -1073741801;
}
