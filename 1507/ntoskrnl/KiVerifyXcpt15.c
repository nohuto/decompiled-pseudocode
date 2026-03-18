/*
 * XREFs of KiVerifyXcpt15 @ 0x14079A2A0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     KdDisableDebugger @ 0x140170694 (KdDisableDebugger.c)
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x1401FDC58 (KdEnableDebugger.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     KiVerifyXcpt2 @ 0x1407D9D38 (KiVerifyXcpt2.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[9]; // [rsp+0h] [rbp-48h] BYREF

  v0[7] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_14079A2BF);
}
