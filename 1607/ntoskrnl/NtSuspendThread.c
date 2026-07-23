/*
 * XREFs of NtSuspendThread @ 0x1404EAB70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x1404EAC24 (PsSuspendThread.c)
 */

NTSTATUS __stdcall NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v5; // rcx
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  ULONG v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    v5 = (__int64)PreviousSuspendCount;
    if ( (unsigned __int64)PreviousSuspendCount >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v5 = *(_DWORD *)v5;
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
