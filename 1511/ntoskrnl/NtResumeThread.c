/*
 * XREFs of NtResumeThread @ 0x1404A766C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsResumeThread @ 0x1404A7714 (PsResumeThread.c)
 */

NTSTATUS __stdcall NtResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v5; // rcx
  NTSTATUS result; // eax
  ULONG v7; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && SuspendCount )
  {
    v5 = SuspendCount;
    if ( (unsigned __int64)SuspendCount >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
  }
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x1000u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    PsResumeThread(Object, &v7);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( SuspendCount )
      *SuspendCount = v7;
    return 0;
  }
  return result;
}
