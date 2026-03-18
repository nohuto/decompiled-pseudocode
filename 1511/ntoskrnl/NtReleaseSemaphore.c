/*
 * XREFs of NtReleaseSemaphore @ 0x14049E890
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v6; // edi
  PVOID v7; // r14
  LONG v8; // esi
  _DWORD *v10; // rdx
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v10 = PreviousCount;
    if ( (unsigned __int64)PreviousCount >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
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
