/*
 * XREFs of NtCreateKeyedEvent @ 0x140542444
 * Callers:
 *     <none>
 * Callees:
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateKeyedEvent(
        PHANDLE OutHandle,
        ACCESS_MASK AccessMask,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  char PreviousMode; // r10
  NTSTATUS result; // eax
  PVOID v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)OutHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *OutHandle = 0LL;
  if ( Flags )
    return -1073741582;
  result = ObCreateObject(
             PreviousMode,
             ExpKeyedEventObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             0,
             1536,
             0,
             0,
             &Object);
  if ( result >= 0 )
  {
    v8 = Object;
    v9 = (char *)Object + 8;
    v10 = 64LL;
    do
    {
      *(v9 - 1) = 0LL;
      v9[1] = v9;
      *v9 = v9;
      v9 += 3;
      --v10;
    }
    while ( v10 );
    result = ObInsertObject(v8, 0LL, AccessMask, 0, 0LL, &Handle);
    if ( result >= 0 )
      *OutHandle = Handle;
  }
  return result;
}
