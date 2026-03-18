/*
 * XREFs of ACPIDereferenceWakeInterrupt @ 0x1C00582BC
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1C0057EE0 (ACPIAssociateWakeInterrupt.c)
 *     ACPIDisconnectWakeInterrupt @ 0x1C0058334 (ACPIDisconnectWakeInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIDereferenceWakeInterrupt(__int64 *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdi
  KIRQL v4; // si
  bool v5; // zf
  int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = *a1;
  v4 = v2;
  *a1 = 0LL;
  v5 = (*(_DWORD *)(v3 + 88))-- == 1;
  if ( v5 && *(_DWORD *)(v3 + 56) == 3 )
  {
    v6 = 1;
    v7 = *(_QWORD *)(v3 + 48);
    IoReportInterruptInactive(&v6);
    *(_DWORD *)(v3 + 56) = 4;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v4);
}
