/*
 * XREFs of HUBDSM_WaitingForDetachAfterWrongDeviceDetectedOnBootDevicePort @ 0x1C001AAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_WaitingForDetachAfterWrongDeviceDetectedOnBootDevicePort(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(v1 + 1620), 0x400u);
  if ( g_ExNotifyBootDeviceRemoval )
    g_ExNotifyBootDeviceRemoval(*(_QWORD *)(v1 + 2216));
  return 1000LL;
}
