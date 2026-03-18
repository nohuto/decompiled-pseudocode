/*
 * XREFs of RtlFindMessage @ 0x140463394
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     PiGetDefaultMessageString @ 0x1405B298C (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     ResFwFindMessage @ 0x14075F390 (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlFindMessageInTable @ 0x14002A9C8 (RtlFindMessageInTable.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x140462A10 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x140463440 (LdrpAccessResourceData.c)
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
  __int64 v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = Type;
  v10[2] = Language;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U((char *)BaseAddress, v10, 4u, 64, &v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(BaseAddress);
    if ( result >= 0 )
      return RtlFindMessageInTable(v8, MessageId, MessageResourceEntry);
  }
  return result;
}
