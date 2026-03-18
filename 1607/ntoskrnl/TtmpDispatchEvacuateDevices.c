/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1406799F8
 * Callers:
 *     TtmDispatchApi @ 0x14067937C (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     TtmiEvacuateDevices @ 0x140676FDC (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x140678D08 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406795CC (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchEvacuateDevices(__int64 a1)
{
  int v1; // eax
  PVOID v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 0, 1, &v8, (__int64)&Object);
  v2 = Object;
  v3 = v1;
  if ( v1 >= 0 )
  {
    if ( TtmiEvacuateDevices(v8, (__int64)Object) )
      TtmiScheduleSessionWorker(v8, 1);
    v3 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchEvacuateDevices", 606, v1, v1);
  }
  if ( v8 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
    v2 = Object;
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return v3;
}
