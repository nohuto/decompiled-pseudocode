/*
 * XREFs of AlpcpEndInitialization @ 0x140475C30
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpEndInitialization(__int64 a1)
{
  ULONG_PTR v1; // rbx
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  *(_BYTE *)(a1 - 32) &= ~4u;
  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  KeAbPostRelease(v1);
}
