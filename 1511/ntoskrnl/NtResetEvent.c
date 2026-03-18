/*
 * XREFs of NtResetEvent @ 0x1404B0364
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x1404B0254 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
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
