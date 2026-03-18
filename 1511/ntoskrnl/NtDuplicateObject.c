/*
 * XREFs of NtDuplicateObject @ 0x1404240F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  _QWORD *v12; // rdx
  NTSTATUS result; // eax
  int v14; // r14d
  int v15; // edx
  PVOID v16; // r15
  NTSTATUS v17; // esi
  PVOID v18; // [rsp+48h] [rbp-40h] BYREF
  int v19[2]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF

  v9 = (int)SourceHandle;
  v10 = 0LL;
  *(_QWORD *)v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v12 = TargetHandle;
    if ( (unsigned __int64)TargetHandle >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
    *TargetHandle = 0LL;
  }
  result = ObReferenceObjectByHandleWithTag(
             SourceProcessHandle,
             0x40u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x7544624Fu,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v14 = ObReferenceObjectByHandleWithTag(
              TargetProcessHandle,
              0x40u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x7544624Fu,
              &v18,
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
    v16 = Object;
    v17 = ObDuplicateObject(
            (int)Object,
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
