/*
 * XREFs of USBCaptureResetWorker @ 0x1C0004D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     PinWaitForStarvation @ 0x1C00020F8 (PinWaitForStarvation.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C0004D08 (USBCaptureWaitForWorkerComplete.c)
 *     USBCaptureStartTransfers @ 0x1C0021F28 (USBCaptureStartTransfers.c)
 */

void __fastcall USBCaptureResetWorker(PDEVICE_OBJECT DeviceObject, struct _KSPIN *Context)
{
  _QWORD *v2; // r14
  __int64 v4; // rdi
  KIRQL v5; // bp
  KSPIN_LOCK *v6; // rcx
  __int64 **v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  __int64 v13; // rdx
  int started; // eax
  KIRQL v15; // bl
  __int64 v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+30h] [rbp-28h]

  v2 = Context->Context;
  v4 = v2[17];
  KsPinAcquireProcessingMutex(Context);
  USBCaptureWaitForWorkerComplete((__int64)v2, (_BYTE *)(v4 + 232), (struct _KEVENT *)(v4 + 240));
  v5 = KeAcquireSpinLockRaiseToDpc(v2 + 12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v17 = *(unsigned __int8 *)(v4 + 80);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0xAu,
      (__int64)&WPP_ddbe84fb90e1895f15dcd3eb4541c966_Traceguids,
      Context,
      v17);
  }
  v6 = v2 + 12;
  if ( *(_BYTE *)(v4 + 80) )
  {
    KeReleaseSpinLock(v6, v5);
    PinWaitForStarvation((__int64)Context);
    *(_QWORD *)(v4 + 112) = v4 + 104;
    v7 = (__int64 **)(v4 + 120);
    *(_QWORD *)(v4 + 104) = v4 + 104;
    while ( *v7 != (__int64 *)v7 )
    {
      v8 = *v7;
      v9 = **v7;
      if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
        __fastfail(3u);
      *v7 = (__int64 *)v9;
      v10 = 0;
      *(_QWORD *)(v9 + 8) = v7;
      v11 = v8[3];
      if ( *(_DWORD *)(v11 + 132) )
      {
        v12 = (unsigned int *)(v11 + 144);
        do
        {
          if ( (v12[1] & 0x80000000) == 0 )
            v2[9] -= *v12;
          ++v10;
          v12 += 3;
        }
        while ( v10 < *(_DWORD *)(v11 + 132) );
      }
    }
  }
  else
  {
    KeReleaseSpinLock(v6, v5);
  }
  KsPinReleaseProcessingMutex(Context);
  if ( *(_BYTE *)(v4 + 80) )
  {
    LOBYTE(v13) = 1;
    started = USBCaptureStartTransfers(Context, v13);
    if ( started < 0 )
    {
      LODWORD(v16) = started;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        8u,
        0xBu,
        (__int64)&WPP_ddbe84fb90e1895f15dcd3eb4541c966_Traceguids,
        Context,
        v16);
    }
  }
  v15 = KeAcquireSpinLockRaiseToDpc(v2 + 12);
  KeSetEvent((PRKEVENT)(v4 + 200), 0, 0);
  *(_BYTE *)(v4 + 192) = 0;
  KeReleaseSpinLock(v2 + 12, v15);
}
