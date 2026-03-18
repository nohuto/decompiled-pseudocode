/*
 * XREFs of NtCreateSemaphore @ 0x1403F1A14
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x14002D400 (KeInitializeSemaphore.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  LONG v5; // r14d
  PHANDLE v6; // rbx
  char PreviousMode; // si
  _QWORD *v8; // rdx
  NTSTATUS Object; // ecx
  struct _KSEMAPHORE *Semaphore; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v5 = InitialCount;
  v6 = SemaphoreHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = SemaphoreHandle;
    if ( (unsigned __int64)SemaphoreHandle >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  LOBYTE(InitialCount) = PreviousMode;
  LOBYTE(SemaphoreHandle) = PreviousMode;
  Object = ObCreateObjectEx(
             (_DWORD)SemaphoreHandle,
             (_DWORD)ExSemaphoreObjectType,
             (_DWORD)ObjectAttributes,
             InitialCount);
  if ( Object >= 0 )
  {
    KeInitializeSemaphore(Semaphore, v5, MaximumCount);
    Object = ObInsertObjectEx(Semaphore, 0, 0LL, (__int64)&v12);
    if ( Object >= 0 )
      *v6 = (HANDLE)v12;
  }
  return Object;
}
