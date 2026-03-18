/*
 * XREFs of NtCreatePartition @ 0x14066120C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     MiCreatePartition @ 0x1406601A8 (MiCreatePartition.c)
 */

NTSTATUS __fastcall NtCreatePartition(void *a1, unsigned __int64 a2, ACCESS_MASK a3, __int64 a4)
{
  _QWORD *v6; // r14
  KPROCESSOR_MODE PreviousMode; // si
  int v8; // edi
  _QWORD *v9; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF

  v6 = (_QWORD *)a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a2 = *(_QWORD *)a2;
  }
  v8 = 0;
  v9 = 0LL;
  if ( a1 )
  {
    result = ObReferenceObjectByHandle(a1, 2u, MmPartitionObjectType, PreviousMode, &Object, 0LL);
    v8 = result;
    v9 = Object;
    if ( result < 0 )
      return result;
    if ( *(int **)Object == MiSystemPartition )
    {
      ObfDereferenceObject(Object);
      v9 = 0LL;
    }
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    v8 = -1073741727;
  if ( v8 >= 0 )
  {
    v8 = MiCreatePartition(v9, a3, a4, PreviousMode, &v12);
    if ( v8 >= 0 )
      *v6 = v12;
  }
  if ( v9 )
    ObfDereferenceObject(v9);
  return v8;
}
