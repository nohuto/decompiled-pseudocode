/*
 * XREFs of KiAcquireInterruptConnectLock @ 0x14012D82C
 * Callers:
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140124828 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14012D61C (KiConnectInterrupt.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 */

__int64 __fastcall KiAcquireInterruptConnectLock(int a1, _BYTE *a2, struct _GROUP_AFFINITY *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v4 = KiProcessorBlock[a1];
  *(_QWORD *)&Affinity.Group = 0LL;
  Affinity.Group = *(unsigned __int8 *)(v4 + 1616);
  Affinity.Mask = *(_QWORD *)(v4 + 1608);
  KeSetSystemGroupAffinityThread(&Affinity, a3);
  result = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  *a2 = result;
  return result;
}
