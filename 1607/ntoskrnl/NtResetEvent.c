/*
 * XREFs of NtResetEvent @ 0x1404B773C
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x1404B762C (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  LONG v6; // esi
  __int64 v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( NumberOfWaitingThreads && PreviousMode )
  {
    v8 = (__int64)NumberOfWaitingThreads;
    if ( (unsigned __int64)NumberOfWaitingThreads >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
  }
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = KeResetEvent((PRKEVENT)Object);
    ObfDereferenceObject(Object);
    if ( NumberOfWaitingThreads )
      *NumberOfWaitingThreads = v6;
  }
  return v5;
}
