/*
 * XREFs of MiUnlockDriverMappings @ 0x140107D04
 * Callers:
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockDriverMappings(__int64 a1)
{
  __int16 v2; // ax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EA38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EA38);
  KeAbPostRelease((ULONG_PTR)&qword_14034EA38);
  v2 = *(_WORD *)(a1 + 486) + 1;
  *(_WORD *)(a1 + 486) = v2;
  if ( !v2 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
}
