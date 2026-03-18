/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x14022F11C
 * Callers:
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int16 v4; // ax

  v2 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 872));
  KeAbPostRelease(v2);
  *(_BYTE *)(a1 + 1732) &= ~2u;
  v4 = *(_WORD *)(a1 + 486) + 1;
  *(_WORD *)(a1 + 486) = v4;
  if ( !v4 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
}
