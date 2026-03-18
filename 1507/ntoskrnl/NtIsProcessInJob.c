/*
 * XREFs of NtIsProcessInJob @ 0x14053CB08
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PspIsProcessInJob @ 0x14053CC40 (PspIsProcessInJob.c)
 */

NTSTATUS __stdcall NtIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *p_Lock; // rbx
  NTSTATUS v8; // eax
  PVOID v9; // rdx
  NTSTATUS IsProcessInJob; // esi
  void *v11; // rdx
  PVOID v12; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    v12 = p_Lock;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x624A7350u,
               &v12,
               0LL);
    if ( result < 0 )
      return result;
    p_Lock = v12;
  }
  if ( !JobHandle )
  {
    v9 = (PVOID)p_Lock[118];
    p_Lock = v12;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v9);
    if ( JobHandle )
      ObfDereferenceObject(v11);
    goto LABEL_8;
  }
  v8 = ObReferenceObjectByHandle(JobHandle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v9 = Object;
  IsProcessInJob = v8;
  if ( v8 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
