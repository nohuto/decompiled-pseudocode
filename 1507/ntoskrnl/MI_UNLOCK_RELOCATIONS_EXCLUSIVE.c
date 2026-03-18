/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14002D3A4
 * Callers:
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MI_UNLOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax

  v2 = a2 + 24;
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 24);
  KeAbPostRelease(v2);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(v5, v4, v6);
  }
  return result;
}
