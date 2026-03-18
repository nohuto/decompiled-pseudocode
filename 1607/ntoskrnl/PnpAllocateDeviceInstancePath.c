/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x14057B480
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, unsigned int a2)
{
  PVOID PoolWithTag; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x49706E50u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC000009A : 0;
}
