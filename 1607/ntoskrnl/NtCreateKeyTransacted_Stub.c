/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x1406E09D8
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x1404DD8A0 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     ZwCreateKeyTransacted @ 0x14015B690 (ZwCreateKeyTransacted.c)
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

  if ( byte_1403582C0 )
  {
    v8 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_1403582B0;
  }
  else
  {
    v8 = ZwCreateKeyTransacted;
    byte_1403582C0 = 1;
    qword_1403582B0 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v8 )
    return v8(a1, a2, a3, 0, 0LL, CreateOptions, TransactionHandle, Disposition);
  else
    return -1073741702;
}
