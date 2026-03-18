/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x14041AA08
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspUnlockJobChain @ 0x14041AC44 (PspUnlockJobChain.c)
 */

void __fastcall PspUnlockJobsAndProcessExclusive(int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rcx
  __int16 v8; // ax

  v3 = *a1;
  while ( v3 )
  {
    v7 = *(_QWORD *)&a1[4 * --v3 + 2];
    if ( LOBYTE(a1[4 * v3 + 4]) )
      PspUnlockJobChain(v7, 0LL);
    else
      ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
    KeAbPostRelease(a2 + 728);
  }
  v8 = *(_WORD *)(a3 + 486) + 1;
  *(_WORD *)(a3 + 486) = v8;
  if ( !v8 && *(_QWORD *)(a3 + 152) != a3 + 152 )
    KiCheckForKernelApcDelivery();
}
