/*
 * XREFs of KiVerifyXcpt15 @ 0x1407772E0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KdDisableDebugger @ 0x1401D137C (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1401D1450 (KdEnableDebugger.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     KiVerifyXcpt2 @ 0x1407B1760 (KiVerifyXcpt2.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[9]; // [rsp+0h] [rbp-48h] BYREF

  v0[7] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_1407772FF);
}
