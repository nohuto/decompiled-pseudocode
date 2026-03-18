/*
 * XREFs of AlpcpEndInitialization @ 0x14040BFAC
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x14040D720 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
