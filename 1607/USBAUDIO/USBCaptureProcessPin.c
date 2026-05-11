/*
 * XREFs of USBCaptureProcessPin @ 0x1C0005410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     USBCaptureCopyRequestToBuffer @ 0x1C0022500 (USBCaptureCopyRequestToBuffer.c)
 */

__int64 __fastcall USBCaptureProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rax
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // r15
  KIRQL v5; // al
  KIRQL v6; // r12
  struct _KSSTREAM_POINTER *LeadingEdgeStreamPointer; // rsi
  __int64 **v8; // rdi
  __int64 *v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 **v12; // rdx
  struct _IO_WORKITEM *v13; // rcx
  PKSGATE i; // rax
  char v16; // [rsp+60h] [rbp+8h] BYREF

  Context = Pin->Context;
  v3 = Context[17];
  v4 = Context + 12;
  v5 = KeAcquireSpinLockRaiseToDpc(Context + 12);
  *(_BYTE *)(v3 + 82) = 1;
  v6 = v5;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  if ( LeadingEdgeStreamPointer )
  {
    v8 = (__int64 **)(v3 + 120);
    do
    {
      if ( *v8 == (__int64 *)v8 )
        break;
      if ( !*(_BYTE *)(v3 + 80) )
        goto LABEL_26;
      v9 = *v8;
      KeReleaseSpinLock(v4, v6);
      USBCaptureCopyRequestToBuffer(v9, LeadingEdgeStreamPointer, &v16);
      if ( v16 )
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      v6 = KeAcquireSpinLockRaiseToDpc(v4);
      if ( *((_DWORD *)v9 + 8) == *(_DWORD *)(v3 + 92) && *(_BYTE *)(v3 + 80) )
      {
        *((_DWORD *)v9 + 8) = 0;
        v10 = *v8;
        v11 = **v8;
        if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v11 + 8) != v10 )
          __fastfail(3u);
        *v8 = (__int64 *)v11;
        *(_QWORD *)(v11 + 8) = v8;
        v12 = *(__int64 ***)(v3 + 112);
        if ( *v12 != (__int64 *)(v3 + 104) )
          __fastfail(3u);
        *v10 = v3 + 104;
        v10[1] = (__int64)v12;
        *v12 = v10;
        *(_QWORD *)(v3 + 112) = v10;
        if ( !*(_BYTE *)(v3 + 232) )
        {
          v13 = *(struct _IO_WORKITEM **)(v3 + 264);
          *(_BYTE *)(v3 + 232) = 1;
          IoQueueWorkItem(v13, (PIO_WORKITEM_ROUTINE)USBCaptureRequeueWorker, CriticalWorkQueue, Pin);
        }
      }
    }
    while ( LeadingEdgeStreamPointer );
  }
  if ( *(_BYTE *)(v3 + 80) && *(_QWORD *)(v3 + 120) == v3 + 120 )
  {
    for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        3u,
        0x15u,
        (__int64)&WPP_cd889c5661493256fd20720ba3c49600_Traceguids,
        Pin);
    *(_BYTE *)(v3 + 81) = 0;
  }
LABEL_26:
  if ( LeadingEdgeStreamPointer )
    KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
  *(_BYTE *)(v3 + 82) = 0;
  KeReleaseSpinLock(v4, v6);
  return 0LL;
}
