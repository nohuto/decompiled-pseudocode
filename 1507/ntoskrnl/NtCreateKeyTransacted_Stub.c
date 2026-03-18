/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x14071A5B4
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x1404DE7D8 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     ZwCreateKeyTransacted @ 0x140180450 (ZwCreateKeyTransacted.c)
 */

NTSTATUS __fastcall NtCreateKeyTransacted_Stub(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        __int64 a4,
        int a5,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  NTSTATUS (__stdcall *v8)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG); // r10

  if ( byte_1403862B0 )
  {
    v8 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_1403862A0;
  }
  else
  {
    v8 = ZwCreateKeyTransacted;
    byte_1403862B0 = 1;
    qword_1403862A0 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v8 )
    return v8(a1, a2, a3, 0, 0LL, CreateOptions, TransactionHandle, Disposition);
  else
    return -1073741702;
}
