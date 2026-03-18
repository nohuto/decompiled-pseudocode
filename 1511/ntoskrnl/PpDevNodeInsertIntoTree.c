/*
 * XREFs of PpDevNodeInsertIntoTree @ 0x140106660
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PipProcessEnumeratedChildDevice @ 0x140457C40 (PipProcessEnumeratedChildDevice.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PpDevNodeInsertIntoTree(__int64 a1, __int64 a2)
{
  KIRQL v4; // dl
  unsigned int v5; // ecx
  bool v6; // cc
  _QWORD *v7; // rax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v5 = *(_DWORD *)(a1 + 136) + 1;
  v6 = v5 <= IopMaxDeviceNodeLevel;
  *(_DWORD *)(a2 + 136) = v5;
  if ( !v6 )
    IopMaxDeviceNodeLevel = v5;
  *(_QWORD *)(a2 + 16) = a1;
  _InterlockedOr(v8, 0);
  v7 = *(_QWORD **)(a1 + 24);
  if ( v7 )
    *v7 = a2;
  else
    *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  KeReleaseSpinLock(&PnpSpinLock, v4);
}
