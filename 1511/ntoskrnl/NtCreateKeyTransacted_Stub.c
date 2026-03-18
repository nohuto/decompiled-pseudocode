/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x14069A5F4
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x140444F38 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     ZwCreateKeyTransacted @ 0x140151AA0 (ZwCreateKeyTransacted.c)
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

  if ( byte_1403352B8 )
  {
    v8 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_1403352A8;
  }
  else
  {
    v8 = ZwCreateKeyTransacted;
    byte_1403352B8 = 1;
    qword_1403352A8 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v8 )
    return v8(a1, a2, a3, 0, 0LL, CreateOptions, TransactionHandle, Disposition);
  else
    return -1073741702;
}
