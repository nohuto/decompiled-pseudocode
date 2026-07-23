/*
 * XREFs of NtReleaseSemaphore @ 0x1404A7800
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v6; // edi
  PVOID v7; // r14
  LONG v8; // esi
  __int64 v10; // rdx
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v10 = (__int64)PreviousCount;
    if ( (unsigned __int64)PreviousCount >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( ReleaseCount <= 0 )
    return -1073741811;
  v6 = ObReferenceObjectByHandle(SemaphoreHandle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, Object, 0LL);
  v7 = Object[0];
  Object[2] = Object[0];
  if ( v6 >= 0 )
  {
    v8 = KeReleaseSemaphore((PRKSEMAPHORE)Object[0], 1, ReleaseCount, 0);
    ObfDereferenceObject(v7);
    if ( PreviousCount )
      *PreviousCount = v8;
  }
  return v6;
}
