/*
 * XREFs of KxSetTimeStampBusy @ 0x1400E2F30
 * Callers:
 *     KxFlushEntireTb @ 0x140007A1C (KxFlushEntireTb.c)
 *     KeInvalidateAllCaches @ 0x1400F3D78 (KeInvalidateAllCaches.c)
 *     KiFlushAddressSpaceTb @ 0x1401C7210 (KiFlushAddressSpaceTb.c)
 *     KiSetTbFlushTimeStampBusy @ 0x1401C72DC (KiSetTbFlushTimeStampBusy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

char __fastcall KxSetTimeStampBusy(int *a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  int v5; // edi
  int v7; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  _m_prefetchw(a1);
  v4 = *a1;
  v5 = v4;
  do
  {
    if ( (v4 & 1) == 0 && !_interlockedbittestandset(a1, 0) )
      return 1;
    KeYieldProcessorEx(&v8, a2, a3);
    v4 = *a1;
    v7 = *a1 - v5;
  }
  while ( v7 < 3 && (v7 < 2 || (v5 & 1) != 0) );
  return 0;
}
