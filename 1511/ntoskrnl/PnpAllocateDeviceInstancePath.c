/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x140547518
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, unsigned int a2)
{
  PVOID PoolWithTag; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)768, a2, 0x49706E50u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC000009A : 0;
}
