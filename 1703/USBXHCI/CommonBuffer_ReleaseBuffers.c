/*
 * XREFs of CommonBuffer_ReleaseBuffers @ 0x1C0019DC0
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C001DCE0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C001DF80 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0021900 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004D6A0 (Interrupter_PrepareInterrupter.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004D8E0 (DeviceSlot_PrepareHardware.c)
 *     DeviceSlot_ReleaseHardware @ 0x1C0054644 (DeviceSlot_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0055768 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 */

void __fastcall CommonBuffer_ReleaseBuffers(__int64 a1, _QWORD *a2)
{
  KIRQL v4; // bp
  _QWORD *v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+28h] [rbp-10h]

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  while ( 1 )
  {
    v5 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 == a2 )
      break;
    v6 = *v5;
    if ( (_QWORD *)v5[1] != a2 || *(_QWORD **)(v6 + 8) != v5 )
      __fastfail(3u);
    *a2 = v6;
    *(_QWORD *)(v6 + 8) = a2;
    v5[9] = 0LL;
    *((_DWORD *)v5 + 16) = 0;
    v7 = *((_DWORD *)v5 + 10);
    if ( v7 == 512 )
    {
      v8 = (_QWORD *)(a1 + 168);
      v9 = *(_QWORD *)(a1 + 168);
      if ( *(_QWORD *)(v9 + 8) != a1 + 168 )
        __fastfail(3u);
      *v5 = v9;
      v5[1] = v8;
      *(_QWORD *)(v9 + 8) = v5;
      *v8 = v5;
      ++*(_DWORD *)(a1 + 164);
    }
    else if ( v7 == 4096 )
    {
      v10 = (_QWORD *)(a1 + 128);
      v11 = *(_QWORD *)(a1 + 128);
      if ( *(_QWORD *)(v11 + 8) != a1 + 128 )
        __fastfail(3u);
      *v5 = v11;
      v5[1] = v10;
      *(_QWORD *)(v11 + 8) = v5;
      *v10 = v5;
      ++*(_DWORD *)(a1 + 116);
    }
    else
    {
      LODWORD(v12) = *((_DWORD *)v5 + 10);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        3u,
        7u,
        0x24u,
        (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
        v12);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v4);
}
