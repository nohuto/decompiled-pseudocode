/*
 * XREFs of RtlQueryWnfStateData @ 0x180080DD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A8E10 (ZwQueryWnfStateData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800AADB0 (_alloca_probe.c)
 *     RtlResetStackOverflow @ 0x1800D98B8 (RtlResetStackOverflow.c)
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
  __int64 v10; // rdx
  _BYTE Buffer[4096]; // [rsp+20h] [rbp-1000h] BYREF
  ULONG BufferSize; // [rsp+1020h] [rbp+0h] BYREF
  ULONG ChangeStampa; // [rsp+1024h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1028h] [rbp+8h]
  WNF_STATE_NAME StateNamea; // [rsp+1030h] [rbp+10h] BYREF

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
