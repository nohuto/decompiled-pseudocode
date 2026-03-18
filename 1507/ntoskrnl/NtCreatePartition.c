/*
 * XREFs of NtCreatePartition @ 0x1406A4588
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 */

NTSTATUS __fastcall NtCreatePartition(HANDLE Handle, __int64 *a2, ACCESS_MASK a3, int a4, unsigned int a5)
{
  __int64 *v7; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int16 v9; // si
  NTSTATUS result; // eax
  int v11; // edi
  _QWORD *v12; // rbx
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  v7 = a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    *a2 = *a2;
  }
  v9 = a5;
  if ( a5 == -1 )
  {
    v9 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  }
  else if ( a5 >= (unsigned __int16)KeNumberNodes )
  {
    return -1073741582;
  }
  v11 = 0;
  v12 = 0LL;
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 2u, MmPartitionObjectType, PreviousMode, &Object, 0LL);
    v11 = result;
    v12 = Object;
    if ( result < 0 )
      return result;
    if ( *(__int16 **)Object == MiSystemPartition )
    {
      ObfDereferenceObject(Object);
      v12 = 0LL;
    }
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    v11 = -1073741727;
  if ( v11 >= 0 )
  {
    v11 = MiCreatePartition(v12, a3, a4, PreviousMode, v9, &v14);
    if ( v11 >= 0 )
      *v7 = v14;
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  return v11;
}
