/*
 * XREFs of USBCaptureClosePin @ 0x1C0022430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C0004EC0 (USBCaptureWaitForWorkerComplete.c)
 */

__int64 __fastcall USBCaptureClosePin(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 136);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0x13u,
      (__int64)&WPP_cd889c5661493256fd20720ba3c49600_Traceguids,
      a1);
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 192), (struct _KEVENT *)(v3 + 200));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 224));
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 232), (struct _KEVENT *)(v3 + 240));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 264));
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  v5 = *(void **)(v4 + 72);
  if ( v5 )
  {
    ExFreePool(v5);
    *(_QWORD *)(v4 + 72) = 0LL;
  }
  return 0LL;
}
