/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C001C410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int128 v4; // xmm0
  unsigned int i; // ebp
  __int64 v6; // rdi
  KIRQL v7; // al
  _DWORD *v8; // rbx
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  v3 = *(_QWORD *)(v2 + 120);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 64), 4u, 3u, 0x5Au, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, a1);
  v4 = *(_OWORD *)(v2 + 232);
  *(_BYTE *)(v2 + 356) = 0;
  v10 = v4;
  if ( (v4 & 0x20000000) == 0 )
  {
    for ( i = 0; i < *(_DWORD *)(v3 + 16); ++i )
    {
      v6 = 56LL * i;
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + *(_QWORD *)(v3 + 48) + 16LL));
      v8 = (_DWORD *)(*(_QWORD *)(v3 + 40) + 16LL * i);
      *v8 &= 0xC200u;
      _InterlockedOr(v9, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + *(_QWORD *)(v3 + 48) + 16LL), v7);
    }
  }
}
