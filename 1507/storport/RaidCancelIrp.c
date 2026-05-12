/*
 * XREFs of RaidCancelIrp @ 0x1C002FF58
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C0030D5C (RaUnitDisableDeviceIrp.c)
 *     RaidUnitCancelPendingRequests @ 0x1C00326C8 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000EDE4 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidCancelIrp(__int64 a1, char a2, IRP *a3)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r10

  *(_BYTE *)(a3->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = a2;
  v4 = RaidSrbStatusToNtStatus(a2);
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_DWORD *)(v5 + 48) = v4;
  RaUnitReleaseRemoveLock(v6);
  return RaidCompleteRequestEx(a3, 0, a3->IoStatus.Status);
}
