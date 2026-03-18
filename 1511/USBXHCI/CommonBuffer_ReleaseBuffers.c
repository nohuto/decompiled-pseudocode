/*
 * XREFs of CommonBuffer_ReleaseBuffers @ 0x1C001D5EC
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C0020E04 (Endpoint_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0021450 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C00216F0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0024F20 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00491C0 (Interrupter_PrepareInterrupter.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004B6E0 (DeviceSlot_PrepareHardware.c)
 *     DeviceSlot_ReleaseHardware @ 0x1C005086C (DeviceSlot_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0051AD8 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 */

void __fastcall CommonBuffer_ReleaseBuffers(__int64 a1, _QWORD *a2)
{
  KIRQL v4; // bp
  _QWORD *v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-10h]

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
      v8 = *(_QWORD *)(a1 + 168);
      *v5 = v8;
      v5[1] = a1 + 168;
      if ( *(_QWORD *)(v8 + 8) != a1 + 168 )
        __fastfail(3u);
      *(_QWORD *)(v8 + 8) = v5;
      *(_QWORD *)(a1 + 168) = v5;
      ++*(_DWORD *)(a1 + 164);
    }
    else if ( v7 == 4096 )
    {
      v9 = *(_QWORD *)(a1 + 128);
      *v5 = v9;
      v5[1] = a1 + 128;
      if ( *(_QWORD *)(v9 + 8) != a1 + 128 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = v5;
      *(_QWORD *)(a1 + 128) = v5;
      ++*(_DWORD *)(a1 + 116);
    }
    else
    {
      LODWORD(v10) = *((_DWORD *)v5 + 10);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        3u,
        7u,
        0x24u,
        (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
        v10);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v4);
}
