/*
 * XREFs of NtDuplicateObject @ 0x1404241F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
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
  PVOID v11; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _QWORD *v13; // rcx
  NTSTATUS result; // eax
  int v15; // r14d
  int v16; // edx
  PVOID v17; // r15
  NTSTATUS v18; // esi
  PVOID v19; // [rsp+48h] [rbp-40h] BYREF
  int v20[2]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF

  v9 = (int)SourceHandle;
  v11 = 0LL;
  *(_QWORD *)v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v13 = TargetHandle;
    if ( (unsigned __int64)TargetHandle >= MmUserProbeAddress )
      v13 = (_QWORD *)MmUserProbeAddress;
    *v13 = *v13;
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
      v15 = ObReferenceObjectByHandleWithTag(
              TargetProcessHandle,
              0x40u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x7544624Fu,
              &v19,
              0LL);
      if ( v15 < 0 )
        v19 = 0LL;
      else
        v11 = v19;
    }
    else
    {
      v19 = 0LL;
      v15 = 0;
    }
    v16 = v9;
    v17 = Object;
    v18 = ObDuplicateObject(
            (int)Object,
            v16,
            (int)v11,
            (int)v20,
            DesiredAccess,
            HandleAttributes,
            Options,
            PreviousMode);
    if ( TargetHandle )
      *TargetHandle = *(HANDLE *)v20;
    ObfDereferenceObjectWithTag(v17, 0x7544624Fu);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x7544624Fu);
    if ( v15 < 0 )
      return v15;
    return v18;
  }
  return result;
}
