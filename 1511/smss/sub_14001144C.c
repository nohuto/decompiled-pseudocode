/*
 * XREFs of sub_14001144C @ 0x14001144C
 * Callers:
 *     sub_14000982C @ 0x14000982C (sub_14000982C.c)
 * Callees:
 *     <none>
 */

NTSTATUS sub_14001144C()
{
  struct _UNICODE_STRING v1; // [rsp+30h] [rbp-18h] BYREF
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)&v1.Length = 2228256;
  v1.Buffer = L"PagefileTooSmall";
  v2 = MEMORY[0x7FFE0014];
  return NtSetValueKey(Handle, &v1, 0, 0xBu, &v2, 8u);
}
