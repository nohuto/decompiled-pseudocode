/*
 * XREFs of RtlFindMessage @ 0x1800659D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x180018AC0 (LdrpAccessResourceData.c)
 *     RtlFindMessageInTable @ 0x180065A84 (RtlFindMessageInTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  unsigned __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  ULONG *v9; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = MessageTableId;
  v10[2] = MessageLanguageId;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U(DllHandle, (__int64)v10, 4u, 0x40u, (__int64)&v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData((__int64)DllHandle, v9, &v8, 0LL);
    if ( result >= 0 )
      return RtlFindMessageInTable(v8, MessageId, MessageEntry);
  }
  return result;
}
