/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1403F7F80
 * Callers:
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1404FBB78 (DrvDbGetObjectDatabaseNode.c)
 *     PipAddBindingId @ 0x140567DB8 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x14062AD74 (PipAddRequestToEdge.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406B6B08 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1406B71B8 (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x1406B7834 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x1406B78B8 (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x1406B7A34 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x1407B427C (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14000A068 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
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
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
