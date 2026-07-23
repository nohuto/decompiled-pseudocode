/*
 * XREFs of AlpcpEndInitialization @ 0x14040AE6C
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall AlpcpEndInitialization(__int64 a1)
{
  ULONG_PTR v1; // rbx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  *(_BYTE *)(a1 - 32) &= ~4u;
  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  return KeAbPostRelease(v1);
}
