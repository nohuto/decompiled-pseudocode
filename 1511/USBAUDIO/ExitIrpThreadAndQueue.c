/*
 * XREFs of ExitIrpThreadAndQueue @ 0x1C00022B4
 * Callers:
 *     DeviceStop @ 0x1C00133F0 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0013510 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x1C001A81C (CleanupPendingIrpQ.c)
 */

LONG_PTR __fastcall ExitIrpThreadAndQueue(__int64 a1)
{
  LONG_PTR result; // rax

  result = CleanupPendingIrpQ();
  if ( *(_QWORD *)(a1 + 672) )
  {
    *(_BYTE *)(a1 + 680) = 1;
    KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 640), 0, 1, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 672), Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(*(PVOID *)(a1 + 672));
    *(_QWORD *)(a1 + 672) = 0LL;
  }
  return result;
}
