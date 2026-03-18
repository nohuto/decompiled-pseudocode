/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C001FE70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromS0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 v5; // rdi
  KIRQL v6; // al
  int *v7; // rbx
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043318)
                 + 8);
  v3 = *(_QWORD *)(v2 + 120);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 64), 4u, 3u, 0x59u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, a1);
  v4 = 0;
  for ( *(_BYTE *)(v2 + 356) = 1; v4 < *(_DWORD *)(v3 + 16); ++v4 )
  {
    v5 = 56LL * v4;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + *(_QWORD *)(v3 + 48) + 16LL));
    v7 = (int *)(*(_QWORD *)(v3 + 40) + 16LL * v4);
    *v7 = *v7 & 0xC200 | 0xE000000;
    _InterlockedOr(v9, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + *(_QWORD *)(v3 + 48) + 16LL), v6);
  }
  return 0LL;
}
