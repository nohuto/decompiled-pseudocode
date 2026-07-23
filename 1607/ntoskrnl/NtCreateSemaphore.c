/*
 * XREFs of NtCreateSemaphore @ 0x1404F9390
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x1400EFE80 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  char PreviousMode; // si
  __int64 v9; // rdx
  NTSTATUS inserted; // ecx
  __int64 v12; // [rsp+20h] [rbp-48h]
  PRKSEMAPHORE Semaphore; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)SemaphoreHandle;
    if ( (unsigned __int64)SemaphoreHandle >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExSemaphoreObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v12,
               32,
               0,
               0,
               &Semaphore,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeSemaphore(Semaphore, InitialCount, MaximumCount);
    inserted = ObInsertObjectEx(Semaphore, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v14);
    LODWORD(Semaphore) = inserted;
    if ( inserted >= 0 )
      *SemaphoreHandle = (HANDLE)v14;
  }
  return inserted;
}
