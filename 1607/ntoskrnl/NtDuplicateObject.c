/*
 * XREFs of NtDuplicateObject @ 0x1404EF990
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 */

NTSTATUS __stdcall NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  int v9; // r15d
  PVOID v10; // rdi
  char PreviousMode; // si
  __int64 v12; // rdx
  NTSTATUS result; // eax
  NTSTATUS v14; // r14d
  int v15; // edx
  PVOID v16; // r15
  NTSTATUS v17; // esi
  PVOID v18; // [rsp+48h] [rbp-40h] BYREF
  int v19[2]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-30h] BYREF

  v9 = (int)SourceHandle;
  v10 = 0LL;
  *(_QWORD *)v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v12 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    *TargetHandle = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)SourceProcessHandle,
             64,
             (__int64)PsProcessType,
             PreviousMode,
             1967415887,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v14 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)TargetProcessHandle,
              64,
              (__int64)PsProcessType,
              PreviousMode,
              1967415887,
              &v18,
              0LL,
              0LL);
      if ( v14 < 0 )
        v18 = 0LL;
      else
        v10 = v18;
    }
    else
    {
      v18 = 0LL;
      v14 = 0;
    }
    v15 = v9;
    v16 = Object[0];
    v17 = ObDuplicateObject(
            (int)Object[0],
            v15,
            (int)v10,
            (int)v19,
            DesiredAccess,
            HandleAttributes,
            Options,
            PreviousMode);
    if ( TargetHandle )
      *TargetHandle = *(HANDLE *)v19;
    ObfDereferenceObjectWithTag(v16, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v14 < 0 )
      return v14;
    return v17;
  }
  return result;
}
