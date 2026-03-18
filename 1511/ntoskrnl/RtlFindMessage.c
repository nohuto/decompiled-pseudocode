/*
 * XREFs of RtlFindMessage @ 0x1404A12D4
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     PiGetDefaultMessageString @ 0x14053ED4C (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     ResFwFindMessage @ 0x1406DC348 (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlFindMessageInTable @ 0x1400DD648 (RtlFindMessageInTable.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x1404A1380 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1404A1680 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall RtlFindMessage(
        PVOID BaseAddress,
        ULONG Type,
        ULONG Language,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry)
{
  NTSTATUS result; // eax
  int *v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = Type;
  v10[2] = Language;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)BaseAddress, (unsigned int)v10, 4, 64, (__int64)&v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(BaseAddress);
    if ( result >= 0 )
      return RtlFindMessageInTable(v8, MessageId, MessageResourceEntry);
  }
  return result;
}
