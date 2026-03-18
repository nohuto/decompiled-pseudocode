/*
 * XREFs of NtResetEvent @ 0x140541318
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x140541200 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  LONG v6; // esi
  _DWORD *v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( NumberOfWaitingThreads && PreviousMode )
  {
    v8 = NumberOfWaitingThreads;
    if ( (unsigned __int64)NumberOfWaitingThreads >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
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
