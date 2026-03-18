/*
 * XREFs of NtAlertThread @ 0x140643714
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThread @ 0x140030D64 (KeAlertThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtAlertThread(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             4u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    KeAlertThread((__int64)Object, PreviousMode);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0;
  }
  return result;
}
