/*
 * XREFs of NtSuspendThread @ 0x1404F38E8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x1404F399C (PsSuspendThread.c)
 */

NTSTATUS __stdcall NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v5; // rcx
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  ULONG v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    v5 = PreviousSuspendCount;
    if ( (unsigned __int64)PreviousSuspendCount >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
  }
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             2u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v7 = PsSuspendThread(Object, &v8);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( PreviousSuspendCount )
      *PreviousSuspendCount = v8;
    return v7;
  }
  return result;
}
