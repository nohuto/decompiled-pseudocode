/*
 * XREFs of NtCreateKeyedEvent @ 0x1405B8A1C
 * Callers:
 *     <none>
 * Callees:
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateKeyedEvent(
        PHANDLE OutHandle,
        ACCESS_MASK AccessMask,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  PHANDLE v5; // rbx
  unsigned __int8 v6; // r10
  NTSTATUS result; // eax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *Object; // [rsp+58h] [rbp-30h]
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF

  v5 = OutHandle;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( v6 )
  {
    if ( ((unsigned __int8)OutHandle & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)OutHandle >= MmUserProbeAddress )
      LODWORD(OutHandle) = MmUserProbeAddress;
  }
  *v5 = 0LL;
  if ( Flags )
    return -1073741582;
  LOBYTE(OutHandle) = v6;
  result = ObCreateObject((int)OutHandle, (int)ExpKeyedEventObjectType, (int)ObjectAttributes, v6);
  if ( result >= 0 )
  {
    v8 = Object + 1;
    v9 = 64LL;
    do
    {
      *(v8 - 1) = 0LL;
      v8[1] = v8;
      *v8 = v8;
      v8 += 3;
      --v9;
    }
    while ( v9 );
    result = ObInsertObject(Object, 0LL, AccessMask, 0, 0LL, &Handle);
    if ( result >= 0 )
      *v5 = Handle;
  }
  return result;
}
