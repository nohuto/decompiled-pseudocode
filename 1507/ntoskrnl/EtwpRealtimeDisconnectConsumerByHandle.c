/*
 * XREFs of EtwpRealtimeDisconnectConsumerByHandle @ 0x14054D1D8
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14054D698 (EtwpRealtimeDisconnectConsumer.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumerByHandle(void *a1)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = ObReferenceObjectByHandle(
         a1,
         0x400u,
         EtwpRealTimeConnectionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    EtwpRealtimeDisconnectConsumer(Object);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v1;
}
