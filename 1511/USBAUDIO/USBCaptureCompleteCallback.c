/*
 * XREFs of USBCaptureCompleteCallback @ 0x1C0004E10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C28 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0004A34 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall USBCaptureCompleteCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KSPIN *v3; // r15
  int *v5; // rsi
  char *Context; // rbp
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int32 v11; // et0
  __int64 v12; // rdx
  bool v13; // r12
  __int64 v14; // rax
  bool v15; // al
  unsigned int *v16; // rcx
  _QWORD *v17; // rcx
  PKSGATE i; // rax
  struct _IO_WORKITEM *v19; // rcx
  int v21; // [rsp+20h] [rbp-48h]
  KIRQL NewIrql; // [rsp+78h] [rbp+10h]

  v3 = (struct _KSPIN *)a3[5];
  v5 = (int *)a3[3];
  Context = (char *)v3->Context;
  v8 = *((_QWORD *)Context + 17);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
  v11 = _InterlockedAdd((volatile signed __int32 *)Context + 10, 0xFFFFFFFF);
  v12 = *(unsigned int *)(a2 + 48);
  v13 = v11 == 0;
  if ( ((int)v12 < 0 || v5[1] < 0) && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v9, v10, v21);
  if ( !v13 )
    goto LABEL_11;
  v14 = *((_QWORD *)Context + 17);
  if ( !*(_BYTE *)(v14 + 12) )
  {
    *(_DWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
  }
  KeSetEvent((PRKEVENT)(Context + 104), 0, 0);
  if ( *(_BYTE *)(v8 + 80) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        4,
        13,
        (__int64)&WPP_274e87896874a8a93b442ecd4ef4c817_Traceguids);
LABEL_11:
    if ( *(_BYTE *)(v8 + 80) && !*(_BYTE *)v8 )
    {
      v15 = v5[1] < 0;
      *(_BYTE *)v8 = v15;
      if ( !v15 )
      {
        Context[37] = 1;
        LODWORD(v12) = 0;
        *(_DWORD *)(v8 + 88) = v5[33] + v5[32];
        if ( v5[33] )
        {
          v16 = (unsigned int *)(v5 + 36);
          do
          {
            if ( (v16[1] & 0x80000000) == 0 )
              *((_QWORD *)Context + 9) += *v16;
            LODWORD(v12) = v12 + 1;
            v16 += 3;
          }
          while ( (unsigned int)v12 < v5[33] );
        }
        v17 = *(_QWORD **)(v8 + 128);
        *a3 = v8 + 120;
        a3[1] = v17;
        if ( *v17 != v8 + 120 )
          __fastfail(3u);
        *v17 = a3;
        *(_QWORD *)(v8 + 128) = a3;
        if ( !*(_BYTE *)(v8 + 81) )
        {
          *(_BYTE *)(v8 + 81) = 1;
          for ( i = KsPinGetAndGate(v3); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
            ;
          KsPinAttemptProcessing(v3, 1u);
        }
      }
      if ( v13 )
        *(_BYTE *)v8 = 1;
      if ( *(_BYTE *)v8 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            4,
            15,
            (__int64)&WPP_274e87896874a8a93b442ecd4ef4c817_Traceguids);
        Context[37] = 0;
        *(_BYTE *)(v8 + 83) = 1;
        if ( !*(_BYTE *)(v8 + 192) )
        {
          v19 = *(struct _IO_WORKITEM **)(v8 + 224);
          *(_BYTE *)(v8 + 192) = 1;
          IoQueueWorkItem(v19, (PIO_WORKITEM_ROUTINE)USBCaptureResetWorker, CriticalWorkQueue, v3);
        }
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, NewIrql);
  return 3221225494LL;
}
