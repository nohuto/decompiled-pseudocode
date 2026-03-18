/*
 * XREFs of NtAlertResumeThread @ 0x1406C63A4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeAlertResumeThread @ 0x1401FECBC (KeAlertResumeThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtAlertResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  KPROCESSOR_MODE PreviousMode; // bl
  _DWORD *v5; // rcx
  NTSTATUS result; // eax
  ULONG v7; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

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
             2u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( PreviousMode && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return -1073741790;
    }
    else
    {
      v7 = KeAlertResumeThread((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( SuspendCount )
        *SuspendCount = v7;
      return 0;
    }
  }
  return result;
}
