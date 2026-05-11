/*
 * XREFs of USBCaptureCompleteCallback @ 0x1C00051D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001EE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0004DFC (WPP_RECORDER_SF_dD.c)
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
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  _QWORD *v18; // rcx
  PKSGATE i; // rax
  struct _IO_WORKITEM *v20; // rcx
  int v22; // [rsp+20h] [rbp-48h]
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
    WPP_RECORDER_SF_dD((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v9, v10, v22);
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
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        4u,
        0xDu,
        (__int64)&WPP_cd889c5661493256fd20720ba3c49600_Traceguids);
LABEL_11:
    if ( *(_BYTE *)(v8 + 80) && !*(_BYTE *)v8 )
    {
      v15 = v5[1] < 0;
      *(_BYTE *)v8 = v15;
      if ( !v15 )
      {
        Context[37] = 1;
        v16 = 0;
        *(_DWORD *)(v8 + 88) = v5[33] + v5[32];
        if ( v5[33] )
        {
          v17 = (unsigned int *)(v5 + 36);
          do
          {
            if ( (v17[1] & 0x80000000) == 0 )
              *((_QWORD *)Context + 9) += *v17;
            ++v16;
            v17 += 3;
          }
          while ( v16 < v5[33] );
        }
        v18 = *(_QWORD **)(v8 + 128);
        if ( *v18 != v8 + 120 )
          __fastfail(3u);
        *a3 = v8 + 120;
        a3[1] = v18;
        *v18 = a3;
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
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            4u,
            0xFu,
            (__int64)&WPP_cd889c5661493256fd20720ba3c49600_Traceguids);
        Context[37] = 0;
        *(_BYTE *)(v8 + 83) = 1;
        if ( !*(_BYTE *)(v8 + 192) )
        {
          v20 = *(struct _IO_WORKITEM **)(v8 + 224);
          *(_BYTE *)(v8 + 192) = 1;
          IoQueueWorkItem(v20, (PIO_WORKITEM_ROUTINE)USBCaptureResetWorker, CriticalWorkQueue, v3);
        }
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, NewIrql);
  return 3221225494LL;
}
