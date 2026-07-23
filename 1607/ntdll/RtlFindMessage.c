/*
 * XREFs of RtlFindMessage @ 0x18002C790
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindMessageInTable @ 0x18002B9C0 (RtlFindMessageInTable.c)
 *     LdrpAccessResourceData @ 0x180030154 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  _QWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-38h] BYREF

  v9[0] = MessageTableId;
  v9[2] = MessageLanguageId;
  v9[1] = 1LL;
  v9[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)DllHandle, (unsigned int)v9, 4, 64, (__int64)v8);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(DllHandle);
    if ( result >= 0 )
      return RtlFindMessageInTable((int *)v8[1], MessageId, MessageEntry);
  }
  return result;
}
