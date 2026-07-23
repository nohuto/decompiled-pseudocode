/*
 * XREFs of RtlFindMessage @ 0x18006FF90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     RtlFindMessageInTable @ 0x180070044 (RtlFindMessageInTable.c)
 *     LdrpAccessResourceData @ 0x18007031C (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = MessageTableId;
  v10[2] = MessageLanguageId;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U(DllHandle, (__int64)v10, 4LL, 0x40u, (__int64)&v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(DllHandle);
    if ( result >= 0 )
      return RtlFindMessageInTable(v8, MessageId, MessageEntry);
  }
  return result;
}
