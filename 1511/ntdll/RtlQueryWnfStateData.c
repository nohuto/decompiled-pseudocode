/*
 * XREFs of RtlQueryWnfStateData @ 0x18007A910
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A7A30 (ZwQueryWnfStateData.c)
 *     _alloca_probe @ 0x1800A99F0 (_alloca_probe.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 */

NTSTATUS __cdecl RtlQueryWnfStateData(
        PWNF_CHANGE_STAMP ChangeStamp,
        WNF_STATE_NAME StateName,
        PWNF_USER_CALLBACK Callback,
        PVOID CallbackContext,
        PWNF_TYPE_ID TypeId)
{
  void *v8; // rsp
  NTSTATUS result; // eax
  ULONG v10; // ebx
  _BYTE Buffer[4096]; // [rsp+10h] [rbp-1000h] BYREF
  ULONG BufferSize; // [rsp+1010h] [rbp+0h] BYREF
  ULONG ChangeStampa; // [rsp+1014h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1018h] [rbp+8h]
  WNF_STATE_NAME StateNamea; // [rsp+1020h] [rbp+10h] BYREF

  StateNamea = StateName;
  v8 = alloca(4096LL);
  v14 = Buffer;
  BufferSize = 4096;
  result = ZwQueryWnfStateData(&StateNamea, TypeId, 0LL, &ChangeStampa, Buffer, &BufferSize);
  if ( result >= 0 )
  {
    v10 = ChangeStampa;
    *ChangeStamp = ChangeStampa;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))Callback)(
             StateNamea,
             v10,
             TypeId,
             CallbackContext,
             Buffer,
             BufferSize);
  }
  return result;
}
