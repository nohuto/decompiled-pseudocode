/*
 * XREFs of RtlQueryWnfStateDataWithExplicitScope @ 0x1800772B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x180094D90 (ZwQueryWnfStateData.c)
 *     _alloca_probe @ 0x180096610 (_alloca_probe.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 */

NTSTATUS __fastcall RtlQueryWnfStateDataWithExplicitScope(
        ULONG *a1,
        WNF_STATE_NAME a2,
        const void *a3,
        __int64 (__fastcall *a4)(WNF_STATE_NAME, _QWORD, const WNF_TYPE_ID *, __int64, _BYTE *, ULONG),
        __int64 a5,
        const WNF_TYPE_ID *TypeId)
{
  void *v8; // rsp
  NTSTATUS result; // eax
  ULONG v10; // ebx
  _BYTE Buffer[4096]; // [rsp+10h] [rbp-1000h] BYREF
  ULONG BufferSize; // [rsp+1010h] [rbp+0h] BYREF
  ULONG ChangeStamp; // [rsp+1014h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1018h] [rbp+8h]
  WNF_STATE_NAME StateName; // [rsp+1020h] [rbp+10h] BYREF

  StateName = a2;
  v8 = alloca(4096LL);
  v14 = Buffer;
  BufferSize = 4096;
  result = ZwQueryWnfStateData(&StateName, TypeId, a3, &ChangeStamp, Buffer, &BufferSize);
  if ( result >= 0 )
  {
    v10 = ChangeStamp;
    *a1 = ChangeStamp;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))a4)(
             StateName,
             v10,
             TypeId,
             a5,
             Buffer,
             BufferSize);
  }
  return result;
}
