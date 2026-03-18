/*
 * XREFs of KiVerifyXcpt15 @ 0x14072D2A0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     KdDisableDebugger @ 0x140142870 (KdDisableDebugger.c)
 *     _local_unwind @ 0x140143D90 (_local_unwind.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x1401C1FF0 (KdEnableDebugger.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     KiVerifyXcpt2 @ 0x1407670E4 (KiVerifyXcpt2.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[9]; // [rsp+0h] [rbp-48h] BYREF

  v0[7] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_14072D2BF);
}
