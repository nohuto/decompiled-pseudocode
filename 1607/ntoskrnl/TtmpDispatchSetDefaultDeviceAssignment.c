/*
 * XREFs of TtmpDispatchSetDefaultDeviceAssignment @ 0x140679C00
 * Callers:
 *     TtmDispatchApi @ 0x14067937C (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406795CC (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x14067B8C4 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 */

__int64 __fastcall TtmpDispatchSetDefaultDeviceAssignment(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 0, &v10, (__int64)&Object);
  v4 = v10;
  v5 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 16) != 0;
    *(_DWORD *)(v10 + 4) ^= (*(_DWORD *)(v10 + 4) ^ ((unsigned __int8)v3 << 11)) & 0x800;
    TtmiLogSessionDeviceAssignmentPolicySet(v3);
    v5 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDefaultDeviceAssignment", 698, v2, v2);
  }
  if ( v4 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
